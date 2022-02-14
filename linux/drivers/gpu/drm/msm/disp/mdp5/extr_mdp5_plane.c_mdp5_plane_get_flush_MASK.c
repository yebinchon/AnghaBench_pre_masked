
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct mdp5_plane_state {TYPE_2__* r_hwpipe; TYPE_1__* hwpipe; } ;
struct drm_plane {int state; } ;
struct TYPE_4__ {int flush_mask; } ;
struct TYPE_3__ {int flush_mask; } ;


 scalar_t__ FUNC_0 (int) ;
 struct mdp5_plane_state* FUNC_1 (int ) ;

uint32_t FUNC_2(struct drm_plane *VAR_0)
{
 struct mdp5_plane_state *VAR_1 = FUNC_1(VAR_0->state);
 u32 VAR_2;

 if (FUNC_0(!VAR_1->hwpipe))
  return 0;

 VAR_2 = VAR_1->hwpipe->flush_mask;

 if (VAR_1->r_hwpipe)
  VAR_2 |= VAR_1->r_hwpipe->flush_mask;

 return VAR_2;
}
