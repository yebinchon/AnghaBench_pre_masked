
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ingenic_drm {int map; } ;
struct drm_crtc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ingenic_drm* FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct drm_crtc *VAR_2)
{
 struct ingenic_drm *VAR_3 = FUNC_0(VAR_2);

 FUNC_1(VAR_3->map, VAR_1,
      VAR_0, VAR_0);

 return 0;
}
