
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_mode_config {int num_connector; int connection_mutex; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_connector_state {scalar_t__ crtc; struct drm_atomic_state* state; } ;
struct TYPE_6__ {int id; } ;
struct drm_connector {int name; TYPE_3__ base; int state; TYPE_2__* funcs; TYPE_1__* dev; } ;
struct drm_atomic_state {int num_connector; struct __drm_connnectors_state* connectors; int acquire_ctx; } ;
struct __drm_connnectors_state {struct drm_connector* ptr; struct drm_connector_state* new_state; int old_state; struct drm_connector_state* state; } ;
struct TYPE_5__ {struct drm_connector_state* (* atomic_duplicate_state ) (struct drm_connector*) ;} ;
struct TYPE_4__ {struct drm_mode_config mode_config; } ;


 int FUNC_0 (char*,int ,int ,struct drm_connector_state*,struct drm_atomic_state*) ;
 int VAR_0 ;
 struct drm_connector_state* FUNC_1 (struct drm_crtc_state*) ;
 struct drm_connector_state* FUNC_2 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct drm_crtc_state*) ;
 int FUNC_4 (int) ;
 struct drm_crtc_state* FUNC_5 (struct drm_atomic_state*,scalar_t__) ;
 int FUNC_6 (struct drm_connector*) ;
 int FUNC_7 (struct drm_connector*) ;
 int FUNC_8 (int *,int ) ;
 struct __drm_connnectors_state* FUNC_9 (struct __drm_connnectors_state*,int,int ) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (struct __drm_connnectors_state*,int ,int) ;
 struct drm_connector_state* FUNC_12 (struct drm_connector*) ;

struct drm_connector_state *
FUNC_13(struct drm_atomic_state *VAR_2,
     struct drm_connector *VAR_3)
{
 int VAR_4, VAR_5;
 struct drm_mode_config *VAR_6 = &VAR_3->dev->mode_config;
 struct drm_connector_state *VAR_7;

 FUNC_4(!VAR_2->acquire_ctx);

 VAR_4 = FUNC_8(&VAR_6->connection_mutex, VAR_2->acquire_ctx);
 if (VAR_4)
  return FUNC_2(VAR_4);

 VAR_5 = FUNC_7(VAR_3);

 if (VAR_5 >= VAR_2->num_connector) {
  struct __drm_connnectors_state *VAR_8;
  int VAR_9 = FUNC_10(VAR_5 + 1, VAR_6->num_connector);

  VAR_8 = FUNC_9(VAR_2->connectors, VAR_9 * sizeof(*VAR_2->connectors), VAR_1);
  if (!VAR_8)
   return FUNC_2(-VAR_0);

  VAR_2->connectors = VAR_8;
  FUNC_11(&VAR_2->connectors[VAR_2->num_connector], 0,
         sizeof(*VAR_2->connectors) * (VAR_9 - VAR_2->num_connector));

  VAR_2->num_connector = VAR_9;
 }

 if (VAR_2->connectors[VAR_5].state)
  return VAR_2->connectors[VAR_5].state;

 VAR_7 = VAR_3->funcs->atomic_duplicate_state(VAR_3);
 if (!VAR_7)
  return FUNC_2(-VAR_0);

 FUNC_6(VAR_3);
 VAR_2->connectors[VAR_5].state = VAR_7;
 VAR_2->connectors[VAR_5].old_state = VAR_3->state;
 VAR_2->connectors[VAR_5].new_state = VAR_7;
 VAR_2->connectors[VAR_5].ptr = VAR_3;
 VAR_7->state = VAR_2;

 FUNC_0("Added [CONNECTOR:%d:%s] %p state to %p\n",
    VAR_3->base.id, VAR_3->name,
    VAR_7, VAR_2);

 if (VAR_7->crtc) {
  struct drm_crtc_state *VAR_10;

  VAR_10 = FUNC_5(VAR_2,
             VAR_7->crtc);
  if (FUNC_3(VAR_10))
   return FUNC_1(VAR_10);
 }

 return VAR_7;
}
