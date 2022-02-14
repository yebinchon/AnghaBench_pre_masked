
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_crtc {TYPE_1__* dev; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_crtc {scalar_t__ crtc_offset; } ;
struct TYPE_2__ {struct amdgpu_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_4 ;
 struct amdgpu_crtc* FUNC_1 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_2(struct drm_crtc *VAR_5)
{
 struct amdgpu_crtc *VAR_6 = FUNC_1(VAR_5);
 struct amdgpu_device *VAR_7 = VAR_5->dev->dev_private;

 FUNC_0(VAR_4 + VAR_6->crtc_offset,
     (VAR_0 << VAR_2) |
     (VAR_1 << VAR_3));
}
