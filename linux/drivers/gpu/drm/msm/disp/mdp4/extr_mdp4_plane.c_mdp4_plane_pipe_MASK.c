
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp4_plane {int pipe; } ;
struct drm_plane {int dummy; } ;
typedef enum mdp4_pipe { ____Placeholder_mdp4_pipe } mdp4_pipe ;


 struct mdp4_plane* FUNC_0 (struct drm_plane*) ;

enum mdp4_pipe FUNC_1(struct drm_plane *VAR_0)
{
 struct mdp4_plane *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->pipe;
}
