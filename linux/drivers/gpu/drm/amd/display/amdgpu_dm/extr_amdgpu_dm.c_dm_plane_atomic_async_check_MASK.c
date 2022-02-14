
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {int dummy; } ;
struct drm_plane {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct drm_plane *VAR_2,
           struct drm_plane_state *VAR_3)
{

 if (VAR_2->type != VAR_0)
  return -VAR_1;

 return 0;
}
