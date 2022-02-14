
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ x; scalar_t__ width; scalar_t__ y; scalar_t__ height; } ;
struct mdp5_crtc {TYPE_2__ cursor; } ;
struct TYPE_3__ {scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct drm_crtc {TYPE_1__ mode; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 struct mdp5_crtc* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_0, uint32_t *VAR_1, uint32_t *VAR_2)
{
 struct mdp5_crtc *VAR_3 = FUNC_2(VAR_0);
 uint32_t VAR_4 = VAR_0->mode.hdisplay;
 uint32_t VAR_5 = VAR_0->mode.vdisplay;
 if (VAR_3->cursor.x >= 0)
  *VAR_1 = FUNC_1(VAR_3->cursor.width, VAR_4 -
   VAR_3->cursor.x);
 else
  *VAR_1 = VAR_3->cursor.width - FUNC_0(VAR_3->cursor.x);
 if (VAR_3->cursor.y >= 0)
  *VAR_2 = FUNC_1(VAR_3->cursor.height, VAR_5 -
   VAR_3->cursor.y);
 else
  *VAR_2 = VAR_3->cursor.height - FUNC_0(VAR_3->cursor.y);
}
