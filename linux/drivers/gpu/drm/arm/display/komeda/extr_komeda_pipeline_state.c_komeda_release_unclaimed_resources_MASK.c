
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct komeda_pipeline_state {int dummy; } ;
struct komeda_pipeline {int id; } ;
struct TYPE_2__ {struct drm_atomic_state* state; } ;
struct komeda_crtc_state {int active_pipes; int affected_pipes; TYPE_1__ base; } ;
struct drm_atomic_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct komeda_pipeline_state*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 struct komeda_pipeline_state* FUNC_3 (struct komeda_pipeline*,struct drm_atomic_state*) ;
 struct komeda_pipeline_state* FUNC_4 (struct komeda_pipeline*,struct drm_atomic_state*,int *) ;
 int FUNC_5 (struct komeda_pipeline*,struct komeda_pipeline_state*) ;

int FUNC_6(struct komeda_pipeline *VAR_1,
           struct komeda_crtc_state *VAR_2)
{
 struct drm_atomic_state *VAR_3 = VAR_2->base.state;
 struct komeda_pipeline_state *VAR_4;


 if (!VAR_1 || !FUNC_2(VAR_1->id, VAR_2->affected_pipes))
  return 0;

 if (FUNC_2(VAR_1->id, VAR_2->active_pipes))
  VAR_4 = FUNC_3(VAR_1, VAR_3);
 else
  VAR_4 = FUNC_4(VAR_1, VAR_3, ((void*)0));

 if (FUNC_1(FUNC_0(VAR_4)))
  return -VAR_0;

 FUNC_5(VAR_1, VAR_4);

 return 0;
}
