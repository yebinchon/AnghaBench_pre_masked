
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mdp5_pipeline {TYPE_2__* r_mixer; TYPE_1__* mixer; } ;
struct mdp5_kms {int caps; } ;
struct mdp5_crtc_state {char* cmd_mode; scalar_t__ ctl; struct mdp5_pipeline pipeline; } ;
struct drm_printer {int dummy; } ;
struct drm_crtc_state {int crtc; } ;
struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {char* name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_printer*,char*,char*) ;
 struct mdp5_kms* FUNC_2 (int ) ;
 char* FUNC_3 (scalar_t__) ;
 struct mdp5_crtc_state* FUNC_4 (struct drm_crtc_state const*) ;

__attribute__((used)) static void
FUNC_5(struct drm_printer *VAR_1,
        const struct drm_crtc_state *VAR_2)
{
 struct mdp5_crtc_state *VAR_3 = FUNC_4(VAR_2);
 struct mdp5_pipeline *VAR_4 = &VAR_3->pipeline;
 struct mdp5_kms *VAR_5 = FUNC_2(VAR_2->crtc);

 if (FUNC_0(!VAR_4))
  return;

 if (VAR_3->ctl)
  FUNC_1(VAR_1, "\tctl=%d\n", FUNC_3(VAR_3->ctl));

 FUNC_1(VAR_1, "\thwmixer=%s\n", VAR_4->mixer ?
   VAR_4->mixer->name : "(null)");

 if (VAR_5->caps & VAR_0)
  FUNC_1(VAR_1, "\tright hwmixer=%s\n", VAR_4->r_mixer ?
      VAR_4->r_mixer->name : "(null)");

 FUNC_1(VAR_1, "\tcmd_mode=%d\n", VAR_3->cmd_mode);
}
