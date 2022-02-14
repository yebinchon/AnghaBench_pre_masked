
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_device {int * dma; scalar_t__ dev_private; } ;
struct drm_buf_desc {unsigned int count; int size; } ;
typedef int req ;
struct TYPE_5__ {scalar_t__ wagp_enable; scalar_t__ dma_access; TYPE_4__* primary; TYPE_4__* warp; } ;
typedef TYPE_1__ drm_mga_private_t ;
struct TYPE_6__ {unsigned int primary_size; unsigned int secondary_bin_count; scalar_t__ agp_mode; int secondary_bin_size; } ;
typedef TYPE_2__ drm_mga_dma_bootstrap_t ;
struct TYPE_7__ {unsigned int size; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct drm_device*,struct drm_buf_desc*) ;
 int FUNC_3 (struct drm_device*,int ,unsigned int,int ,int ,TYPE_4__**) ;
 int FUNC_4 (struct drm_buf_desc*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_6,
        drm_mga_dma_bootstrap_t *VAR_7)
{
 drm_mga_private_t *const VAR_8 =
     (drm_mga_private_t *) VAR_6->dev_private;
 unsigned int VAR_9 = VAR_2;
 unsigned int VAR_10;
 unsigned int VAR_11;
 int VAR_12;
 struct drm_buf_desc VAR_13;

 if (VAR_6->dma == ((void*)0)) {
  FUNC_0("dev->dma is NULL\n");
  return -VAR_0;
 }




 if (VAR_9 < VAR_3)
  VAR_9 = VAR_3;


 VAR_12 = FUNC_3(VAR_6, 0, VAR_9, VAR_4,
    VAR_5, &VAR_8->warp);
 if (VAR_12 != 0) {
  FUNC_0("Unable to create mapping for WARP microcode: %d\n",
     VAR_12);
  return VAR_12;
 }






 for (VAR_10 = VAR_7->primary_size; VAR_10 != 0;
      VAR_10 >>= 1) {

  VAR_12 = FUNC_3(VAR_6, 0, VAR_10, VAR_4,
     VAR_5, &VAR_8->primary);
  if (!VAR_12)
   break;
 }

 if (VAR_12 != 0) {
  FUNC_0("Unable to allocate primary DMA region: %d\n", VAR_12);
  return -VAR_1;
 }

 if (VAR_8->primary->size != VAR_7->primary_size) {
  FUNC_1("Primary DMA buffer size reduced from %u to %u.\n",
    VAR_7->primary_size,
    (unsigned)VAR_8->primary->size);
  VAR_7->primary_size = VAR_8->primary->size;
 }

 for (VAR_11 = VAR_7->secondary_bin_count; VAR_11 > 0;
      VAR_11--) {
  (void)FUNC_4(&VAR_13, 0, sizeof(VAR_13));
  VAR_13.count = VAR_11;
  VAR_13.size = VAR_7->secondary_bin_size;

  VAR_12 = FUNC_2(VAR_6, &VAR_13);
  if (!VAR_12)
   break;
 }

 if (VAR_11 == 0) {
  FUNC_0("Unable to add secondary DMA buffers: %d\n", VAR_12);
  return VAR_12;
 }

 if (VAR_11 != VAR_7->secondary_bin_count) {
  FUNC_1("Secondary PCI DMA buffer bin count reduced from %u "
    "to %u.\n", VAR_7->secondary_bin_count, VAR_11);

  VAR_7->secondary_bin_count = VAR_11;
 }

 VAR_8->dma_access = 0;
 VAR_8->wagp_enable = 0;

 VAR_7->agp_mode = 0;

 FUNC_1("Initialized card for PCI DMA.\n");
 return 0;
}
