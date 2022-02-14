
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct parser_exec_state {size_t ring_id; TYPE_2__* vgpu; } ;
struct intel_gvt {struct drm_i915_private* dev_priv; } ;
struct drm_i915_private {TYPE_1__** engine; } ;
struct TYPE_4__ {struct intel_gvt* gvt; } ;
struct TYPE_3__ {unsigned int mmio_base; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct parser_exec_state*,unsigned int) ;
 unsigned int FUNC_2 (struct parser_exec_state*,unsigned int) ;
 int FUNC_3 (char*,unsigned int,...) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (struct intel_gvt*,unsigned int) ;
 int FUNC_6 (struct parser_exec_state*,int ,unsigned int) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static int FUNC_8(struct parser_exec_state *VAR_1,
  unsigned int VAR_2, unsigned int VAR_3, char *VAR_4)
{
 struct intel_gvt *VAR_5 = VAR_1->vgpu->gvt;
 unsigned int VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 struct drm_i915_private *VAR_9 = VAR_1->vgpu->gvt->dev_priv;

 if (!FUNC_7(VAR_4, "lri"))
  VAR_6 = FUNC_2(VAR_1, VAR_3 + 1);
 else {
  FUNC_3("Unexpected forcenonpriv 0x%x write from cmd %s\n",
   VAR_2, VAR_4);
  return -VAR_0;
 }

 VAR_7 = VAR_9->engine[VAR_1->ring_id]->mmio_base;
 VAR_8 = FUNC_4(FUNC_0(VAR_7));

 if (!FUNC_5(VAR_5, VAR_6) &&
   VAR_6 != VAR_8) {
  FUNC_3("Unexpected forcenonpriv 0x%x LRI write, value=0x%x\n",
   VAR_2, VAR_6);
  FUNC_6(VAR_1, FUNC_1(VAR_1, VAR_3), VAR_8);
  return 0;
 }
 return 0;
}
