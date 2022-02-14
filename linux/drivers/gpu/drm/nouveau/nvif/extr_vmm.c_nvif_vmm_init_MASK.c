
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u64 ;
typedef scalar_t__ u32 ;
struct nvif_vmm_v0 {int managed; int page_nr; void* size; void* addr; int data; scalar_t__ version; } ;
struct nvif_vmm_page_v0 {int index; int comp; int host; int vram; int sparse; int shift; } ;
struct TYPE_4__ {int * client; } ;
struct nvif_vmm {int page_nr; TYPE_3__* page; TYPE_1__ object; void* limit; void* start; } ;
struct nvif_mmu {int object; } ;
typedef int s32 ;
typedef int args ;
struct TYPE_5__ {int comp; int host; int vram; int sparse; int shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nvif_vmm_v0*) ;
 struct nvif_vmm_v0* FUNC_1 (scalar_t__,int ) ;
 TYPE_3__* FUNC_2 (int,int,int ) ;
 int FUNC_3 (int ,void*,scalar_t__) ;
 int FUNC_4 (int *,int ,int ,struct nvif_vmm_v0*,scalar_t__,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,struct nvif_vmm_page_v0*,int) ;
 int FUNC_6 (struct nvif_vmm*) ;

int
FUNC_7(struct nvif_mmu *VAR_4, s32 VAR_5, bool VAR_6, u64 VAR_7,
       u64 VAR_8, void *VAR_9, u32 VAR_10, struct nvif_vmm *VAR_11)
{
 struct nvif_vmm_v0 *VAR_12;
 u32 VAR_13 = sizeof(*VAR_12) + VAR_10;
 int VAR_14 = -VAR_1, VAR_15;

 VAR_11->object.client = ((void*)0);
 VAR_11->page = ((void*)0);

 if (!(VAR_12 = FUNC_1(VAR_13, VAR_2)))
  return -VAR_0;
 VAR_12->version = 0;
 VAR_12->managed = VAR_6;
 VAR_12->addr = VAR_7;
 VAR_12->size = VAR_8;
 FUNC_3(VAR_12->data, VAR_9, VAR_10);

 VAR_14 = FUNC_4(&VAR_4->object, 0, VAR_5, VAR_12, VAR_13,
          &VAR_11->object);
 if (VAR_14)
  goto done;

 VAR_11->start = VAR_12->addr;
 VAR_11->limit = VAR_12->size;

 VAR_11->page_nr = VAR_12->page_nr;
 VAR_11->page = FUNC_2(VAR_11->page_nr, sizeof(*VAR_11->page),
      VAR_2);
 if (!VAR_11->page) {
  VAR_14 = -VAR_0;
  goto done;
 }

 for (VAR_15 = 0; VAR_15 < VAR_11->page_nr; VAR_15++) {
  struct nvif_vmm_page_v0 VAR_16 = { .index = VAR_15 };

  VAR_14 = FUNC_5(&VAR_11->object, VAR_3,
           &VAR_16, sizeof(VAR_16));
  if (VAR_14)
   break;

  VAR_11->page[VAR_15].shift = VAR_16.shift;
  VAR_11->page[VAR_15].sparse = VAR_16.sparse;
  VAR_11->page[VAR_15].vram = VAR_16.vram;
  VAR_11->page[VAR_15].host = VAR_16.host;
  VAR_11->page[VAR_15].comp = VAR_16.comp;
 }

done:
 if (VAR_14)
  FUNC_6(VAR_11);
 FUNC_0(VAR_12);
 return VAR_14;
}
