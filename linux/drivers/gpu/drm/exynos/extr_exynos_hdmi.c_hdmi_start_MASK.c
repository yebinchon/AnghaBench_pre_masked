
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {TYPE_2__* crtc; } ;
struct hdmi_context {TYPE_3__ encoder; } ;
struct drm_display_mode {int flags; } ;
struct TYPE_5__ {TYPE_1__* state; } ;
struct TYPE_4__ {struct drm_display_mode mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hdmi_context*,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct hdmi_context *VAR_6, bool VAR_7)
{
 struct drm_display_mode *VAR_8 = &VAR_6->encoder.crtc->state->mode;
 u32 VAR_9 = VAR_7 ? VAR_5 : 0;

 if (VAR_8->flags & VAR_0)
  VAR_9 |= VAR_3;

 FUNC_0(VAR_6, VAR_1, VAR_9, VAR_2);
 FUNC_0(VAR_6, VAR_4, VAR_9, VAR_5 | VAR_3);
}
