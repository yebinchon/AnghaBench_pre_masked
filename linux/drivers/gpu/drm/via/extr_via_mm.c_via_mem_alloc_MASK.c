
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned long start; } ;
struct via_memblock {TYPE_3__ mm_node; int owner_list; } ;
struct via_file_private {int obj_list; } ;
struct drm_file {struct via_file_private* driver_priv; } ;
struct drm_device {int struct_mutex; scalar_t__ dev_private; } ;
struct TYPE_5__ {scalar_t__ vram_initialized; scalar_t__ agp_initialized; scalar_t__ agp_offset; scalar_t__ vram_offset; int object_idr; int vram_mm; int agp_mm; } ;
typedef TYPE_1__ drm_via_private_t ;
struct TYPE_6__ {scalar_t__ type; unsigned long size; int index; scalar_t__ offset; } ;
typedef TYPE_2__ drm_via_mem_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_2 (int *,TYPE_3__*,unsigned long) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *,struct via_memblock*,int,int ,int ) ;
 int FUNC_5 (struct via_memblock*) ;
 struct via_memblock* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct drm_device *VAR_7, void *VAR_8,
    struct drm_file *VAR_9)
{
 drm_via_mem_t *VAR_10 = VAR_8;
 int VAR_11 = 0, VAR_12;
 struct via_memblock *VAR_13;
 drm_via_private_t *VAR_14 = (drm_via_private_t *) VAR_7->dev_private;
 struct via_file_private *VAR_15 = VAR_9->driver_priv;
 unsigned long VAR_16;

 if (VAR_10->type > VAR_3) {
  FUNC_1("Unknown memory type allocation\n");
  return -VAR_0;
 }
 FUNC_8(&VAR_7->struct_mutex);
 if (0 == ((VAR_10->type == VAR_4) ? VAR_14->vram_initialized :
        VAR_14->agp_initialized)) {
  FUNC_1
      ("Attempt to allocate from uninitialized memory manager.\n");
  FUNC_9(&VAR_7->struct_mutex);
  return -VAR_0;
 }

 VAR_13 = FUNC_6(sizeof(*VAR_13), VAR_2);
 if (!VAR_13) {
  VAR_11 = -VAR_1;
  goto fail_alloc;
 }

 VAR_16 = (VAR_10->size + VAR_5) >> VAR_6;
 if (VAR_10->type == VAR_3)
  VAR_11 = FUNC_2(&VAR_14->agp_mm,
         &VAR_13->mm_node,
         VAR_16);
 else
  VAR_11 = FUNC_2(&VAR_14->vram_mm,
         &VAR_13->mm_node,
         VAR_16);
 if (VAR_11)
  goto fail_alloc;

 VAR_11 = FUNC_4(&VAR_14->object_idr, VAR_13, 1, 0, VAR_2);
 if (VAR_11 < 0)
  goto fail_idr;
 VAR_12 = VAR_11;

 FUNC_7(&VAR_13->owner_list, &VAR_15->obj_list);
 FUNC_9(&VAR_7->struct_mutex);

 VAR_10->offset = ((VAR_10->type == VAR_4) ?
        VAR_14->vram_offset : VAR_14->agp_offset) +
     ((VAR_13->mm_node.start) << VAR_6);
 VAR_10->index = VAR_12;

 return 0;

fail_idr:
 FUNC_3(&VAR_13->mm_node);
fail_alloc:
 FUNC_5(VAR_13);
 FUNC_9(&VAR_7->struct_mutex);

 VAR_10->offset = 0;
 VAR_10->size = 0;
 VAR_10->index = 0;
 FUNC_0("Video memory allocation failed\n");

 return VAR_11;
}
