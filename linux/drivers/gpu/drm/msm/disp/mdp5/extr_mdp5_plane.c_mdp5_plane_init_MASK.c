
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane {int base; } ;
struct mdp5_plane {int nformats; int formats; struct drm_plane base; } ;
struct drm_device {int dummy; } ;
typedef enum drm_plane_type { ____Placeholder_drm_plane_type } drm_plane_type ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct drm_plane* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct drm_plane*) ;
 int FUNC_3 (struct drm_plane*,int *) ;
 int FUNC_4 (struct drm_device*,struct drm_plane*,int,int *,int ,int ,int *,int,int *) ;
 struct mdp5_plane* FUNC_5 (int,int ) ;
 int FUNC_6 (struct drm_plane*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (struct drm_plane*,int *) ;
 int FUNC_8 (int ,int ,int) ;

struct drm_plane *FUNC_9(struct drm_device *VAR_4,
      enum drm_plane_type VAR_5)
{
 struct drm_plane *VAR_6 = ((void*)0);
 struct mdp5_plane *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_1);
 if (!VAR_7) {
  VAR_8 = -VAR_0;
  goto fail;
 }

 VAR_6 = &VAR_7->base;

 VAR_7->nformats = FUNC_8(VAR_7->formats,
  FUNC_0(VAR_7->formats), 0);

 VAR_8 = FUNC_4(VAR_4, VAR_6, 0xff, &VAR_2,
   VAR_7->formats, VAR_7->nformats,
   ((void*)0), VAR_5, ((void*)0));
 if (VAR_8)
  goto fail;

 FUNC_3(VAR_6, &VAR_3);

 FUNC_7(VAR_6, &VAR_6->base);

 FUNC_2(VAR_6);

 return VAR_6;

fail:
 if (VAR_6)
  FUNC_6(VAR_6);

 return FUNC_1(VAR_8);
}
