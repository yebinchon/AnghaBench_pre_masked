
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int spu_cfg_RW; } ;
struct TYPE_4__ {int* spu_chnlcnt_RW; int register_lock; int * spu_chnldata_RW; TYPE_1__ priv2; } ;
struct spu_context {TYPE_2__ csa; } ;


 int VAR_0 ;
 int FUNC_0 (struct spu_context*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct spu_context *VAR_1, u32 VAR_2)
{
 FUNC_1(&VAR_1->csa.register_lock);
 if (VAR_1->csa.priv2.spu_cfg_RW & 0x1)
  VAR_1->csa.spu_chnldata_RW[3] |= VAR_2;
 else
  VAR_1->csa.spu_chnldata_RW[3] = VAR_2;
 VAR_1->csa.spu_chnlcnt_RW[3] = 1;
 FUNC_0(VAR_1, VAR_0);
 FUNC_2(&VAR_1->csa.register_lock);
}
