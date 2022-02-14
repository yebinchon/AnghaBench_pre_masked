
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_fb_tile {scalar_t__ zcomp; scalar_t__ pitch; scalar_t__ limit; scalar_t__ addr; } ;
struct nvkm_fb {int dummy; } ;



void
FUNC_0(struct nvkm_fb *VAR_0, int VAR_1, struct nvkm_fb_tile *VAR_2)
{
 VAR_2->addr = 0;
 VAR_2->limit = 0;
 VAR_2->pitch = 0;
 VAR_2->zcomp = 0;
}
