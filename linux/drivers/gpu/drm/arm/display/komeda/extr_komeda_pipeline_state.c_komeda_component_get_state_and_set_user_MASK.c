
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct komeda_pipeline_state {int active_comps; void* binding_user; } ;
struct komeda_component_state {int active_comps; void* binding_user; } ;
struct komeda_component {int id; int name; int pipeline; } ;
struct drm_crtc {int dummy; } ;
struct drm_atomic_state {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 struct komeda_pipeline_state* FUNC_2 (struct komeda_pipeline_state*) ;
 struct komeda_pipeline_state* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct komeda_pipeline_state*) ;
 scalar_t__ FUNC_5 (void*,void*) ;
 struct komeda_pipeline_state* FUNC_6 (struct komeda_component*,struct drm_atomic_state*) ;
 struct komeda_pipeline_state* FUNC_7 (int ,struct drm_atomic_state*,struct drm_crtc*) ;

__attribute__((used)) static struct komeda_component_state *
FUNC_8(struct komeda_component *VAR_1,
     struct drm_atomic_state *VAR_2,
     void *VAR_3,
     struct drm_crtc *VAR_4)
{
 struct komeda_pipeline_state *VAR_5;
 struct komeda_component_state *VAR_6;


 VAR_5 = FUNC_7(VAR_1->pipeline,
        VAR_2, VAR_4);
 if (FUNC_4(VAR_5))
  return FUNC_2(VAR_5);

 VAR_6 = FUNC_6(VAR_1, VAR_2);
 if (FUNC_4(VAR_6))
  return VAR_6;


 if (FUNC_5(VAR_3, VAR_6->binding_user)) {
  FUNC_1("required %s is busy.\n", VAR_1->name);
  return FUNC_3(-VAR_0);
 }

 VAR_6->binding_user = VAR_3;

 if (VAR_6->binding_user)
  VAR_5->active_comps |= FUNC_0(VAR_1->id);

 return VAR_6;
}
