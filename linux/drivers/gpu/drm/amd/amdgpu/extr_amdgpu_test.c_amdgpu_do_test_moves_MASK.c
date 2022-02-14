
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct dma_fence {int dummy; } ;
struct amdgpu_ring {int dummy; } ;
struct TYPE_12__ {unsigned int gart_size; int gart_start; int vram_start; } ;
struct TYPE_10__ {scalar_t__ ring_size; scalar_t__ ring_obj; } ;
struct TYPE_11__ {TYPE_4__ ih; } ;
struct TYPE_9__ {scalar_t__ wb_obj; } ;
struct TYPE_7__ {struct amdgpu_ring* buffer_funcs_ring; } ;
struct amdgpu_device {TYPE_6__ gmc; TYPE_5__ irq; TYPE_3__ wb; TYPE_2__** rings; TYPE_1__ mman; } ;
struct amdgpu_bo_param {unsigned int size; void* domain; int * resv; int type; scalar_t__ flags; int byte_align; } ;
struct amdgpu_bo {int tbo; } ;
typedef int bp ;
struct TYPE_8__ {scalar_t__ ring_size; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct amdgpu_device*,struct amdgpu_bo_param*,struct amdgpu_bo**) ;
 int FUNC_3 (struct amdgpu_bo*) ;
 int FUNC_4 (struct amdgpu_bo*,void**) ;
 int FUNC_5 (struct amdgpu_bo*) ;
 int FUNC_6 (struct amdgpu_bo*,void*) ;
 int FUNC_7 (struct amdgpu_bo*,int) ;
 int FUNC_8 (struct amdgpu_bo*) ;
 int FUNC_9 (struct amdgpu_bo**) ;
 int FUNC_10 (struct amdgpu_bo*) ;
 int FUNC_11 (struct amdgpu_ring*,int,int,unsigned int,int *,struct dma_fence**,int,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct dma_fence*) ;
 int FUNC_14 (struct dma_fence*,int) ;
 struct amdgpu_bo** FUNC_15 (unsigned int,int,int ) ;
 int FUNC_16 (struct amdgpu_bo**) ;
 int FUNC_17 (struct amdgpu_bo_param*,int ,int) ;
 int FUNC_18 (char*) ;
 int VAR_7 ;
 scalar_t__ FUNC_19 (int) ;

__attribute__((used)) static void FUNC_20(struct amdgpu_device *VAR_8)
{
 struct amdgpu_ring *VAR_9 = VAR_8->mman.buffer_funcs_ring;
 struct amdgpu_bo *VAR_10 = ((void*)0);
 struct amdgpu_bo **VAR_11 = ((void*)0);
 struct amdgpu_bo_param VAR_12;
 uint64_t VAR_13, VAR_14;
 unsigned VAR_15, VAR_16;
 int VAR_17, VAR_18;

 VAR_16 = 1024 * 1024;




 VAR_15 = VAR_8->gmc.gart_size - VAR_3*64*1024;
 for (VAR_17 = 0; VAR_17 < VAR_4; ++VAR_17)
  if (VAR_8->rings[VAR_17])
   VAR_15 -= VAR_8->rings[VAR_17]->ring_size;
 if (VAR_8->wb.wb_obj)
  VAR_15 -= VAR_2;
 if (VAR_8->irq.ih.ring_obj)
  VAR_15 -= VAR_8->irq.ih.ring_size;
 VAR_15 /= VAR_16;

 VAR_11 = FUNC_15(VAR_15, sizeof(*VAR_11), VAR_5);
 if (!VAR_11) {
  FUNC_0("Failed to allocate %d pointers\n", VAR_15);
  VAR_18 = 1;
  goto out_cleanup;
 }
 FUNC_17(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.size = VAR_16;
 VAR_12.byte_align = VAR_6;
 VAR_12.domain = VAR_1;
 VAR_12.flags = 0;
 VAR_12.type = VAR_7;
 VAR_12.resv = ((void*)0);

 VAR_18 = FUNC_2(VAR_8, &VAR_12, &VAR_10);
 if (VAR_18) {
  FUNC_0("Failed to create VRAM object\n");
  goto out_cleanup;
 }
 VAR_18 = FUNC_7(VAR_10, 0);
 if (FUNC_19(VAR_18 != 0))
  goto out_unref;
 VAR_18 = FUNC_6(VAR_10, VAR_1);
 if (VAR_18) {
  FUNC_0("Failed to pin VRAM object\n");
  goto out_unres;
 }
 VAR_14 = FUNC_3(VAR_10);
 for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++) {
  void *VAR_19, *VAR_20;
  void **VAR_21, **VAR_22;
  void **VAR_23, **VAR_24;
  struct dma_fence *VAR_25 = ((void*)0);

  VAR_12.domain = VAR_0;
  VAR_18 = FUNC_2(VAR_8, &VAR_12, VAR_11 + VAR_17);
  if (VAR_18) {
   FUNC_0("Failed to create GTT object %d\n", VAR_17);
   goto out_lclean;
  }

  VAR_18 = FUNC_7(VAR_11[VAR_17], 0);
  if (FUNC_19(VAR_18 != 0))
   goto out_lclean_unref;
  VAR_18 = FUNC_6(VAR_11[VAR_17], VAR_0);
  if (VAR_18) {
   FUNC_0("Failed to pin GTT object %d\n", VAR_17);
   goto out_lclean_unres;
  }
  VAR_18 = FUNC_12(&VAR_11[VAR_17]->tbo);
  if (VAR_18) {
   FUNC_0("%p bind failed\n", VAR_11[VAR_17]);
   goto out_lclean_unpin;
  }
  VAR_13 = FUNC_3(VAR_11[VAR_17]);

  VAR_18 = FUNC_4(VAR_11[VAR_17], &VAR_19);
  if (VAR_18) {
   FUNC_0("Failed to map GTT object %d\n", VAR_17);
   goto out_lclean_unpin;
  }

  for (VAR_21 = VAR_19, VAR_22 = VAR_19 + VAR_16;
       VAR_21 < VAR_22;
       VAR_21++)
   *VAR_21 = VAR_21;

  FUNC_5(VAR_11[VAR_17]);

  VAR_18 = FUNC_11(VAR_9, VAR_13, VAR_14,
           VAR_16, ((void*)0), &VAR_25, 0, 0);

  if (VAR_18) {
   FUNC_0("Failed GTT->VRAM copy %d\n", VAR_17);
   goto out_lclean_unpin;
  }

  VAR_18 = FUNC_14(VAR_25, 0);
  if (VAR_18) {
   FUNC_0("Failed to wait for GTT->VRAM fence %d\n", VAR_17);
   goto out_lclean_unpin;
  }

  FUNC_13(VAR_25);

  VAR_18 = FUNC_4(VAR_10, &VAR_20);
  if (VAR_18) {
   FUNC_0("Failed to map VRAM object after copy %d\n", VAR_17);
   goto out_lclean_unpin;
  }

  for (VAR_21 = VAR_19, VAR_22 = VAR_19 + VAR_16,
       VAR_23 = VAR_20, VAR_24 = VAR_20 + VAR_16;
       VAR_23 < VAR_24;
       VAR_21++, VAR_23++) {
   if (*VAR_23 != VAR_21) {
    FUNC_0("Incorrect GTT->VRAM copy %d: Got 0x%p, "
       "expected 0x%p (GTT/VRAM offset "
       "0x%16llx/0x%16llx)\n",
       VAR_17, *VAR_23, VAR_21,
       (unsigned long long)
       (VAR_13 - VAR_8->gmc.gart_start +
        (void*)VAR_21 - VAR_19),
       (unsigned long long)
       (VAR_14 - VAR_8->gmc.vram_start +
        (void*)VAR_21 - VAR_19));
    FUNC_5(VAR_10);
    goto out_lclean_unpin;
   }
   *VAR_23 = VAR_23;
  }

  FUNC_5(VAR_10);

  VAR_18 = FUNC_11(VAR_9, VAR_14, VAR_13,
           VAR_16, ((void*)0), &VAR_25, 0, 0);

  if (VAR_18) {
   FUNC_0("Failed VRAM->GTT copy %d\n", VAR_17);
   goto out_lclean_unpin;
  }

  VAR_18 = FUNC_14(VAR_25, 0);
  if (VAR_18) {
   FUNC_0("Failed to wait for VRAM->GTT fence %d\n", VAR_17);
   goto out_lclean_unpin;
  }

  FUNC_13(VAR_25);

  VAR_18 = FUNC_4(VAR_11[VAR_17], &VAR_19);
  if (VAR_18) {
   FUNC_0("Failed to map GTT object after copy %d\n", VAR_17);
   goto out_lclean_unpin;
  }

  for (VAR_21 = VAR_19, VAR_22 = VAR_19 + VAR_16,
       VAR_23 = VAR_20, VAR_24 = VAR_20 + VAR_16;
       VAR_21 < VAR_22;
       VAR_21++, VAR_23++) {
   if (*VAR_21 != VAR_23) {
    FUNC_0("Incorrect VRAM->GTT copy %d: Got 0x%p, "
       "expected 0x%p (VRAM/GTT offset "
       "0x%16llx/0x%16llx)\n",
       VAR_17, *VAR_21, VAR_23,
       (unsigned long long)
       (VAR_14 - VAR_8->gmc.vram_start +
        (void*)VAR_23 - VAR_20),
       (unsigned long long)
       (VAR_13 - VAR_8->gmc.gart_start +
        (void*)VAR_23 - VAR_20));
    FUNC_5(VAR_11[VAR_17]);
    goto out_lclean_unpin;
   }
  }

  FUNC_5(VAR_11[VAR_17]);

  FUNC_1("Tested GTT->VRAM and VRAM->GTT copy for GTT offset 0x%llx\n",
    VAR_13 - VAR_8->gmc.gart_start);
  continue;

out_lclean_unpin:
  FUNC_8(VAR_11[VAR_17]);
out_lclean_unres:
  FUNC_10(VAR_11[VAR_17]);
out_lclean_unref:
  FUNC_9(&VAR_11[VAR_17]);
out_lclean:
  for (--VAR_17; VAR_17 >= 0; --VAR_17) {
   FUNC_8(VAR_11[VAR_17]);
   FUNC_10(VAR_11[VAR_17]);
   FUNC_9(&VAR_11[VAR_17]);
  }
  if (VAR_25)
   FUNC_13(VAR_25);
  break;
 }

 FUNC_8(VAR_10);
out_unres:
 FUNC_10(VAR_10);
out_unref:
 FUNC_9(&VAR_10);
out_cleanup:
 FUNC_16(VAR_11);
 if (VAR_18) {
  FUNC_18("Error while testing BO move\n");
 }
}
