
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_8__ {scalar_t__ type; } ;
struct TYPE_5__ {scalar_t__ size; } ;
struct i915_vma {scalar_t__ size; scalar_t__ pages; TYPE_3__* obj; TYPE_4__ ggtt_view; TYPE_1__ node; } ;
struct i915_ggtt_view {scalar_t__ type; } ;
struct TYPE_6__ {scalar_t__ pages; } ;
struct TYPE_7__ {TYPE_2__ mm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*,struct i915_ggtt_view*,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static bool FUNC_2(struct i915_vma *VAR_1,
         struct i915_ggtt_view *VAR_2,
         u64 VAR_3,
         const char *VAR_4)
{
 bool VAR_5 = 1;

 if (VAR_1->size != VAR_3) {
  FUNC_1("(%s) VMA is wrong size, expected %llu, found %llu\n",
         VAR_4, VAR_3, VAR_1->size);
  VAR_5 = 0;
 }

 if (VAR_1->node.size < VAR_1->size) {
  FUNC_1("(%s) VMA binding too small, expected %llu, found %llu\n",
         VAR_4, VAR_1->size, VAR_1->node.size);
  VAR_5 = 0;
 }

 if (VAR_2 && VAR_2->type != VAR_0) {
  if (FUNC_0(&VAR_1->ggtt_view, VAR_2, sizeof(*VAR_2))) {
   FUNC_1("(%s) VMA mismatch upon creation!\n",
          VAR_4);
   VAR_5 = 0;
  }

  if (VAR_1->pages == VAR_1->obj->mm.pages) {
   FUNC_1("(%s) VMA using original object pages!\n",
          VAR_4);
   VAR_5 = 0;
  }
 } else {
  if (VAR_1->ggtt_view.type != VAR_0) {
   FUNC_1("Not the normal ggtt view! Found %d\n",
          VAR_1->ggtt_view.type);
   VAR_5 = 0;
  }

  if (VAR_1->pages != VAR_1->obj->mm.pages) {
   FUNC_1("VMA not using object pages!\n");
   VAR_5 = 0;
  }
 }

 return VAR_5;
}
