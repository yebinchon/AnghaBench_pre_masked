
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_hdmi_lpe_audio_port_pdata {int pipe; int ls_clock; int dp_output; int eld; } ;
struct intel_hdmi_lpe_audio_pdata {int lpe_audio_slock; int (* notify_audio_lpe ) (TYPE_2__*,int) ;struct intel_hdmi_lpe_audio_port_pdata* port; } ;
struct TYPE_3__ {TYPE_2__* platdev; } ;
struct drm_i915_private {TYPE_1__ lpe_audio; } ;
typedef enum port { ____Placeholder_port } port ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 struct intel_hdmi_lpe_audio_pdata* FUNC_4 (int *) ;
 int FUNC_5 (int ,void const*,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (TYPE_2__*,int) ;

void FUNC_10(struct drm_i915_private *VAR_3,
       enum pipe VAR_4, enum port VAR_5,
       const void *VAR_6, int VAR_7, bool VAR_8)
{
 unsigned long VAR_9;
 struct intel_hdmi_lpe_audio_pdata *VAR_10;
 struct intel_hdmi_lpe_audio_port_pdata *VAR_11;
 u32 VAR_12;

 if (!FUNC_0(VAR_3))
  return;

 VAR_10 = FUNC_4(&VAR_3->lpe_audio.platdev->dev);
 VAR_11 = &VAR_10->port[VAR_5 - VAR_1];

 FUNC_7(&VAR_10->lpe_audio_slock, VAR_9);

 VAR_12 = FUNC_1(FUNC_3(VAR_5));

 if (VAR_6 != ((void*)0)) {
  FUNC_5(VAR_11->eld, VAR_6, VAR_0);
  VAR_11->pipe = VAR_4;
  VAR_11->ls_clock = VAR_7;
  VAR_11->dp_output = VAR_8;


  FUNC_2(FUNC_3(VAR_5),
      VAR_12 & ~VAR_2);
 } else {
  FUNC_6(VAR_11->eld, 0, VAR_0);
  VAR_11->pipe = -1;
  VAR_11->ls_clock = 0;
  VAR_11->dp_output = 0;


  FUNC_2(FUNC_3(VAR_5),
      VAR_12 | VAR_2);
 }

 if (VAR_10->notify_audio_lpe)
  VAR_10->notify_audio_lpe(VAR_3->lpe_audio.platdev, VAR_5 - VAR_1);

 FUNC_8(&VAR_10->lpe_audio_slock, VAR_9);
}
