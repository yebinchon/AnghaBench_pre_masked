
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hibmc_drm_private {struct drm_device* dev; } ;
struct drm_plane {int dummy; } ;
struct drm_device {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 struct drm_plane* FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct drm_plane* FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct drm_plane*,int *) ;
 int FUNC_5 (struct drm_device*,struct drm_plane*,int,int *,int ,int ,int *,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static struct drm_plane *FUNC_6(struct hibmc_drm_private *VAR_6)
{
 struct drm_device *VAR_7 = VAR_6->dev;
 struct drm_plane *VAR_8;
 int VAR_9 = 0;

 VAR_8 = FUNC_3(VAR_7->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8) {
  FUNC_1("failed to alloc memory when init plane\n");
  return FUNC_2(-VAR_1);
 }





 VAR_9 = FUNC_5(VAR_7, VAR_8, 1, &VAR_4,
           VAR_3,
           FUNC_0(VAR_3),
           ((void*)0),
           VAR_0,
           ((void*)0));
 if (VAR_9) {
  FUNC_1("failed to init plane: %d\n", VAR_9);
  return FUNC_2(VAR_9);
 }

 FUNC_4(VAR_8, &VAR_5);
 return VAR_8;
}
