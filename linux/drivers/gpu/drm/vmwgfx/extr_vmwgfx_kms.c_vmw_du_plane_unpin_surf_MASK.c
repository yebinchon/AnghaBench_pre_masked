
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_plane_state {TYPE_1__* surf; scalar_t__ pinned; } ;
struct TYPE_2__ {int res; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__**) ;

void FUNC_3(struct vmw_plane_state *VAR_0,
        bool VAR_1)
{
 if (VAR_0->surf) {
  if (VAR_0->pinned) {
   FUNC_1(&VAR_0->surf->res);
   VAR_0->pinned--;
  }

  if (VAR_1) {
   if (VAR_0->pinned)
    FUNC_0("Surface still pinned\n");
   FUNC_2(&VAR_0->surf);
  }
 }
}
