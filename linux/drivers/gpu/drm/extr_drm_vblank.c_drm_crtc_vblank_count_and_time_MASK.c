
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct drm_crtc {int dev; } ;
typedef int ktime_t ;


 int FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (int ,int ,int *) ;

u64 FUNC_2(struct drm_crtc *VAR_0,
       ktime_t *VAR_1)
{
 return FUNC_1(VAR_0->dev, FUNC_0(VAR_0),
      VAR_1);
}
