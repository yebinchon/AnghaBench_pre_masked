
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct spu_state {scalar_t__* spu_chnldata_RW; scalar_t__* spu_chnlcnt_RW; } ;
struct spu_context {struct spu_state csa; } ;



__attribute__((used)) static u64 FUNC_0(struct spu_context *VAR_0)
{
 struct spu_state *VAR_1 = &VAR_0->csa;
 u64 VAR_2;
 VAR_2 = VAR_1->spu_chnlcnt_RW[0];
 if (VAR_2)
  return VAR_1->spu_chnldata_RW[0];
 return 0;
}
