
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct TYPE_2__ {scalar_t__ dp_extclk; } ;
struct amdgpu_device {TYPE_1__ clock; } ;
struct amdgpu_crtc {int encoder; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (struct drm_crtc*) ;
 struct amdgpu_crtc* FUNC_6 (struct drm_crtc*) ;

__attribute__((used)) static u32 FUNC_7(struct drm_crtc *VAR_4)
{
 struct amdgpu_crtc *VAR_5 = FUNC_6(VAR_4);
 struct drm_device *VAR_6 = VAR_4->dev;
 struct amdgpu_device *VAR_7 = VAR_6->dev_private;
 u32 VAR_8;
 int VAR_9;

 if (FUNC_1(FUNC_2(VAR_5->encoder))) {
  if (VAR_7->clock.dp_extclk)

   return VAR_3;
  else {

   VAR_9 = FUNC_3(VAR_4);
   if (VAR_9 != VAR_3)
    return VAR_9;
  }
 } else {

  VAR_9 = FUNC_4(VAR_4);
  if (VAR_9 != VAR_3)
   return VAR_9;
 }


 VAR_8 = FUNC_5(VAR_4);
 if (!(VAR_8 & (1 << VAR_2)))
  return VAR_2;
 if (!(VAR_8 & (1 << VAR_1)))
  return VAR_1;
 if (!(VAR_8 & (1 << VAR_0)))
  return VAR_0;
 FUNC_0("unable to allocate a PPLL\n");
 return VAR_3;
}
