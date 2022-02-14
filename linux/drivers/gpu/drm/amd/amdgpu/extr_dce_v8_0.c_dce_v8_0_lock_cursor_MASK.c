
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_crtc {TYPE_1__* dev; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_crtc {scalar_t__ crtc_offset; } ;
struct TYPE_2__ {struct amdgpu_device* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 struct amdgpu_crtc* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_2, bool VAR_3)
{
 struct amdgpu_device *VAR_4 = VAR_2->dev->dev_private;
 struct amdgpu_crtc *VAR_5 = FUNC_2(VAR_2);
 uint32_t VAR_6;

 VAR_6 = FUNC_0(VAR_1 + VAR_5->crtc_offset);
 if (VAR_3)
  VAR_6 |= VAR_0;
 else
  VAR_6 &= ~VAR_0;
 FUNC_1(VAR_1 + VAR_5->crtc_offset, VAR_6);
}
