
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc {int dummy; } ;
struct amdgpu_crtc {int cursor_y; int cursor_x; scalar_t__ cursor_bo; } ;


 int FUNC_0 (struct drm_crtc*,int ,int ) ;
 int FUNC_1 (struct drm_crtc*,int) ;
 int FUNC_2 (struct drm_crtc*) ;
 struct amdgpu_crtc* FUNC_3 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_4(struct drm_crtc *VAR_0)
{
 struct amdgpu_crtc *VAR_1 = FUNC_3(VAR_0);

 if (VAR_1->cursor_bo) {
  FUNC_1(VAR_0, 1);

  FUNC_0(VAR_0, VAR_1->cursor_x,
          VAR_1->cursor_y);

  FUNC_2(VAR_0);

  FUNC_1(VAR_0, 0);
 }
}
