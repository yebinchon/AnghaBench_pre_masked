
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int mb_stat_R; int pu_mb_R; } ;
struct TYPE_3__ {int* spu_chnlcnt_RW; int register_lock; TYPE_2__ prob; } ;
struct spu_context {TYPE_1__ csa; } ;


 int VAR_0 ;
 int FUNC_0 (struct spu_context*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct spu_context *VAR_1, u32 * VAR_2)
{
 u32 VAR_3;
 int VAR_4 = 0;

 FUNC_1(&VAR_1->csa.register_lock);
 VAR_3 = VAR_1->csa.prob.mb_stat_R;
 if (VAR_3 & 0x0000ff) {




  *VAR_2 = VAR_1->csa.prob.pu_mb_R;
  VAR_1->csa.prob.mb_stat_R &= ~(0x0000ff);
  VAR_1->csa.spu_chnlcnt_RW[28] = 1;
  FUNC_0(VAR_1, VAR_0);
  VAR_4 = 4;
 }
 FUNC_2(&VAR_1->csa.register_lock);
 return VAR_4;
}
