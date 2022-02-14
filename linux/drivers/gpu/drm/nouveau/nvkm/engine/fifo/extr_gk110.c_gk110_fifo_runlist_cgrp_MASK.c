
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
 FUNC_0(VAR_1, VAR_2 + 0, (VAR_0->chan_nr << 26) | (128 << 18) |
          (3 << 14) | 0x00002000 | VAR_0->id);
 FUNC_0(VAR_1, VAR_2 + 4, 0x00000000);
}
