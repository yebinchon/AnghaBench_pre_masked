
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_bridge {int * funcs; } ;
struct hdmi_bridge {struct drm_bridge base; struct hdmi* hdmi; } ;
struct hdmi {int encoder; TYPE_1__* dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 struct drm_bridge* FUNC_0 (int) ;
 int VAR_1 ;
 struct hdmi_bridge* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,struct drm_bridge*,int *) ;
 int FUNC_3 (struct drm_bridge*) ;
 int VAR_2 ;

struct drm_bridge *FUNC_4(struct hdmi *VAR_3)
{
 struct drm_bridge *VAR_4 = ((void*)0);
 struct hdmi_bridge *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_3->dev->dev,
   sizeof(*VAR_5), VAR_1);
 if (!VAR_5) {
  VAR_6 = -VAR_0;
  goto fail;
 }

 VAR_5->hdmi = VAR_3;

 VAR_4 = &VAR_5->base;
 VAR_4->funcs = &VAR_2;

 VAR_6 = FUNC_2(VAR_3->encoder, VAR_4, ((void*)0));
 if (VAR_6)
  goto fail;

 return VAR_4;

fail:
 if (VAR_4)
  FUNC_3(VAR_4);

 return FUNC_0(VAR_6);
}
