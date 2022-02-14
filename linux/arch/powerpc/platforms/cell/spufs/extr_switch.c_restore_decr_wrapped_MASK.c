
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spu_state {int* spu_chnlcnt_RW; int* spu_chnldata_RW; TYPE_2__* lscsa; } ;
struct spu {int dummy; } ;
struct TYPE_3__ {int* slot; } ;
struct TYPE_4__ {TYPE_1__ decr_status; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct spu_state *VAR_1, struct spu *VAR_2)
{





 if (!(VAR_1->lscsa->decr_status.slot[0] & VAR_0))
  return;

 if ((VAR_1->spu_chnlcnt_RW[0] == 0) &&
     (VAR_1->spu_chnldata_RW[1] & 0x20) &&
     !(VAR_1->spu_chnldata_RW[0] & 0x20))
  VAR_1->spu_chnlcnt_RW[0] = 1;

 VAR_1->spu_chnldata_RW[0] |= 0x20;
}
