
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct bnxt_re_dev {int num_msix; TYPE_1__* nq; int chip_ctx; } ;
struct TYPE_2__ {int * res; int ring_id; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bnxt_re_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct bnxt_re_dev *VAR_0)
{
 u8 VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_msix - 1; VAR_2++) {
  VAR_1 = FUNC_1(&VAR_0->chip_ctx);
  FUNC_2(VAR_0, VAR_0->nq[VAR_2].ring_id, VAR_1);
  VAR_0->nq[VAR_2].res = ((void*)0);
  FUNC_0(&VAR_0->nq[VAR_2]);
 }
}
