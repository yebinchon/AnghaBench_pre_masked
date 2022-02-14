
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__* spu_chnlcnt_RW; scalar_t__* spu_chnldata_RW; } ;
struct spu_context {TYPE_1__ csa; } ;



__attribute__((used)) static void FUNC_0(struct spu_context *VAR_0, u32 VAR_1)
{
 u64 VAR_2;
 u64 VAR_3;
 u64 VAR_4;

 VAR_2 = VAR_0->csa.spu_chnlcnt_RW[0];
 VAR_3 = VAR_0->csa.spu_chnldata_RW[0];
 VAR_4 = VAR_0->csa.spu_chnldata_RW[1];
 VAR_0->csa.spu_chnldata_RW[0] |= VAR_1;
 if ((VAR_2 == 0) && !(VAR_3 & VAR_1) && (VAR_4 & VAR_1)) {
  VAR_0->csa.spu_chnlcnt_RW[0] = 1;
 }
}
