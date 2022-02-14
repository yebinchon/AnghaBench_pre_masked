
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct drm_plane*,int *) ;
 int FUNC_2 (struct drm_device*,struct drm_plane*,int ,int *,int ,int ,int *,int ,int *) ;

int FUNC_3(struct drm_device *VAR_4,
 struct drm_plane *VAR_5)
{
 int VAR_6;

 FUNC_1(VAR_5, &VAR_3);

 VAR_6 = FUNC_2(VAR_4, VAR_5, 0,
           &VAR_2,
           VAR_1,
           FUNC_0(VAR_1),
           ((void*)0),
           VAR_0, ((void*)0));

 return VAR_6;
}
