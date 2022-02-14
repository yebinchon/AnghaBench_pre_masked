
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* set_pos ) (struct nouveau_crtc*,int,int) ;} ;
struct nouveau_crtc {TYPE_1__ cursor; } ;
struct drm_crtc {int dummy; } ;


 struct nouveau_crtc* FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (struct nouveau_crtc*,int,int) ;

__attribute__((used)) static int
FUNC_2(struct drm_crtc *VAR_0, int VAR_1, int VAR_2)
{
 struct nouveau_crtc *VAR_3 = FUNC_0(VAR_0);

 VAR_3->cursor.set_pos(VAR_3, VAR_1, VAR_2);
 return 0;
}
