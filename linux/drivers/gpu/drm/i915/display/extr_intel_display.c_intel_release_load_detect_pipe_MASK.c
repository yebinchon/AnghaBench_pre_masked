
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_load_detect_pipe {struct drm_atomic_state* restore_state; } ;
struct TYPE_4__ {int id; } ;
struct drm_encoder {int name; TYPE_2__ base; } ;
struct intel_encoder {struct drm_encoder base; } ;
struct drm_modeset_acquire_ctx {int dummy; } ;
struct TYPE_3__ {int id; } ;
struct drm_connector {int name; TYPE_1__ base; } ;
struct drm_atomic_state {int dummy; } ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (struct drm_atomic_state*,struct drm_modeset_acquire_ctx*) ;
 int FUNC_2 (struct drm_atomic_state*) ;
 struct intel_encoder* FUNC_3 (struct drm_connector*) ;

void FUNC_4(struct drm_connector *VAR_0,
        struct intel_load_detect_pipe *VAR_1,
        struct drm_modeset_acquire_ctx *VAR_2)
{
 struct intel_encoder *VAR_3 =
  FUNC_3(VAR_0);
 struct drm_encoder *VAR_4 = &VAR_3->base;
 struct drm_atomic_state *VAR_5 = VAR_1->restore_state;
 int VAR_6;

 FUNC_0("[CONNECTOR:%d:%s], [ENCODER:%d:%s]\n",
        VAR_0->base.id, VAR_0->name,
        VAR_4->base.id, VAR_4->name);

 if (!VAR_5)
  return;

 VAR_6 = FUNC_1(VAR_5, VAR_2);
 if (VAR_6)
  FUNC_0("Couldn't release load detect pipe: %i\n", VAR_6);
 FUNC_2(VAR_5);
}
