
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_qplib_res {int pdev; } ;
struct bnxt_qplib_dpi_tbl {scalar_t__ dbr_bar_reg_iomem; int app_tbl; int tbl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct bnxt_qplib_dpi_tbl*,int ,int) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct bnxt_qplib_res *VAR_0,
        struct bnxt_qplib_dpi_tbl *VAR_1)
{
 FUNC_0(VAR_1->tbl);
 FUNC_0(VAR_1->app_tbl);
 if (VAR_1->dbr_bar_reg_iomem)
  FUNC_2(VAR_0->pdev, VAR_1->dbr_bar_reg_iomem);
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
}
