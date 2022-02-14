
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct drm_plane*,int *) ;
 int FUNC_3 (struct drm_device*,struct drm_plane*,int ,int *,int ,int ,int *,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct drm_plane*) ;
 struct drm_plane* FUNC_5 (int,int ) ;

struct drm_plane *FUNC_6(struct drm_device *VAR_5)
{
 struct drm_plane *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_1);
 if (!VAR_6) {
  FUNC_1("Failed to allocate primary plane\n");
  return ((void*)0);
 }


 VAR_7 = FUNC_3(VAR_5, VAR_6, 0,
           &VAR_3,
           VAR_2,
           FUNC_0(VAR_2),
           ((void*)0), VAR_0, ((void*)0));
 if (VAR_7) {
  FUNC_4(VAR_6);
  VAR_6 = ((void*)0);
 }
 FUNC_2(VAR_6, &VAR_4);

 return VAR_6;
}
