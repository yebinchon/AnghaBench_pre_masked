
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nvkm_memory {int dummy; } ;
struct nvkm_fifo_cgrp {int chan_nr; int id; } ;


 int FUNC_0 (struct nvkm_memory*,scalar_t__,int) ;

void
FUNC_1(struct nvkm_fifo_cgrp *VAR_0,
   struct nvkm_memory *VAR_1, u32 VAR_2)
{
 FUNC_0(VAR_1, VAR_2 + 0x0, (128 << 24) | (3 << 16) | 0x00000001);
 FUNC_0(VAR_1, VAR_2 + 0x4, VAR_0->chan_nr);
 FUNC_0(VAR_1, VAR_2 + 0x8, VAR_0->id);
 FUNC_0(VAR_1, VAR_2 + 0xc, 0x00000000);
}
