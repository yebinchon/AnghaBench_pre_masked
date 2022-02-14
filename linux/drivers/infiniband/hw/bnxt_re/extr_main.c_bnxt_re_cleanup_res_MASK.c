
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rcfw; } ;
struct bnxt_re_dev {int num_msix; TYPE_1__ qplib_res; int * nq; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct bnxt_re_dev *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 1; VAR_1 < VAR_0->num_msix; VAR_1++)
  FUNC_1(&VAR_0->nq[VAR_1 - 1]);

 if (VAR_0->qplib_res.rcfw)
  FUNC_0(&VAR_0->qplib_res);
}
