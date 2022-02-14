
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int x1; int y1; } ;
struct drm_plane_state {TYPE_1__ dst; } ;


 int FUNC_0 (char*,TYPE_1__*,int) ;
 unsigned int FUNC_1 (TYPE_1__*) ;
 unsigned int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_3(struct drm_plane_state *VAR_0,
     int VAR_1, int VAR_2,
     unsigned VAR_3, unsigned VAR_4)
{
 if (VAR_0->dst.x1 != VAR_1 ||
     VAR_0->dst.y1 != VAR_2 ||
     FUNC_2(&VAR_0->dst) != VAR_3 ||
     FUNC_1(&VAR_0->dst) != VAR_4) {
  FUNC_0("dst: ", &VAR_0->dst, 0);

  return 0;
 }

 return 1;
}
