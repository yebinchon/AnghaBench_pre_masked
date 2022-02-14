
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvif_mmu {int object; int heap; int type; int kind; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct nvif_mmu *VAR_0)
{
 FUNC_0(VAR_0->kind);
 FUNC_0(VAR_0->type);
 FUNC_0(VAR_0->heap);
 FUNC_1(&VAR_0->object);
}
