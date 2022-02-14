
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_crtc {TYPE_1__* dev; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_crtc {scalar_t__ crtc_offset; int cursor_addr; } ;
struct TYPE_2__ {struct amdgpu_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct amdgpu_crtc* FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct drm_crtc *VAR_8)
{
 struct amdgpu_crtc *VAR_9 = FUNC_3(VAR_8);
 struct amdgpu_device *VAR_10 = VAR_8->dev->dev_private;

 FUNC_0(VAR_7 + VAR_9->crtc_offset,
        FUNC_4(VAR_9->cursor_addr));
 FUNC_0(VAR_6 + VAR_9->crtc_offset,
        FUNC_2(VAR_9->cursor_addr));

 FUNC_1(VAR_5 + VAR_9->crtc_offset,
     VAR_2 |
     (VAR_0 << VAR_3) |
     (VAR_1 << VAR_4));

}
