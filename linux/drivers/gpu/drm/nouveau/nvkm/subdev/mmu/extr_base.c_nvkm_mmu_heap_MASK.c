
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct nvkm_mmu {size_t heap_nr; TYPE_1__* heap; } ;
struct TYPE_2__ {scalar_t__ size; int type; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_mmu *VAR_1, u8 VAR_2, u64 VAR_3)
{
 if (VAR_3) {
  if (!FUNC_1(VAR_1->heap_nr == FUNC_0(VAR_1->heap))) {
   VAR_1->heap[VAR_1->heap_nr].type = VAR_2;
   VAR_1->heap[VAR_1->heap_nr].size = VAR_3;
   return VAR_1->heap_nr++;
  }
 }
 return -VAR_0;
}
