
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_ram {int dummy; } ;
struct gf100_ram {int fuc; } ;


 struct gf100_ram* FUNC_0 (struct nvkm_ram*) ;
 int FUNC_1 (int *,int) ;

void
FUNC_2(struct nvkm_ram *VAR_0)
{
 struct gf100_ram *VAR_1 = FUNC_0(VAR_0);
 FUNC_1(&VAR_1->fuc, 0);
}
