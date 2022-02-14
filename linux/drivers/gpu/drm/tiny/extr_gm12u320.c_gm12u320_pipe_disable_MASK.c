
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gm12u320_device {int pipe_enabled; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct drm_simple_display_pipe {TYPE_2__ crtc; } ;
struct TYPE_3__ {struct gm12u320_device* dev_private; } ;


 int FUNC_0 (struct gm12u320_device*) ;

__attribute__((used)) static void FUNC_1(struct drm_simple_display_pipe *VAR_0)
{
 struct gm12u320_device *VAR_1 = VAR_0->crtc.dev->dev_private;

 FUNC_0(VAR_1);
 VAR_1->pipe_enabled = 0;
}
