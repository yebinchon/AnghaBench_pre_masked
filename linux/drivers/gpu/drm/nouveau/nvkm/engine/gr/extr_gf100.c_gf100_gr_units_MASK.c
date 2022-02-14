
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nvkm_gr {int dummy; } ;
struct gf100_gr {scalar_t__ rop_nr; scalar_t__ tpc_total; scalar_t__ gpc_nr; } ;


 struct gf100_gr* FUNC_0 (struct nvkm_gr*) ;

u64
FUNC_1(struct nvkm_gr *VAR_0)
{
 struct gf100_gr *VAR_1 = FUNC_0(VAR_0);
 u64 VAR_2;

 VAR_2 = (u32)VAR_1->gpc_nr;
 VAR_2 |= (u32)VAR_1->tpc_total << 8;
 VAR_2 |= (u64)VAR_1->rop_nr << 32;

 return VAR_2;
}
