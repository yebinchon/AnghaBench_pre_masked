
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane {int dummy; } ;
struct drm_device {int dummy; } ;
typedef enum drm_plane_type { ____Placeholder_drm_plane_type } drm_plane_type ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct drm_plane*,int *) ;
 int FUNC_3 (struct drm_device*,struct drm_plane*,unsigned long,int *,int ,int ,int *,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_4(struct drm_device *VAR_3, struct drm_plane *VAR_4,
     unsigned long VAR_5, enum drm_plane_type VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5,
           &VAR_1, VAR_0,
           FUNC_0(VAR_0), ((void*)0), VAR_6, ((void*)0));
 if (VAR_7) {
  FUNC_1("failed to initialize plane\n");
  return VAR_7;
 }

 FUNC_2(VAR_4, &VAR_2);

 return 0;
}
