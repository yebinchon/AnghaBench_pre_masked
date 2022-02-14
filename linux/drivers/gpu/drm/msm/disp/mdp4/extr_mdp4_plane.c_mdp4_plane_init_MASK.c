
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane {int base; } ;
struct mdp4_plane {int pipe; int nformats; int formats; int caps; int name; struct drm_plane base; } ;
struct drm_device {int dummy; } ;
typedef enum mdp4_pipe { ____Placeholder_mdp4_pipe } mdp4_pipe ;
typedef enum drm_plane_type { ____Placeholder_drm_plane_type } drm_plane_type ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_plane* FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (struct drm_plane*) ;
 int FUNC_3 (struct drm_plane*,int *) ;
 int FUNC_4 (struct drm_device*,struct drm_plane*,int,int *,int ,int ,int *,int,int *) ;
 struct mdp4_plane* FUNC_5 (int,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct drm_plane*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct drm_plane*,int *) ;
 int FUNC_9 (int ,int ,int) ;
 int * VAR_6 ;
 int FUNC_10 (int ) ;

struct drm_plane *FUNC_11(struct drm_device *VAR_7,
  enum mdp4_pipe VAR_8, bool VAR_9)
{
 struct drm_plane *VAR_10 = ((void*)0);
 struct mdp4_plane *VAR_11;
 int VAR_12;
 enum drm_plane_type VAR_13;

 VAR_11 = FUNC_5(sizeof(*VAR_11), VAR_3);
 if (!VAR_11) {
  VAR_12 = -VAR_2;
  goto fail;
 }

 VAR_10 = &VAR_11->base;

 VAR_11->pipe = VAR_8;
 VAR_11->name = VAR_6[VAR_8];
 VAR_11->caps = FUNC_6(VAR_8);

 VAR_11->nformats = FUNC_9(VAR_11->formats,
   FUNC_0(VAR_11->formats),
   !FUNC_10(VAR_11->caps));

 VAR_13 = VAR_9 ? VAR_1 : VAR_0;
 VAR_12 = FUNC_4(VAR_7, VAR_10, 0xff, &VAR_4,
     VAR_11->formats, VAR_11->nformats,
     ((void*)0), VAR_13, ((void*)0));
 if (VAR_12)
  goto fail;

 FUNC_3(VAR_10, &VAR_5);

 FUNC_8(VAR_10, &VAR_10->base);

 FUNC_2(VAR_10);

 return VAR_10;

fail:
 if (VAR_10)
  FUNC_7(VAR_10);

 return FUNC_1(VAR_12);
}
