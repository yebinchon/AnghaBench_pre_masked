
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi {struct drm_encoder* encoder; } ;
struct drm_encoder {int dummy; } ;


 int FUNC_0 (struct msm_dsi*) ;

struct drm_encoder *FUNC_1(struct msm_dsi *VAR_0)
{
 if (!VAR_0 || !FUNC_0(VAR_0))
  return ((void*)0);

 return VAR_0->encoder;
}
