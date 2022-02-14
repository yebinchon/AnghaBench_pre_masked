
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
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 struct amdgpu_crtc* FUNC_3 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_4(struct drm_crtc *VAR_3, bool VAR_4)
{
 struct amdgpu_device *VAR_5 = VAR_3->dev->dev_private;
 struct amdgpu_crtc *VAR_6 = FUNC_3(VAR_3);
 uint32_t VAR_7;

 VAR_7 = FUNC_1(VAR_2 + VAR_6->crtc_offset);
 if (VAR_4)
  VAR_7 = FUNC_0(VAR_7, VAR_1, VAR_0, 1);
 else
  VAR_7 = FUNC_0(VAR_7, VAR_1, VAR_0, 0);
 FUNC_2(VAR_2 + VAR_6->crtc_offset, VAR_7);
}
