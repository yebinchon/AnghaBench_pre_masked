
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_ring {int head; int tail; int vma; int size; } ;
struct TYPE_2__ {struct intel_ring* ring; } ;
struct intel_engine_cs {int uncore; int name; int mmio_base; TYPE_1__ legacy; struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*,int ,int,int,int,int) ;
 int FUNC_1 (char*,int ,int,int,int,int,...) ;
 int VAR_0 ;
 int FUNC_2 (struct intel_engine_cs*,int (*) (int )) ;
 int FUNC_3 (struct intel_engine_cs*,int (*) (int )) ;
 int FUNC_4 (struct intel_engine_cs*,int (*) (int ),int) ;
 int VAR_1 ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int ,int,int) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (struct drm_i915_private*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct intel_engine_cs*) ;
 int FUNC_18 (struct intel_engine_cs*) ;
 int FUNC_19 (struct intel_ring*,int) ;
 int FUNC_20 (struct intel_ring*) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int ) ;
 scalar_t__ FUNC_23 (int ,int ,int,int,int) ;
 int FUNC_24 (struct intel_engine_cs*) ;
 int FUNC_25 (struct intel_engine_cs*) ;
 int FUNC_26 (struct intel_engine_cs*) ;

__attribute__((used)) static int FUNC_27(struct intel_engine_cs *VAR_4)
{
 struct drm_i915_private *VAR_5 = VAR_4->i915;
 struct intel_ring *VAR_6 = VAR_4->legacy.ring;
 int VAR_7 = 0;

 FUNC_6("%s: ring:{HEAD:%04x, TAIL:%04x}\n",
    VAR_4->name, VAR_6->head, VAR_6->tail);

 FUNC_21(VAR_4->uncore, VAR_1);


 if (!FUNC_26(VAR_4)) {

  FUNC_0("%s head not reset to zero "
    "ctl %08x head %08x tail %08x start %08x\n",
    VAR_4->name,
    FUNC_3(VAR_4, FUNC_9),
    FUNC_3(VAR_4, FUNC_11),
    FUNC_3(VAR_4, FUNC_14),
    FUNC_3(VAR_4, FUNC_13));

  if (!FUNC_26(VAR_4)) {
   FUNC_1("failed to set %s head to zero "
      "ctl %08x head %08x tail %08x start %08x\n",
      VAR_4->name,
      FUNC_3(VAR_4, FUNC_9),
      FUNC_3(VAR_4, FUNC_11),
      FUNC_3(VAR_4, FUNC_14),
      FUNC_3(VAR_4, FUNC_13));
   VAR_7 = -VAR_0;
   goto out;
  }
 }

 if (FUNC_7(VAR_5))
  FUNC_24(VAR_4);
 else
  FUNC_25(VAR_4);

 FUNC_18(VAR_4);


 FUNC_2(VAR_4, FUNC_11);







 FUNC_4(VAR_4, FUNC_13, FUNC_16(VAR_6->vma));


 FUNC_5(!FUNC_19(VAR_6, VAR_6->head));
 FUNC_5(!FUNC_19(VAR_6, VAR_6->tail));
 FUNC_20(VAR_6);


 FUNC_4(VAR_4, FUNC_11, VAR_6->head);
 FUNC_4(VAR_4, FUNC_14, VAR_6->head);
 FUNC_2(VAR_4, FUNC_14);

 FUNC_4(VAR_4, FUNC_9, FUNC_10(VAR_6->size) | VAR_2);


 if (FUNC_23(VAR_4->uncore,
        FUNC_9(VAR_4->mmio_base),
        VAR_2, VAR_2,
        50)) {
  FUNC_1("%s initialization failed "
     "ctl %08x (valid? %d) head %08x [%08x] tail %08x [%08x] start %08x [expected %08x]\n",
     VAR_4->name,
     FUNC_3(VAR_4, FUNC_9),
     FUNC_3(VAR_4, FUNC_9) & VAR_2,
     FUNC_3(VAR_4, FUNC_11), VAR_6->head,
     FUNC_3(VAR_4, FUNC_14), VAR_6->tail,
     FUNC_3(VAR_4, FUNC_13),
     FUNC_16(VAR_6->vma));
  VAR_7 = -VAR_0;
  goto out;
 }

 if (FUNC_8(VAR_5) > 2)
  FUNC_4(VAR_4,
        FUNC_12, FUNC_15(VAR_3));


 if (VAR_6->tail != VAR_6->head) {
  FUNC_4(VAR_4, FUNC_14, VAR_6->tail);
  FUNC_2(VAR_4, FUNC_14);
 }


 FUNC_17(VAR_4);
out:
 FUNC_22(VAR_4->uncore, VAR_1);

 return VAR_7;
}
