
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdp5_plane_state {TYPE_1__* hwpipe; } ;
struct drm_plane {int state; } ;
typedef enum mdp5_pipe { ____Placeholder_mdp5_pipe } mdp5_pipe ;
struct TYPE_2__ {int pipe; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct mdp5_plane_state* FUNC_1 (int ) ;

enum mdp5_pipe FUNC_2(struct drm_plane *VAR_1)
{
 struct mdp5_plane_state *VAR_2 = FUNC_1(VAR_1->state);

 if (FUNC_0(!VAR_2->hwpipe))
  return VAR_0;

 return VAR_2->hwpipe->pipe;
}
