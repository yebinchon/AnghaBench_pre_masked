
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_device {TYPE_1__* agp; } ;
struct TYPE_15__ {int * handle; scalar_t__ mtrr; scalar_t__ flags; scalar_t__ type; int size; scalar_t__ offset; } ;
struct TYPE_11__ {int * virtual_start; TYPE_9__ map; } ;
struct TYPE_13__ {scalar_t__ chipset; TYPE_3__* mmio; int volatile* hw_addr_ptr; int * last_pause_ptr; scalar_t__ dma_offset; int dma_wrap; int dma_high; scalar_t__ dma_low; TYPE_2__ ring; int * dma_ptr; } ;
typedef TYPE_4__ drm_via_private_t ;
struct TYPE_14__ {int reg_pause_addr; scalar_t__ offset; int size; } ;
typedef TYPE_5__ drm_via_dma_init_t ;
struct TYPE_12__ {scalar_t__ handle; } ;
struct TYPE_10__ {scalar_t__ base; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_9__*,struct drm_device*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct drm_device*) ;

__attribute__((used)) static int FUNC_4(struct drm_device *VAR_4,
     drm_via_private_t *VAR_5,
     drm_via_dma_init_t *VAR_6)
{
 if (!VAR_5 || !VAR_5->mmio) {
  FUNC_0("via_dma_init called before via_map_init\n");
  return -VAR_0;
 }

 if (VAR_5->ring.virtual_start != ((void*)0)) {
  FUNC_0("called again without calling cleanup\n");
  return -VAR_0;
 }

 if (!VAR_4->agp || !VAR_4->agp->base) {
  FUNC_0("called with no agp memory available\n");
  return -VAR_0;
 }

 if (VAR_5->chipset == VAR_3) {
  FUNC_0("AGP DMA is not supported on this chip\n");
  return -VAR_1;
 }

 VAR_5->ring.map.offset = VAR_4->agp->base + VAR_6->offset;
 VAR_5->ring.map.size = VAR_6->size;
 VAR_5->ring.map.type = 0;
 VAR_5->ring.map.flags = 0;
 VAR_5->ring.map.mtrr = 0;

 FUNC_1(&VAR_5->ring.map, VAR_4);

 if (VAR_5->ring.map.handle == ((void*)0)) {
  FUNC_3(VAR_4);
  FUNC_0("can not ioremap virtual address for"
     " ring buffer\n");
  return -VAR_2;
 }

 VAR_5->ring.virtual_start = VAR_5->ring.map.handle;

 VAR_5->dma_ptr = VAR_5->ring.virtual_start;
 VAR_5->dma_low = 0;
 VAR_5->dma_high = VAR_6->size;
 VAR_5->dma_wrap = VAR_6->size;
 VAR_5->dma_offset = VAR_6->offset;
 VAR_5->last_pause_ptr = ((void*)0);
 VAR_5->hw_addr_ptr =
  (volatile uint32_t *)((char *)VAR_5->mmio->handle +
  VAR_6->reg_pause_addr);

 FUNC_2(VAR_5);

 return 0;
}
