
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct radeon_fence {int dummy; } ;
struct TYPE_4__ {unsigned int gtt_size; int gtt_start; int vram_start; } ;
struct radeon_device {unsigned int gart_pin_size; TYPE_1__ mc; } ;
struct TYPE_5__ {int resv; } ;
struct TYPE_6__ {TYPE_2__ base; } ;
struct radeon_bo {TYPE_3__ tbo; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct radeon_fence*) ;
 int VAR_1 ;
 int FUNC_3 (struct radeon_fence*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;


 struct radeon_bo** FUNC_4 (unsigned int,int,int ) ;
 int FUNC_5 (struct radeon_bo**) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct radeon_device*,unsigned int,int ,int,int ,int ,int *,int *,struct radeon_bo**) ;
 int FUNC_8 (struct radeon_bo*,void**) ;
 int FUNC_9 (struct radeon_bo*) ;
 int FUNC_10 (struct radeon_bo*,int ,int*) ;
 int FUNC_11 (struct radeon_bo*,int) ;
 int FUNC_12 (struct radeon_bo*) ;
 int FUNC_13 (struct radeon_bo**) ;
 int FUNC_14 (struct radeon_bo*) ;
 struct radeon_fence* FUNC_15 (struct radeon_device*,int,int,unsigned int,int ) ;
 int FUNC_16 (struct radeon_device*) ;
 struct radeon_fence* FUNC_17 (struct radeon_device*,int,int,unsigned int,int ) ;
 int FUNC_18 (struct radeon_device*) ;
 int FUNC_19 (struct radeon_fence**) ;
 int FUNC_20 (struct radeon_fence*,int) ;
 scalar_t__ FUNC_21 (int) ;

__attribute__((used)) static void FUNC_22(struct radeon_device *VAR_6, int VAR_7)
{
 struct radeon_bo *VAR_8 = ((void*)0);
 struct radeon_bo **VAR_9 = ((void*)0);
 uint64_t VAR_10, VAR_11;
 unsigned VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16;

 switch (VAR_7) {
 case 128:
  VAR_16 = FUNC_18(VAR_6);
  break;
 case 129:
  VAR_16 = FUNC_16(VAR_6);
  break;
 default:
  FUNC_0("Unknown copy method\n");
  return;
 }

 VAR_13 = 1024 * 1024;




 VAR_12 = VAR_6->mc.gtt_size - VAR_6->gart_pin_size;
 VAR_12 /= VAR_13;

 VAR_9 = FUNC_4(VAR_12, sizeof(*VAR_9), VAR_0);
 if (!VAR_9) {
  FUNC_0("Failed to allocate %d pointers\n", VAR_12);
  VAR_15 = 1;
  goto out_cleanup;
 }

 VAR_15 = FUNC_7(VAR_6, VAR_13, VAR_1, 1, VAR_4,
        0, ((void*)0), ((void*)0), &VAR_8);
 if (VAR_15) {
  FUNC_0("Failed to create VRAM object\n");
  goto out_cleanup;
 }
 VAR_15 = FUNC_11(VAR_8, 0);
 if (FUNC_21(VAR_15 != 0))
  goto out_unref;
 VAR_15 = FUNC_10(VAR_8, VAR_4, &VAR_11);
 if (VAR_15) {
  FUNC_0("Failed to pin VRAM object\n");
  goto out_unres;
 }
 for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {
  void *VAR_17, *VAR_18;
  void **VAR_19, **VAR_20;
  void **VAR_21, **VAR_22;
  struct radeon_fence *VAR_23 = ((void*)0);

  VAR_15 = FUNC_7(VAR_6, VAR_13, VAR_1, 1,
         VAR_3, 0, ((void*)0), ((void*)0),
         VAR_9 + VAR_14);
  if (VAR_15) {
   FUNC_0("Failed to create GTT object %d\n", VAR_14);
   goto out_lclean;
  }

  VAR_15 = FUNC_11(VAR_9[VAR_14], 0);
  if (FUNC_21(VAR_15 != 0))
   goto out_lclean_unref;
  VAR_15 = FUNC_10(VAR_9[VAR_14], VAR_3, &VAR_10);
  if (VAR_15) {
   FUNC_0("Failed to pin GTT object %d\n", VAR_14);
   goto out_lclean_unres;
  }

  VAR_15 = FUNC_8(VAR_9[VAR_14], &VAR_17);
  if (VAR_15) {
   FUNC_0("Failed to map GTT object %d\n", VAR_14);
   goto out_lclean_unpin;
  }

  for (VAR_19 = VAR_17, VAR_20 = VAR_17 + VAR_13;
       VAR_19 < VAR_20;
       VAR_19++)
   *VAR_19 = VAR_19;

  FUNC_9(VAR_9[VAR_14]);

  if (VAR_16 == VAR_2)
   VAR_23 = FUNC_17(VAR_6, VAR_10, VAR_11,
      VAR_13 / VAR_5,
      VAR_8->tbo.base.resv);
  else
   VAR_23 = FUNC_15(VAR_6, VAR_10, VAR_11,
       VAR_13 / VAR_5,
       VAR_8->tbo.base.resv);
  if (FUNC_2(VAR_23)) {
   FUNC_0("Failed GTT->VRAM copy %d\n", VAR_14);
   VAR_15 = FUNC_3(VAR_23);
   goto out_lclean_unpin;
  }

  VAR_15 = FUNC_20(VAR_23, 0);
  if (VAR_15) {
   FUNC_0("Failed to wait for GTT->VRAM fence %d\n", VAR_14);
   goto out_lclean_unpin;
  }

  FUNC_19(&VAR_23);

  VAR_15 = FUNC_8(VAR_8, &VAR_18);
  if (VAR_15) {
   FUNC_0("Failed to map VRAM object after copy %d\n", VAR_14);
   goto out_lclean_unpin;
  }

  for (VAR_19 = VAR_17, VAR_20 = VAR_17 + VAR_13,
       VAR_21 = VAR_18, VAR_22 = VAR_18 + VAR_13;
       VAR_21 < VAR_22;
       VAR_19++, VAR_21++) {
   if (*VAR_21 != VAR_19) {
    FUNC_0("Incorrect GTT->VRAM copy %d: Got 0x%p, "
       "expected 0x%p (GTT/VRAM offset "
       "0x%16llx/0x%16llx)\n",
       VAR_14, *VAR_21, VAR_19,
       (unsigned long long)
       (VAR_10 - VAR_6->mc.gtt_start +
        (void*)VAR_19 - VAR_17),
       (unsigned long long)
       (VAR_11 - VAR_6->mc.vram_start +
        (void*)VAR_19 - VAR_17));
    FUNC_9(VAR_8);
    goto out_lclean_unpin;
   }
   *VAR_21 = VAR_21;
  }

  FUNC_9(VAR_8);

  if (VAR_16 == VAR_2)
   VAR_23 = FUNC_17(VAR_6, VAR_11, VAR_10,
      VAR_13 / VAR_5,
      VAR_8->tbo.base.resv);
  else
   VAR_23 = FUNC_15(VAR_6, VAR_11, VAR_10,
       VAR_13 / VAR_5,
       VAR_8->tbo.base.resv);
  if (FUNC_2(VAR_23)) {
   FUNC_0("Failed VRAM->GTT copy %d\n", VAR_14);
   VAR_15 = FUNC_3(VAR_23);
   goto out_lclean_unpin;
  }

  VAR_15 = FUNC_20(VAR_23, 0);
  if (VAR_15) {
   FUNC_0("Failed to wait for VRAM->GTT fence %d\n", VAR_14);
   goto out_lclean_unpin;
  }

  FUNC_19(&VAR_23);

  VAR_15 = FUNC_8(VAR_9[VAR_14], &VAR_17);
  if (VAR_15) {
   FUNC_0("Failed to map GTT object after copy %d\n", VAR_14);
   goto out_lclean_unpin;
  }

  for (VAR_19 = VAR_17, VAR_20 = VAR_17 + VAR_13,
       VAR_21 = VAR_18, VAR_22 = VAR_18 + VAR_13;
       VAR_19 < VAR_20;
       VAR_19++, VAR_21++) {
   if (*VAR_19 != VAR_21) {
    FUNC_0("Incorrect VRAM->GTT copy %d: Got 0x%p, "
       "expected 0x%p (VRAM/GTT offset "
       "0x%16llx/0x%16llx)\n",
       VAR_14, *VAR_19, VAR_21,
       (unsigned long long)
       (VAR_11 - VAR_6->mc.vram_start +
        (void*)VAR_21 - VAR_18),
       (unsigned long long)
       (VAR_10 - VAR_6->mc.gtt_start +
        (void*)VAR_21 - VAR_18));
    FUNC_9(VAR_9[VAR_14]);
    goto out_lclean_unpin;
   }
  }

  FUNC_9(VAR_9[VAR_14]);

  FUNC_1("Tested GTT->VRAM and VRAM->GTT copy for GTT offset 0x%llx\n",
    VAR_10 - VAR_6->mc.gtt_start);
  continue;

out_lclean_unpin:
  FUNC_12(VAR_9[VAR_14]);
out_lclean_unres:
  FUNC_14(VAR_9[VAR_14]);
out_lclean_unref:
  FUNC_13(&VAR_9[VAR_14]);
out_lclean:
  for (--VAR_14; VAR_14 >= 0; --VAR_14) {
   FUNC_12(VAR_9[VAR_14]);
   FUNC_14(VAR_9[VAR_14]);
   FUNC_13(&VAR_9[VAR_14]);
  }
  if (VAR_23 && !FUNC_2(VAR_23))
   FUNC_19(&VAR_23);
  break;
 }

 FUNC_12(VAR_8);
out_unres:
 FUNC_14(VAR_8);
out_unref:
 FUNC_13(&VAR_8);
out_cleanup:
 FUNC_5(VAR_9);
 if (VAR_15) {
  FUNC_6("Error while testing BO move\n");
 }
}
