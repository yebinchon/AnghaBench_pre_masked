
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


struct intel_uncore {int dummy; } ;
struct TYPE_7__ {unsigned long total; TYPE_4__* i915; } ;
struct i915_ggtt {unsigned long mappable_end; TYPE_1__ vm; } ;
struct TYPE_9__ {int size; int base; } ;
struct TYPE_8__ {int size; int base; } ;
struct TYPE_12__ {TYPE_3__ nonmappable_gmadr; TYPE_2__ mappable_gmadr; } ;
struct TYPE_11__ {int * space; } ;
struct TYPE_10__ {struct intel_uncore uncore; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 TYPE_6__ VAR_1 ;
 TYPE_5__ VAR_2 ;
 unsigned long FUNC_2 (struct intel_uncore*,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (struct i915_ggtt*,int *,unsigned long,unsigned long) ;
 int FUNC_5 (struct i915_ggtt*,int *) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct i915_ggtt *VAR_3)
{
 struct intel_uncore *VAR_4 = &VAR_3->vm.i915->uncore;
 unsigned long VAR_5 = VAR_3->vm.total;

 unsigned long VAR_6, VAR_7, VAR_8;
 unsigned long VAR_9, VAR_10, VAR_11;
 int VAR_12;

 if (!FUNC_3(VAR_3->vm.i915))
  return 0;

 VAR_6 =
   FUNC_2(VAR_4, FUNC_6(VAR_1.mappable_gmadr.base));
 VAR_7 =
   FUNC_2(VAR_4, FUNC_6(VAR_1.mappable_gmadr.size));
 VAR_9 =
   FUNC_2(VAR_4, FUNC_6(VAR_1.nonmappable_gmadr.base));
 VAR_10 =
   FUNC_2(VAR_4, FUNC_6(VAR_1.nonmappable_gmadr.size));

 VAR_8 = VAR_6 + VAR_7;
 VAR_11 = VAR_9 + VAR_10;

 FUNC_1("VGT ballooning configuration:\n");
 FUNC_1("Mappable graphic memory: base 0x%lx size %ldKiB\n",
   VAR_6, VAR_7 / 1024);
 FUNC_1("Unmappable graphic memory: base 0x%lx size %ldKiB\n",
   VAR_9, VAR_10 / 1024);

 if (VAR_8 > VAR_3->mappable_end ||
     VAR_9 < VAR_3->mappable_end ||
     VAR_11 > VAR_5) {
  FUNC_0("Invalid ballooning configuration!\n");
  return -VAR_0;
 }


 if (VAR_9 > VAR_3->mappable_end) {
  VAR_12 = FUNC_4(VAR_3, &VAR_2.space[2],
     VAR_3->mappable_end, VAR_9);

  if (VAR_12)
   goto err;
 }

 if (VAR_11 < VAR_5) {
  VAR_12 = FUNC_4(VAR_3, &VAR_2.space[3],
     VAR_11, VAR_5);
  if (VAR_12)
   goto err_upon_mappable;
 }


 if (VAR_6) {
  VAR_12 = FUNC_4(VAR_3, &VAR_2.space[0],
     0, VAR_6);

  if (VAR_12)
   goto err_upon_unmappable;
 }

 if (VAR_8 < VAR_3->mappable_end) {
  VAR_12 = FUNC_4(VAR_3, &VAR_2.space[1],
     VAR_8, VAR_3->mappable_end);

  if (VAR_12)
   goto err_below_mappable;
 }

 FUNC_1("VGT balloon successfully\n");
 return 0;

err_below_mappable:
 FUNC_5(VAR_3, &VAR_2.space[0]);
err_upon_unmappable:
 FUNC_5(VAR_3, &VAR_2.space[3]);
err_upon_mappable:
 FUNC_5(VAR_3, &VAR_2.space[2]);
err:
 FUNC_0("VGT balloon fail\n");
 return VAR_12;
}
