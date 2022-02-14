
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_crtc {TYPE_1__* dev; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_crtc {scalar_t__ crtc_offset; int cursor_addr; } ;
struct TYPE_2__ {struct amdgpu_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct amdgpu_crtc* FUNC_5 (struct drm_crtc*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct drm_crtc *VAR_6)
{
 struct amdgpu_crtc *VAR_7 = FUNC_5(VAR_6);
 struct amdgpu_device *VAR_8 = VAR_6->dev->dev_private;
 u32 VAR_9;

 FUNC_2(VAR_5 + VAR_7->crtc_offset,
        FUNC_6(VAR_7->cursor_addr));
 FUNC_2(VAR_4 + VAR_7->crtc_offset,
        FUNC_4(VAR_7->cursor_addr));

 VAR_9 = FUNC_1(VAR_3 + VAR_7->crtc_offset);
 VAR_9 = FUNC_0(VAR_9, VAR_2, VAR_0, 1);
 VAR_9 = FUNC_0(VAR_9, VAR_2, VAR_1, 2);
 FUNC_3(VAR_3 + VAR_7->crtc_offset, VAR_9);
}
