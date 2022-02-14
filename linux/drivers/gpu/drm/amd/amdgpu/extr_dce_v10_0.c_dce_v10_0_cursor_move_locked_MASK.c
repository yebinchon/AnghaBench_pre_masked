
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_crtc {scalar_t__ y; scalar_t__ x; TYPE_1__* dev; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_crtc {int cursor_x; int cursor_y; int cursor_width; int cursor_height; scalar_t__ crtc_offset; scalar_t__ max_cursor_height; scalar_t__ max_cursor_width; } ;
struct TYPE_2__ {struct amdgpu_device* dev_private; } ;


 int FUNC_0 (char*,int,int,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct amdgpu_crtc* FUNC_3 (struct drm_crtc*) ;

__attribute__((used)) static int FUNC_4(struct drm_crtc *VAR_3,
     int VAR_4, int VAR_5)
{
 struct amdgpu_crtc *VAR_6 = FUNC_3(VAR_3);
 struct amdgpu_device *VAR_7 = VAR_3->dev->dev_private;
 int VAR_8 = 0, VAR_9 = 0;

 VAR_6->cursor_x = VAR_4;
 VAR_6->cursor_y = VAR_5;


 VAR_4 += VAR_3->x;
 VAR_5 += VAR_3->y;
 FUNC_0("x %d y %d c->x %d c->y %d\n", VAR_4, VAR_5, VAR_3->x, VAR_3->y);

 if (VAR_4 < 0) {
  VAR_8 = FUNC_2(-VAR_4, VAR_6->max_cursor_width - 1);
  VAR_4 = 0;
 }
 if (VAR_5 < 0) {
  VAR_9 = FUNC_2(-VAR_5, VAR_6->max_cursor_height - 1);
  VAR_5 = 0;
 }

 FUNC_1(VAR_1 + VAR_6->crtc_offset, (VAR_4 << 16) | VAR_5);
 FUNC_1(VAR_0 + VAR_6->crtc_offset, (VAR_8 << 16) | VAR_9);
 FUNC_1(VAR_2 + VAR_6->crtc_offset,
        ((VAR_6->cursor_width - 1) << 16) | (VAR_6->cursor_height - 1));

 return 0;
}
