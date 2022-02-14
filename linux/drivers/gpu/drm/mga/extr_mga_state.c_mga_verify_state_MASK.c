
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int dirty; scalar_t__ nbox; scalar_t__ warp_pipe; } ;
typedef TYPE_1__ drm_mga_sarea_t ;
struct TYPE_7__ {scalar_t__ chipset; TYPE_1__* sarea_priv; } ;
typedef TYPE_2__ drm_mga_private_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_2(drm_mga_private_t *VAR_8)
{
 drm_mga_sarea_t *VAR_9 = VAR_8->sarea_priv;
 unsigned int VAR_10 = VAR_9->dirty;
 int VAR_11 = 0;

 if (VAR_9->nbox > VAR_3)
  VAR_9->nbox = VAR_3;

 if (VAR_10 & VAR_4)
  VAR_11 |= FUNC_0(VAR_8);

 if (VAR_10 & VAR_6)
  VAR_11 |= FUNC_1(VAR_8, 0);

 if (VAR_8->chipset >= VAR_0) {
  if (VAR_10 & VAR_7)
   VAR_11 |= FUNC_1(VAR_8, 1);

  if (VAR_10 & VAR_5)
   VAR_11 |= (VAR_9->warp_pipe > VAR_2);
 } else {
  if (VAR_10 & VAR_5)
   VAR_11 |= (VAR_9->warp_pipe > VAR_1);
 }

 return (VAR_11 == 0);
}
