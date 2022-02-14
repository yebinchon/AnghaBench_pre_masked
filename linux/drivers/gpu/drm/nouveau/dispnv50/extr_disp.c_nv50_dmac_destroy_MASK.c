
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv50_dmac {int push; int base; int sync; int vram; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct nv50_dmac *VAR_0)
{
 FUNC_2(&VAR_0->vram);
 FUNC_2(&VAR_0->sync);

 FUNC_0(&VAR_0->base);

 FUNC_1(&VAR_0->push);
}
