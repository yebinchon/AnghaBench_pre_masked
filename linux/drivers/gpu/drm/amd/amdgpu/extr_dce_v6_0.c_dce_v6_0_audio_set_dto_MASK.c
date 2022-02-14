
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_encoder {int crtc; struct drm_device* dev; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_crtc {int crtc_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct drm_encoder*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct amdgpu_crtc* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct drm_encoder *VAR_9, u32 VAR_10)
{
 struct drm_device *VAR_11 = VAR_9->dev;
 struct amdgpu_device *VAR_12 = VAR_11->dev_private;
 struct amdgpu_crtc *VAR_13 = FUNC_5(VAR_9->crtc);
 int VAR_14 = FUNC_4(VAR_9);
 u32 VAR_15;







 VAR_15 = FUNC_2(VAR_8);
 VAR_15 = FUNC_1(VAR_15, VAR_3,
   VAR_1, VAR_13->crtc_id);
 if (VAR_14 == VAR_0) {
  VAR_15 = FUNC_1(VAR_15, VAR_3,
    VAR_2, 0);
 } else if (FUNC_0(VAR_14)) {
  VAR_15 = FUNC_1(VAR_15, VAR_3,
    VAR_2, 1);
 }
 FUNC_3(VAR_8, VAR_15);
 if (VAR_14 == VAR_0) {
  FUNC_3(VAR_5, 24000);
  FUNC_3(VAR_4, VAR_10);
 } else if (FUNC_0(VAR_14)) {
  FUNC_3(VAR_7, 24000);
  FUNC_3(VAR_6, VAR_10);
 }
}
