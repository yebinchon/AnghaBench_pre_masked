
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int id; } ;
struct drm_encoder {int * crtc; int name; TYPE_3__ base; int dev; } ;
struct intel_encoder {struct drm_encoder base; int (* post_disable ) (struct intel_encoder*,struct intel_crtc_state*,TYPE_5__*) ;int (* disable ) (struct intel_encoder*,struct intel_crtc_state*,TYPE_5__*) ;} ;
struct TYPE_8__ {scalar_t__ active; } ;
struct intel_crtc_state {TYPE_2__ base; } ;
struct TYPE_7__ {int state; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct TYPE_10__ {int * encoder; int dpms; TYPE_5__* state; } ;
struct intel_connector {TYPE_4__ base; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_11__ {struct drm_encoder* best_encoder; } ;


 int FUNC_0 (char*,int ,...) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct intel_crtc_state*) ;
 int FUNC_3 (struct intel_encoder*) ;
 struct intel_connector* FUNC_4 (struct intel_encoder*) ;
 int FUNC_5 (struct intel_encoder*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct intel_encoder*,struct intel_crtc_state*,TYPE_5__*) ;
 int FUNC_8 (struct intel_encoder*,struct intel_crtc_state*,TYPE_5__*) ;
 struct drm_i915_private* FUNC_9 (int ) ;
 struct intel_crtc* FUNC_10 (int *) ;
 struct intel_crtc_state* FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct intel_encoder *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_9(VAR_1->base.dev);
 struct intel_connector *VAR_3;
 struct intel_crtc *VAR_4 = FUNC_10(VAR_1->base.crtc);
 struct intel_crtc_state *VAR_5 = VAR_4 ?
  FUNC_11(VAR_4->base.state) : ((void*)0);




 bool VAR_6 = VAR_5 &&
  VAR_5->base.active;

 if (VAR_5 && FUNC_2(VAR_5)) {
  FUNC_0("BIOS has misprogrammed the hardware. Disabling pipe %c\n",
         FUNC_6(VAR_4->pipe));
  VAR_6 = 0;
 }

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3 && !VAR_6) {
  FUNC_0("[ENCODER:%d:%s] has active connectors but no active pipe!\n",
         VAR_1->base.base.id,
         VAR_1->base.name);




  if (VAR_5) {
   struct drm_encoder *VAR_7;

   FUNC_0("[ENCODER:%d:%s] manually disabled\n",
          VAR_1->base.base.id,
          VAR_1->base.name);


   VAR_7 = VAR_3->base.state->best_encoder;
   VAR_3->base.state->best_encoder = &VAR_1->base;

   if (VAR_1->disable)
    VAR_1->disable(VAR_1, VAR_5,
       VAR_3->base.state);
   if (VAR_1->post_disable)
    VAR_1->post_disable(VAR_1, VAR_5,
            VAR_3->base.state);

   VAR_3->base.state->best_encoder = VAR_7;
  }
  VAR_1->base.crtc = ((void*)0);






  VAR_3->base.dpms = VAR_0;
  VAR_3->base.encoder = ((void*)0);
 }


 FUNC_5(VAR_1, VAR_3 && VAR_6);

 if (FUNC_1(VAR_2) >= 11)
  FUNC_3(VAR_1);
}
