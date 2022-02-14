
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {int start; } ;
struct i915_vma {int size; int * exec_flags; TYPE_2__ node; TYPE_1__* obj; } ;
struct TYPE_6__ {scalar_t__ use_64bit_reloc; } ;
struct i915_execbuffer {TYPE_3__ reloc_cache; int i915; } ;
struct drm_i915_gem_relocation_entry {int write_domain; int offset; int read_domains; scalar_t__ presumed_offset; int target_handle; } ;
struct TYPE_4__ {int cache_level; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int,char*) ;
 struct i915_vma* FUNC_3 (struct i915_execbuffer*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct i915_vma*,int ,int ) ;
 int FUNC_6 (struct i915_vma*,struct drm_i915_gem_relocation_entry const*,struct i915_execbuffer*,struct i915_vma*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static u64
FUNC_8(struct i915_execbuffer *VAR_8,
    struct i915_vma *VAR_9,
    const struct drm_i915_gem_relocation_entry *VAR_10)
{
 struct i915_vma *VAR_11;
 int VAR_12;


 VAR_11 = FUNC_3(VAR_8, VAR_10->target_handle);
 if (FUNC_7(!VAR_11))
  return -VAR_2;


 if (FUNC_7(VAR_10->write_domain & (VAR_10->write_domain - 1))) {
  FUNC_0("reloc with multiple write domains: "
     "target %d offset %d "
     "read %08x write %08x",
     VAR_10->target_handle,
     (int) VAR_10->offset,
     VAR_10->read_domains,
     VAR_10->write_domain);
  return -VAR_1;
 }
 if (FUNC_7((VAR_10->write_domain | VAR_10->read_domains)
       & ~VAR_6)) {
  FUNC_0("reloc with read/write non-GPU domains: "
     "target %d offset %d "
     "read %08x write %08x",
     VAR_10->target_handle,
     (int) VAR_10->offset,
     VAR_10->read_domains,
     VAR_10->write_domain);
  return -VAR_1;
 }

 if (VAR_10->write_domain) {
  *VAR_11->exec_flags |= VAR_4;







  if (VAR_10->write_domain == VAR_5 &&
      FUNC_1(VAR_8->i915, 6)) {
   VAR_12 = FUNC_5(VAR_11, VAR_11->obj->cache_level,
         VAR_7);
   if (FUNC_2(VAR_12,
          "Unexpected failure to bind target VMA!"))
    return VAR_12;
  }
 }





 if (!VAR_0 &&
     FUNC_4(VAR_11->node.start) == VAR_10->presumed_offset)
  return 0;


 if (FUNC_7(VAR_10->offset >
       VAR_9->size - (VAR_8->reloc_cache.use_64bit_reloc ? 8 : 4))) {
  FUNC_0("Relocation beyond object bounds: "
     "target %d offset %d size %d.\n",
     VAR_10->target_handle,
     (int)VAR_10->offset,
     (int)VAR_9->size);
  return -VAR_1;
 }
 if (FUNC_7(VAR_10->offset & 3)) {
  FUNC_0("Relocation not 4-byte aligned: "
     "target %d offset %d.\n",
     VAR_10->target_handle,
     (int)VAR_10->offset);
  return -VAR_1;
 }
 *VAR_9->exec_flags &= ~VAR_3;


 return FUNC_6(VAR_9, VAR_10, VAR_8, VAR_11);
}
