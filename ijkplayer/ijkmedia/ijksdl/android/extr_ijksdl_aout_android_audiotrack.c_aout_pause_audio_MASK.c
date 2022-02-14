
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* opaque; } ;
struct TYPE_4__ {int pause_on; int wakeup_mutex; int wakeup_cond; } ;
typedef TYPE_1__ SDL_Aout_Opaque ;
typedef TYPE_2__ SDL_Aout ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(SDL_Aout *VAR_0, int VAR_1)
{
    SDL_Aout_Opaque *VAR_2 = VAR_0->opaque;

    FUNC_2(VAR_2->wakeup_mutex);
    FUNC_0("aout_pause_audio(%d)", VAR_1);
    VAR_2->pause_on = VAR_1;
    if (!VAR_1)
        FUNC_1(VAR_2->wakeup_cond);
    FUNC_3(VAR_2->wakeup_mutex);
}
