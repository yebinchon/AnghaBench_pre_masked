
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned int dirty; scalar_t__ warp_pipe; } ;
typedef TYPE_1__ drm_mga_sarea_t ;
struct TYPE_8__ {scalar_t__ warp_pipe; TYPE_1__* sarea_priv; } ;
typedef TYPE_2__ drm_mga_private_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(drm_mga_private_t *VAR_2)
{
 drm_mga_sarea_t *VAR_3 = VAR_2->sarea_priv;
 unsigned int VAR_4 = VAR_3->dirty;

 if (VAR_3->warp_pipe != VAR_2->warp_pipe) {
  FUNC_1(VAR_2);
  VAR_2->warp_pipe = VAR_3->warp_pipe;
 }

 if (VAR_4 & VAR_0) {
  FUNC_0(VAR_2);
  VAR_3->dirty &= ~VAR_0;
 }

 if (VAR_4 & VAR_1) {
  FUNC_2(VAR_2);
  VAR_3->dirty &= ~VAR_1;
 }
}
