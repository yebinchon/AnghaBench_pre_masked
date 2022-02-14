
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct msm_dsi {struct drm_encoder* encoder; TYPE_1__* dev; } ;
struct drm_bridge {int * funcs; } ;
struct dsi_bridge {struct drm_bridge base; int id; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 struct drm_bridge* FUNC_0 (int) ;
 int VAR_1 ;
 struct dsi_bridge* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct drm_encoder*,struct drm_bridge*,int *) ;
 int VAR_2 ;
 struct msm_dsi* FUNC_3 (int ) ;
 int FUNC_4 (struct drm_bridge*) ;

struct drm_bridge *FUNC_5(u8 VAR_3)
{
 struct msm_dsi *VAR_4 = FUNC_3(VAR_3);
 struct drm_bridge *VAR_5 = ((void*)0);
 struct dsi_bridge *VAR_6;
 struct drm_encoder *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_1(VAR_4->dev->dev,
    sizeof(*VAR_6), VAR_1);
 if (!VAR_6) {
  VAR_8 = -VAR_0;
  goto fail;
 }

 VAR_6->id = VAR_3;

 VAR_7 = VAR_4->encoder;

 VAR_5 = &VAR_6->base;
 VAR_5->funcs = &VAR_2;

 VAR_8 = FUNC_2(VAR_7, VAR_5, ((void*)0));
 if (VAR_8)
  goto fail;

 return VAR_5;

fail:
 if (VAR_5)
  FUNC_4(VAR_5);

 return FUNC_0(VAR_8);
}
