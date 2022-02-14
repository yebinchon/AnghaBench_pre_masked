
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* opaque; } ;
struct TYPE_4__ {int audio_session_id; } ;
typedef TYPE_1__ SDL_Aout_Opaque ;
typedef TYPE_2__ SDL_Aout ;



__attribute__((used)) static int FUNC_0(SDL_Aout *VAR_0)
{
    SDL_Aout_Opaque *VAR_1 = VAR_0->opaque;

    return VAR_1->audio_session_id;
}
