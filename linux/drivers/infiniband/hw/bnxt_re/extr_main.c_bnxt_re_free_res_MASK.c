
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ max; } ;
struct TYPE_4__ {int * rcfw; TYPE_3__ dpi_tbl; } ;
struct bnxt_re_dev {TYPE_1__ qplib_res; int dpi_privileged; } ;


 int FUNC_0 (TYPE_1__*,TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct bnxt_re_dev*) ;

__attribute__((used)) static void FUNC_3(struct bnxt_re_dev *VAR_0)
{
 FUNC_2(VAR_0);

 if (VAR_0->qplib_res.dpi_tbl.max) {
  FUNC_0(&VAR_0->qplib_res,
           &VAR_0->qplib_res.dpi_tbl,
           &VAR_0->dpi_privileged);
 }
 if (VAR_0->qplib_res.rcfw) {
  FUNC_1(&VAR_0->qplib_res);
  VAR_0->qplib_res.rcfw = ((void*)0);
 }
}
