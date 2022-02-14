
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector_state {struct drm_connector* connector; } ;
struct drm_connector {struct drm_connector_state* state; } ;



void
FUNC_0(struct drm_connector *VAR_0,
        struct drm_connector_state *VAR_1)
{
 if (VAR_1)
  VAR_1->connector = VAR_0;

 VAR_0->state = VAR_1;
}
