
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct bnxt_qplib_dpi_tbl {size_t max; scalar_t__ unmapped_dbr; scalar_t__ dbr_bar_reg_iomem; void** app_tbl; int tbl; } ;
struct bnxt_qplib_dpi {size_t dpi; scalar_t__ umdbr; scalar_t__ dbr; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (size_t,int ) ;
 size_t FUNC_1 (int ,size_t) ;

int FUNC_2(struct bnxt_qplib_dpi_tbl *VAR_2,
    struct bnxt_qplib_dpi *VAR_3,
    void *VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_1(VAR_2->tbl, VAR_2->max);
 if (VAR_5 == VAR_2->max)
  return -VAR_0;


 FUNC_0(VAR_5, VAR_2->tbl);
 VAR_2->app_tbl[VAR_5] = VAR_4;

 VAR_3->dpi = VAR_5;
 VAR_3->dbr = VAR_2->dbr_bar_reg_iomem + (VAR_5 * VAR_1);
 VAR_3->umdbr = VAR_2->unmapped_dbr + (VAR_5 * VAR_1);

 return 0;
}
