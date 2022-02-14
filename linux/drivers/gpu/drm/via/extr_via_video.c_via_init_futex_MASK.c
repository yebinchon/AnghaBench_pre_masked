
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sarea_priv; int * decoder_queue; } ;
typedef TYPE_1__ drm_via_private_t ;
struct TYPE_5__ {scalar_t__ lock; } ;


 int FUNC_0 (char*) ;
 unsigned int VAR_0 ;
 TYPE_3__* FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int *) ;

void FUNC_3(drm_via_private_t *VAR_1)
{
 unsigned int VAR_2;

 FUNC_0("\n");

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
  FUNC_2(&(VAR_1->decoder_queue[VAR_2]));
  FUNC_1(VAR_1->sarea_priv, VAR_2)->lock = 0;
 }
}
