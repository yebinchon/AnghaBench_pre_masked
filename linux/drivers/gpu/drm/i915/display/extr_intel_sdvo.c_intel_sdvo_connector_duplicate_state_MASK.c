
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_connector_state {int dummy; } ;
struct TYPE_2__ {struct drm_connector_state base; } ;
struct intel_sdvo_connector_state {TYPE_1__ base; } ;
struct drm_connector {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_connector*,struct drm_connector_state*) ;
 struct intel_sdvo_connector_state* FUNC_1 (int ,int,int ) ;

__attribute__((used)) static struct drm_connector_state *
FUNC_2(struct drm_connector *VAR_1)
{
 struct intel_sdvo_connector_state *VAR_2;

 VAR_2 = FUNC_1(VAR_1->state, sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_0(VAR_1, &VAR_2->base.base);
 return &VAR_2->base.base;
}
