
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnxt_qplib_res {TYPE_1__* pdev; } ;
struct bnxt_qplib_dpi_tbl {size_t max; int ** app_tbl; int tbl; } ;
struct bnxt_qplib_dpi {size_t dpi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,size_t) ;
 int FUNC_1 (struct bnxt_qplib_dpi*,int ,int) ;
 scalar_t__ FUNC_2 (size_t,int ) ;

int FUNC_3(struct bnxt_qplib_res *VAR_1,
      struct bnxt_qplib_dpi_tbl *VAR_2,
      struct bnxt_qplib_dpi *VAR_3)
{
 if (VAR_3->dpi >= VAR_2->max) {
  FUNC_0(&VAR_1->pdev->dev, "Invalid DPI? dpi = %d\n", VAR_3->dpi);
  return -VAR_0;
 }
 if (FUNC_2(VAR_3->dpi, VAR_2->tbl)) {
  FUNC_0(&VAR_1->pdev->dev, "Freeing an unused DPI? dpi = %d\n",
    VAR_3->dpi);
  return -VAR_0;
 }
 if (VAR_2->app_tbl)
  VAR_2->app_tbl[VAR_3->dpi] = ((void*)0);
 FUNC_1(VAR_3, 0, sizeof(*VAR_3));

 return 0;
}
