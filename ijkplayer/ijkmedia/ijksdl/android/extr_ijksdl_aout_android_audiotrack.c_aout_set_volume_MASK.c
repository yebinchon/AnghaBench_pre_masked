
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* opaque; } ;
struct TYPE_4__ {float left_volume; float right_volume; int need_set_volume; int wakeup_mutex; int wakeup_cond; } ;
typedef TYPE_1__ SDL_Aout_Opaque ;
typedef TYPE_2__ SDL_Aout ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(SDL_Aout *VAR_0, float VAR_1, float VAR_2)
{
    SDL_Aout_Opaque *VAR_3 = VAR_0->opaque;
    FUNC_2(VAR_3->wakeup_mutex);
    FUNC_0("aout_flush_audio()");
    VAR_3->left_volume = VAR_1;
    VAR_3->right_volume = VAR_2;
    VAR_3->need_set_volume = 1;
    FUNC_1(VAR_3->wakeup_cond);
    FUNC_3(VAR_3->wakeup_mutex);
}
