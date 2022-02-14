
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct bnxt_qplib_res {TYPE_1__* pdev; } ;
struct bnxt_qplib_dpi_tbl {int unmapped_dbr; int max; int dbr_bar_reg_iomem; scalar_t__ tbl; int * app_tbl; } ;
typedef int resource_size_t ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int,int) ;
 int * FUNC_2 (int,int,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_9(struct bnxt_qplib_res *VAR_5,
        struct bnxt_qplib_dpi_tbl *VAR_6,
        u32 VAR_7)
{
 u32 VAR_8 = VAR_4;
 resource_size_t VAR_9;
 u32 VAR_10, VAR_11;

 if (VAR_6->dbr_bar_reg_iomem) {
  FUNC_0(&VAR_5->pdev->dev, "DBR BAR region %d already mapped\n",
   VAR_8);
  return -VAR_0;
 }

 VAR_9 = FUNC_8(VAR_5->pdev, VAR_8);
 if (!VAR_9) {
  FUNC_0(&VAR_5->pdev->dev, "BAR region %d resc start failed\n",
   VAR_8);
  return -VAR_1;
 }

 VAR_10 = FUNC_7(VAR_5->pdev, VAR_8) - VAR_7;
 if (!VAR_10 || ((VAR_10 & (VAR_3 - 1)) != 0)) {
  FUNC_0(&VAR_5->pdev->dev, "Invalid DBR length %d\n", VAR_10);
  return -VAR_1;
 }

 VAR_6->dbr_bar_reg_iomem = FUNC_1(VAR_9 + VAR_7,
        VAR_10);
 if (!VAR_6->dbr_bar_reg_iomem) {
  FUNC_0(&VAR_5->pdev->dev,
   "FP: DBR BAR region %d mapping failed\n", VAR_8);
  return -VAR_1;
 }

 VAR_6->unmapped_dbr = VAR_9 + VAR_7;
 VAR_6->max = VAR_10 / VAR_3;

 VAR_6->app_tbl = FUNC_2(VAR_6->max, sizeof(void *), VAR_2);
 if (!VAR_6->app_tbl)
  goto unmap_io;

 VAR_11 = VAR_6->max >> 3;
 if (!VAR_11)
  VAR_11 = 1;

 VAR_6->tbl = FUNC_4(VAR_11, VAR_2);
 if (!VAR_6->tbl) {
  FUNC_3(VAR_6->app_tbl);
  VAR_6->app_tbl = ((void*)0);
  goto unmap_io;
 }

 FUNC_5((u8 *)VAR_6->tbl, 0xFF, VAR_11);

 return 0;

unmap_io:
 FUNC_6(VAR_5->pdev, VAR_6->dbr_bar_reg_iomem);
 return -VAR_1;
}
