
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvif_object {int dummy; } ;
struct nvif_mmu_v0 {int heap_nr; int type_nr; int kind_nr; int dmabits; scalar_t__ version; } ;
struct nvif_mmu_type_v0 {int index; int count; int data; scalar_t__ version; int heap; scalar_t__ uncached; scalar_t__ coherent; scalar_t__ mappable; scalar_t__ kind; scalar_t__ disp; scalar_t__ comp; scalar_t__ host; scalar_t__ vram; int size; } ;
struct nvif_mmu_kind_v0 {int index; int count; int data; scalar_t__ version; int heap; scalar_t__ uncached; scalar_t__ coherent; scalar_t__ mappable; scalar_t__ kind; scalar_t__ disp; scalar_t__ comp; scalar_t__ host; scalar_t__ vram; int size; } ;
struct nvif_mmu_heap_v0 {int index; int count; int data; scalar_t__ version; int heap; scalar_t__ uncached; scalar_t__ coherent; scalar_t__ mappable; scalar_t__ kind; scalar_t__ disp; scalar_t__ comp; scalar_t__ host; scalar_t__ vram; int size; } ;
struct nvif_mmu {int heap_nr; int type_nr; int kind_nr; int * kind; int object; TYPE_2__* type; TYPE_1__* heap; int mem; int dmabits; } ;
struct nvif_mclass {int member_1; int oclass; int member_0; } ;
typedef int s32 ;
typedef int args ;
struct TYPE_4__ {int heap; int type; } ;
struct TYPE_3__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct nvif_mmu_type_v0*) ;
 struct nvif_mmu_type_v0* FUNC_1 (size_t,int ) ;
 void* FUNC_2 (int,int,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,struct nvif_mclass const*) ;
 int FUNC_5 (struct nvif_mmu*) ;
 int FUNC_6 (struct nvif_object*,int ,int ,struct nvif_mmu_v0*,int,int *) ;
 int FUNC_7 (int *,int ,struct nvif_mmu_type_v0*,size_t) ;
 size_t FUNC_8 (struct nvif_mmu_type_v0*,int ,int) ;

int
FUNC_9(struct nvif_object *VAR_14, s32 VAR_15, struct nvif_mmu *VAR_16)
{
 static const struct nvif_mclass VAR_17[] = {
  { 130, -1 },
  { 128 , -1 },
  { 129 , -1 },
  {}
 };
 struct nvif_mmu_v0 VAR_18;
 int VAR_19, VAR_20;

 VAR_18.version = 0;
 VAR_16->heap = ((void*)0);
 VAR_16->type = ((void*)0);
 VAR_16->kind = ((void*)0);

 VAR_19 = FUNC_6(VAR_14, 0, VAR_15, &VAR_18, sizeof(VAR_18),
          &VAR_16->object);
 if (VAR_19)
  goto done;

 VAR_16->dmabits = VAR_18.dmabits;
 VAR_16->heap_nr = VAR_18.heap_nr;
 VAR_16->type_nr = VAR_18.type_nr;
 VAR_16->kind_nr = VAR_18.kind_nr;

 VAR_19 = FUNC_4(&VAR_16->object, VAR_17);
 if (VAR_19 < 0)
  goto done;
 VAR_16->mem = VAR_17[VAR_19].oclass;

 VAR_16->heap = FUNC_2(VAR_16->heap_nr, sizeof(*VAR_16->heap),
      VAR_1);
 VAR_16->type = FUNC_2(VAR_16->type_nr, sizeof(*VAR_16->type),
      VAR_1);
 if (VAR_19 = -VAR_0, !VAR_16->heap || !VAR_16->type)
  goto done;

 VAR_16->kind = FUNC_2(VAR_16->kind_nr, sizeof(*VAR_16->kind),
      VAR_1);
 if (!VAR_16->kind && VAR_16->kind_nr)
  goto done;

 for (VAR_20 = 0; VAR_20 < VAR_16->heap_nr; VAR_20++) {
  struct nvif_mmu_heap_v0 VAR_21 = { .index = VAR_20 };

  VAR_19 = FUNC_7(&VAR_16->object, VAR_10,
           &VAR_21, sizeof(VAR_21));
  if (VAR_19)
   goto done;

  VAR_16->heap[VAR_20].size = VAR_21.size;
 }

 for (VAR_20 = 0; VAR_20 < VAR_16->type_nr; VAR_20++) {
  struct nvif_mmu_type_v0 VAR_22 = { .index = VAR_20 };

  VAR_19 = FUNC_7(&VAR_16->object, VAR_12,
           &VAR_22, sizeof(VAR_22));
  if (VAR_19)
   goto done;

  VAR_16->type[VAR_20].type = 0;
  if (VAR_22.vram) VAR_16->type[VAR_20].type |= VAR_9;
  if (VAR_22.host) VAR_16->type[VAR_20].type |= VAR_5;
  if (VAR_22.comp) VAR_16->type[VAR_20].type |= VAR_3;
  if (VAR_22.disp) VAR_16->type[VAR_20].type |= VAR_4;
  if (VAR_22.kind ) VAR_16->type[VAR_20].type |= VAR_6;
  if (VAR_22.mappable) VAR_16->type[VAR_20].type |= VAR_7;
  if (VAR_22.coherent) VAR_16->type[VAR_20].type |= VAR_2;
  if (VAR_22.uncached) VAR_16->type[VAR_20].type |= VAR_8;
  VAR_16->type[VAR_20].heap = VAR_22.heap;
 }

 if (VAR_16->kind_nr) {
  struct nvif_mmu_kind_v0 *VAR_23;
  size_t VAR_24 = FUNC_8(VAR_23, VAR_13, VAR_16->kind_nr);

  if (VAR_19 = -VAR_0, !(VAR_23 = FUNC_1(VAR_24, VAR_1)))
   goto done;
  VAR_23->version = 0;
  VAR_23->count = VAR_16->kind_nr;

  VAR_19 = FUNC_7(&VAR_16->object, VAR_11,
           VAR_23, VAR_24);
  if (VAR_19 == 0)
   FUNC_3(VAR_16->kind, VAR_23->data, VAR_23->count);
  FUNC_0(VAR_23);
 }

done:
 if (VAR_19)
  FUNC_5(VAR_16);
 return VAR_19;
}
