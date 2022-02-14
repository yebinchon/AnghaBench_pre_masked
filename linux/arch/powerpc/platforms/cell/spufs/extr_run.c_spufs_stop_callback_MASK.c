
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int class_1_dar; int class_1_dsisr; int class_0_dar; int class_0_pending; } ;
struct spu_context {int stop_wq; TYPE_1__ csa; } ;
struct spu {int class_1_dar; int class_1_dsisr; int class_0_dar; int class_0_pending; struct spu_context* ctx; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;

void FUNC_2(struct spu *VAR_0, int VAR_1)
{
 struct spu_context *VAR_2 = VAR_0->ctx;
 if (VAR_2) {

  switch(VAR_1) {
  case 0 :
   VAR_2->csa.class_0_pending = VAR_0->class_0_pending;
   VAR_2->csa.class_0_dar = VAR_0->class_0_dar;
   break;
  case 1 :
   VAR_2->csa.class_1_dsisr = VAR_0->class_1_dsisr;
   VAR_2->csa.class_1_dar = VAR_0->class_1_dar;
   break;
  case 2 :
   break;
  }



  FUNC_0();

  FUNC_1(&VAR_2->stop_wq);
 }
}
