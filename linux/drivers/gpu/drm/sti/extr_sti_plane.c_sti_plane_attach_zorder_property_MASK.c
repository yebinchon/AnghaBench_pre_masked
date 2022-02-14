
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane {int dummy; } ;
typedef enum drm_plane_type { ____Placeholder_drm_plane_type } drm_plane_type ;





 int FUNC_0 (struct drm_plane*,int) ;
 int FUNC_1 (struct drm_plane*,int,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct drm_plane *VAR_0,
          enum drm_plane_type VAR_1)
{
 int VAR_2 = FUNC_2(VAR_1);

 switch (VAR_1) {
 case 128:
 case 129:
  FUNC_1(VAR_0, VAR_2, 0, 6);
  break;
 case 130:
  FUNC_0(VAR_0, VAR_2);
  break;
 }
}
