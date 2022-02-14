
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* opaque; } ;
struct TYPE_6__ {int wakeup_mutex; int wakeup_cond; scalar_t__ buffer_size; int * buffer; } ;
typedef TYPE_1__ SDL_Aout_Opaque ;
typedef TYPE_2__ SDL_Aout ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(SDL_Aout *VAR_0)
{
    if (!VAR_0)
        return;

    FUNC_3(VAR_0);

    SDL_Aout_Opaque *VAR_1 = VAR_0->opaque;
    if (VAR_1) {
        FUNC_4(VAR_1->buffer);
        VAR_1->buffer = ((void*)0);
        VAR_1->buffer_size = 0;

        FUNC_1(VAR_1->wakeup_cond);
        FUNC_2(VAR_1->wakeup_mutex);
    }

    FUNC_0(VAR_0);
}
