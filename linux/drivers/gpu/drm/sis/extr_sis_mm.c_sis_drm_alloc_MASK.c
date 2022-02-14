
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {unsigned long start; } ;
struct TYPE_8__ {unsigned long size; unsigned long offset; } ;
struct sis_memblock {TYPE_4__ mm_node; int owner_list; TYPE_3__ req; } ;
struct sis_file_private {int obj_list; } ;
struct drm_file {struct sis_file_private* driver_priv; } ;
struct drm_device {int struct_mutex; TYPE_1__* dev_private; } ;
struct TYPE_6__ {scalar_t__ vram_initialized; scalar_t__ agp_initialized; unsigned long vram_offset; unsigned long agp_offset; int object_idr; int vram_mm; int agp_mm; } ;
typedef TYPE_1__ drm_sis_private_t ;
struct TYPE_7__ {unsigned long size; unsigned long offset; int free; } ;
typedef TYPE_2__ drm_sis_mem_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,unsigned long,unsigned long) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_2 (int *,TYPE_4__*,unsigned long) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *,struct sis_memblock*,int,int ,int ) ;
 int FUNC_5 (struct sis_memblock*) ;
 struct sis_memblock* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_11(struct drm_device *VAR_6, struct drm_file *VAR_7,
    void *VAR_8, int VAR_9)
{
 drm_sis_private_t *VAR_10 = VAR_6->dev_private;
 drm_sis_mem_t *VAR_11 = VAR_8;
 int VAR_12 = 0, VAR_13;
 struct sis_memblock *VAR_14;
 struct sis_file_private *VAR_15 = VAR_7->driver_priv;
 unsigned long VAR_16;

 FUNC_8(&VAR_6->struct_mutex);

 if (0 == ((VAR_9 == 0) ? VAR_10->vram_initialized :
        VAR_10->agp_initialized)) {
  FUNC_1
      ("Attempt to allocate from uninitialized memory manager.\n");
  FUNC_9(&VAR_6->struct_mutex);
  return -VAR_1;
 }

 VAR_14 = FUNC_6(sizeof(*VAR_14), VAR_3);
 if (!VAR_14) {
  VAR_12 = -VAR_2;
  goto fail_alloc;
 }

 VAR_11->size = (VAR_11->size + VAR_4) >> VAR_5;
 if (VAR_9 == VAR_0) {
  VAR_12 = FUNC_2(&VAR_10->agp_mm,
         &VAR_14->mm_node,
         VAR_11->size);
  VAR_16 = VAR_14->mm_node.start;
 } else {







  VAR_12 = FUNC_2(&VAR_10->vram_mm,
         &VAR_14->mm_node,
         VAR_11->size);
  VAR_16 = VAR_14->mm_node.start;

 }
 if (VAR_12)
  goto fail_alloc;

 VAR_12 = FUNC_4(&VAR_10->object_idr, VAR_14, 1, 0, VAR_3);
 if (VAR_12 < 0)
  goto fail_idr;
 VAR_13 = VAR_12;

 FUNC_7(&VAR_14->owner_list, &VAR_15->obj_list);
 FUNC_9(&VAR_6->struct_mutex);

 VAR_11->offset = ((VAR_9 == 0) ?
        VAR_10->vram_offset : VAR_10->agp_offset) +
     (VAR_16 << VAR_5);
 VAR_11->free = VAR_13;
 VAR_11->size = VAR_11->size << VAR_5;

 return 0;

fail_idr:
 FUNC_3(&VAR_14->mm_node);
fail_alloc:
 FUNC_5(VAR_14);
 FUNC_9(&VAR_6->struct_mutex);

 VAR_11->offset = 0;
 VAR_11->size = 0;
 VAR_11->free = 0;

 FUNC_0("alloc %d, size = %ld, offset = %ld\n", VAR_9, VAR_11->size,
    VAR_11->offset);

 return VAR_12;
}
