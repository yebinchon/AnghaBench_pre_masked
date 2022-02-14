
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct nvkm_mmu {size_t type_nr; TYPE_2__* type; TYPE_1__* heap; } ;
struct TYPE_4__ {int type; int heap; } ;
struct TYPE_3__ {int type; } ;


 size_t FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_mmu *VAR_0, int VAR_1, u8 VAR_2)
{
 if (VAR_1 >= 0 && !FUNC_1(VAR_0->type_nr == FUNC_0(VAR_0->type))) {
  VAR_0->type[VAR_0->type_nr].type = VAR_2 | VAR_0->heap[VAR_1].type;
  VAR_0->type[VAR_0->type_nr].heap = VAR_1;
  VAR_0->type_nr++;
 }
}
