
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct komeda_scaler {int dummy; } ;
struct komeda_pipeline_state {int active_comps; } ;
struct komeda_component {int pipeline; } ;
struct drm_atomic_state {int dummy; } ;


 int VAR_0 ;
 struct komeda_component* FUNC_0 (struct komeda_component*,int) ;
 struct komeda_pipeline_state* FUNC_1 (int ,struct drm_atomic_state*) ;
 struct komeda_scaler* FUNC_2 (struct komeda_component*) ;

__attribute__((used)) static struct komeda_scaler *
FUNC_3(struct komeda_component *VAR_1,
      struct drm_atomic_state *VAR_2)
{
 struct komeda_pipeline_state *VAR_3;
 u32 VAR_4;

 VAR_3 = FUNC_1(VAR_1->pipeline, VAR_2);
 if (!VAR_3)
  return ((void*)0);

 VAR_4 = (VAR_3->active_comps & VAR_0) ^
   VAR_0;

 VAR_1 = FUNC_0(VAR_1, VAR_4);

 return FUNC_2(VAR_1);
}
