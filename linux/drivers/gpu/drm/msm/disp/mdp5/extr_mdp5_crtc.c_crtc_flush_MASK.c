
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mdp5_pipeline {int dummy; } ;
struct mdp5_ctl {int dummy; } ;
struct mdp5_crtc_state {int defer_start; struct mdp5_pipeline pipeline; struct mdp5_ctl* ctl; } ;
struct drm_crtc {int name; int state; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct mdp5_ctl*,struct mdp5_pipeline*,int ,int) ;
 struct mdp5_crtc_state* FUNC_2 (int ) ;

__attribute__((used)) static u32 FUNC_3(struct drm_crtc *VAR_0, u32 VAR_1)
{
 struct mdp5_crtc_state *VAR_2 = FUNC_2(VAR_0->state);
 struct mdp5_ctl *VAR_3 = VAR_2->ctl;
 struct mdp5_pipeline *VAR_4 = &VAR_2->pipeline;
 bool VAR_5 = !VAR_2->defer_start;

 VAR_2->defer_start = 0;

 FUNC_0("%s: flush=%08x", VAR_0->name, VAR_1);

 return FUNC_1(VAR_3, VAR_4, VAR_1, VAR_5);
}
