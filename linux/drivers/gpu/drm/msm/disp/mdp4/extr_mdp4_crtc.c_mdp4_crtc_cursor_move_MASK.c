
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int x; int y; int lock; } ;
struct mdp4_crtc {TYPE_1__ cursor; } ;
struct drm_crtc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (struct drm_crtc*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct mdp4_crtc* FUNC_4 (struct drm_crtc*) ;

__attribute__((used)) static int FUNC_5(struct drm_crtc *VAR_1, int VAR_2, int VAR_3)
{
 struct mdp4_crtc *VAR_4 = FUNC_4(VAR_1);
 unsigned long VAR_5;

 FUNC_2(&VAR_4->cursor.lock, VAR_5);
 VAR_4->cursor.x = VAR_2;
 VAR_4->cursor.y = VAR_3;
 FUNC_3(&VAR_4->cursor.lock, VAR_5);

 FUNC_0(VAR_1);
 FUNC_1(VAR_1, VAR_0);

 return 0;
}
