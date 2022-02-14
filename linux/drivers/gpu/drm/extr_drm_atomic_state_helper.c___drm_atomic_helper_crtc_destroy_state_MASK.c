
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_crtc_state {int gamma_lut; int ctm; int degamma_lut; int mode_blob; TYPE_1__* commit; scalar_t__ event; } ;
struct TYPE_2__ {int * event; scalar_t__ abort_completion; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct drm_crtc_state *VAR_0)
{
 if (VAR_0->commit) {
  if (VAR_0->event && VAR_0->commit->abort_completion)
   FUNC_0(VAR_0->commit);

  FUNC_2(VAR_0->commit->event);
  VAR_0->commit->event = ((void*)0);

  FUNC_0(VAR_0->commit);
 }

 FUNC_1(VAR_0->mode_blob);
 FUNC_1(VAR_0->degamma_lut);
 FUNC_1(VAR_0->ctm);
 FUNC_1(VAR_0->gamma_lut);
}
