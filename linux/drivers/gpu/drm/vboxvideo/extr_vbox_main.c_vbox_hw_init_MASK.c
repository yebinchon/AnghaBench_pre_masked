
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vbva_modehint {int dummy; } ;
struct TYPE_2__ {int pdev; int dev; } ;
struct vbox_private {scalar_t__ guest_heap; TYPE_1__ ddev; int guest_pool; int last_mode_hints; int num_crtcs; int available_vram_size; int full_vram_size; int any_pitch; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct vbox_private*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int ,int ,int,int ) ;
 int FUNC_5 (int ,unsigned long,int ,int ,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct vbox_private*) ;
 int FUNC_9 (int ,int ,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,int ,int ,int ) ;
 int FUNC_13 (int ,scalar_t__) ;
 int VAR_9 ;
 int FUNC_14 (struct vbox_private*) ;
 int FUNC_15 (int ) ;

int FUNC_16(struct vbox_private *VAR_10)
{
 int VAR_11 = -VAR_0;

 VAR_10->full_vram_size = FUNC_11(VAR_6);
 VAR_10->any_pitch = FUNC_15(VAR_5);

 FUNC_1("VRAM %08x\n", VAR_10->full_vram_size);


 VAR_10->guest_heap =
     FUNC_12(VAR_10->ddev.pdev, 0, FUNC_2(VAR_10),
       VAR_3);
 if (!VAR_10->guest_heap)
  return -VAR_0;


 VAR_10->guest_pool = FUNC_6(4, -1);
 if (!VAR_10->guest_pool)
  goto err_unmap_guest_heap;

 VAR_11 = FUNC_5(VAR_10->guest_pool,
    (unsigned long)VAR_10->guest_heap,
    FUNC_2(VAR_10),
    VAR_4, -1);
 if (VAR_11)
  goto err_destroy_guest_pool;

 VAR_11 = FUNC_10(VAR_10->guest_pool);
 if (VAR_11) {
  FUNC_0("vboxvideo: hgsmi_test_query_conf failed\n");
  goto err_destroy_guest_pool;
 }


 VAR_10->available_vram_size = FUNC_2(VAR_10);

 FUNC_9(VAR_10->guest_pool, VAR_8,
    &VAR_10->num_crtcs);
 VAR_10->num_crtcs = FUNC_3(VAR_9, VAR_10->num_crtcs, 1, VAR_7);

 if (!FUNC_8(VAR_10)) {
  VAR_11 = -VAR_1;
  goto err_destroy_guest_pool;
 }

 VAR_10->last_mode_hints = FUNC_4(VAR_10->ddev.dev, VAR_10->num_crtcs,
          sizeof(struct vbva_modehint),
          VAR_2);
 if (!VAR_10->last_mode_hints) {
  VAR_11 = -VAR_0;
  goto err_destroy_guest_pool;
 }

 VAR_11 = FUNC_14(VAR_10);
 if (VAR_11)
  goto err_destroy_guest_pool;

 return 0;

err_destroy_guest_pool:
 FUNC_7(VAR_10->guest_pool);
err_unmap_guest_heap:
 FUNC_13(VAR_10->ddev.pdev, VAR_10->guest_heap);
 return VAR_11;
}
