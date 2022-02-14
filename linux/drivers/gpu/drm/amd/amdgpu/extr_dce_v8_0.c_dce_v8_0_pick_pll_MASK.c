
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct TYPE_2__ {scalar_t__ dp_extclk; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_1__ clock; } ;
struct amdgpu_crtc {int encoder; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (struct drm_crtc*) ;
 struct amdgpu_crtc* FUNC_6 (struct drm_crtc*) ;

__attribute__((used)) static u32 FUNC_7(struct drm_crtc *VAR_6)
{
 struct amdgpu_crtc *VAR_7 = FUNC_6(VAR_6);
 struct drm_device *VAR_8 = VAR_6->dev;
 struct amdgpu_device *VAR_9 = VAR_8->dev_private;
 u32 VAR_10;
 int VAR_11;

 if (FUNC_1(FUNC_2(VAR_7->encoder))) {
  if (VAR_9->clock.dp_extclk)

   return VAR_3;
  else {

   VAR_11 = FUNC_3(VAR_6);
   if (VAR_11 != VAR_3)
    return VAR_11;
  }
 } else {

  VAR_11 = FUNC_4(VAR_6);
  if (VAR_11 != VAR_3)
   return VAR_11;
 }

 if ((VAR_9->asic_type == VAR_4) ||
     (VAR_9->asic_type == VAR_5)) {

  VAR_10 = FUNC_5(VAR_6);
  if (!(VAR_10 & (1 << VAR_2)))
   return VAR_2;
  if (!(VAR_10 & (1 << VAR_1)))
   return VAR_1;
  FUNC_0("unable to allocate a PPLL\n");
  return VAR_3;
 } else {

  VAR_10 = FUNC_5(VAR_6);
  if (!(VAR_10 & (1 << VAR_2)))
   return VAR_2;
  if (!(VAR_10 & (1 << VAR_1)))
   return VAR_1;
  if (!(VAR_10 & (1 << VAR_0)))
   return VAR_0;
  FUNC_0("unable to allocate a PPLL\n");
  return VAR_3;
 }
 return VAR_3;
}
