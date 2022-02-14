
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* opaque; } ;
struct TYPE_4__ {int abort_request; int * audio_tid; int wakeup_mutex; int wakeup_cond; } ;
typedef TYPE_1__ SDL_Aout_Opaque ;
typedef TYPE_2__ SDL_Aout ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(SDL_Aout *VAR_0)
{
    SDL_Aout_Opaque *VAR_1 = VAR_0->opaque;

    FUNC_1(VAR_1->wakeup_mutex);
    VAR_1->abort_request = 1;
    FUNC_0(VAR_1->wakeup_cond);
    FUNC_2(VAR_1->wakeup_mutex);

    FUNC_3(VAR_1->audio_tid, ((void*)0));

    VAR_1->audio_tid = ((void*)0);
}
