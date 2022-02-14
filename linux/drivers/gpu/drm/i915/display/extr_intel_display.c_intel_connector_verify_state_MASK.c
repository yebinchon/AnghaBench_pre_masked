
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ crtc; } ;
struct intel_encoder {scalar_t__ type; TYPE_4__ base; } ;
struct TYPE_7__ {scalar_t__ active; } ;
struct intel_crtc_state {TYPE_3__ base; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_6__ {int name; TYPE_1__ base; } ;
struct intel_connector {struct intel_encoder* encoder; scalar_t__ (* get_hw_state ) (struct intel_connector*) ;TYPE_2__ base; } ;
struct drm_connector_state {scalar_t__ crtc; TYPE_4__* best_encoder; int connector; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (struct intel_connector*) ;
 struct intel_connector* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct intel_crtc_state *VAR_1,
      struct drm_connector_state *VAR_2)
{
 struct intel_connector *VAR_3 = FUNC_3(VAR_2->connector);

 FUNC_0("[CONNECTOR:%d:%s]\n",
        VAR_3->base.base.id,
        VAR_3->base.name);

 if (VAR_3->get_hw_state(VAR_3)) {
  struct intel_encoder *VAR_4 = VAR_3->encoder;

  FUNC_1(!VAR_1,
    "connector enabled without attached crtc\n");

  if (!VAR_1)
   return;

  FUNC_1(!VAR_1->base.active,
        "connector is active, but attached crtc isn't\n");

  if (!VAR_4 || VAR_4->type == VAR_0)
   return;

  FUNC_1(VAR_2->best_encoder != &VAR_4->base,
   "atomic encoder doesn't match attached encoder\n");

  FUNC_1(VAR_2->crtc != VAR_4->base.crtc,
   "attached encoder crtc differs from connector crtc\n");
 } else {
  FUNC_1(VAR_1 && VAR_1->base.active,
   "attached crtc is active, but connector isn't\n");
  FUNC_1(!VAR_1 && VAR_2->best_encoder,
   "best encoder set without crtc!\n");
 }
}
