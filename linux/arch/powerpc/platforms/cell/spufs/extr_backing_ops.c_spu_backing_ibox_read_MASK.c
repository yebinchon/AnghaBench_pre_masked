
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int int_mask_class2_RW; } ;
struct TYPE_6__ {int mb_stat_R; } ;
struct TYPE_5__ {int puint_mb_R; } ;
struct TYPE_8__ {int* spu_chnlcnt_RW; int register_lock; TYPE_3__ priv1; TYPE_2__ prob; TYPE_1__ priv2; } ;
struct spu_context {TYPE_4__ csa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct spu_context*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct spu_context *VAR_2, u32 * VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_2->csa.register_lock);
 if (VAR_2->csa.prob.mb_stat_R & 0xff0000) {




  *VAR_3 = VAR_2->csa.priv2.puint_mb_R;
  VAR_2->csa.prob.mb_stat_R &= ~(0xff0000);
  VAR_2->csa.spu_chnlcnt_RW[30] = 1;
  FUNC_0(VAR_2, VAR_1);
  VAR_4 = 4;
 } else {

  VAR_2->csa.priv1.int_mask_class2_RW |= VAR_0;
  VAR_4 = 0;
 }
 FUNC_2(&VAR_2->csa.register_lock);
 return VAR_4;
}
