
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct etnaviv_vram_mapping {scalar_t__ iova; } ;
struct etnaviv_cmdbuf {scalar_t__ suballoc_offset; } ;



u32 FUNC_0(struct etnaviv_cmdbuf *VAR_0,
     struct etnaviv_vram_mapping *VAR_1)
{
 return VAR_1->iova + VAR_0->suballoc_offset;
}
