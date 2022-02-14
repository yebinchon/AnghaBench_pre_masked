
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * decoder_queue; int sarea_priv; } ;
typedef TYPE_1__ drm_via_private_t ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int volatile) ;
 int volatile VAR_1 ;
 scalar_t__ FUNC_2 (int volatile) ;
 int FUNC_3 (int *) ;

void FUNC_4(drm_via_private_t *VAR_2, int VAR_3)
{
 unsigned int VAR_4;
 volatile int *VAR_5;

 if (!VAR_2->sarea_priv)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  VAR_5 = (volatile int *)FUNC_0(VAR_2->sarea_priv, VAR_4);
  if ((FUNC_1(*VAR_5) == VAR_3)) {
   if (FUNC_2(*VAR_5)
       && (*VAR_5 & VAR_1)) {
    FUNC_3(&(VAR_2->decoder_queue[VAR_4]));
   }
   *VAR_5 = 0;
  }
 }
}
