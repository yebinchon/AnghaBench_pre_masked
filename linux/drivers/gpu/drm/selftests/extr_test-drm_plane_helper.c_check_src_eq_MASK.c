
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ x1; scalar_t__ y1; } ;
struct drm_plane_state {TYPE_1__ src; } ;


 int FUNC_0 (char*,TYPE_1__*,int) ;
 unsigned int FUNC_1 (TYPE_1__*) ;
 unsigned int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,scalar_t__) ;

__attribute__((used)) static bool FUNC_4(struct drm_plane_state *VAR_0,
    unsigned VAR_1, unsigned VAR_2,
    unsigned VAR_3, unsigned VAR_4)
{
 if (VAR_0->src.x1 < 0) {
  FUNC_3("src x coordinate %x should never be below 0.\n", VAR_0->src.x1);
  FUNC_0("src: ", &VAR_0->src, 1);
  return 0;
 }
 if (VAR_0->src.y1 < 0) {
  FUNC_3("src y coordinate %x should never be below 0.\n", VAR_0->src.y1);
  FUNC_0("src: ", &VAR_0->src, 1);
  return 0;
 }

 if (VAR_0->src.x1 != VAR_1 ||
     VAR_0->src.y1 != VAR_2 ||
     FUNC_2(&VAR_0->src) != VAR_3 ||
     FUNC_1(&VAR_0->src) != VAR_4) {
  FUNC_0("src: ", &VAR_0->src, 1);
  return 0;
 }

 return 1;
}
