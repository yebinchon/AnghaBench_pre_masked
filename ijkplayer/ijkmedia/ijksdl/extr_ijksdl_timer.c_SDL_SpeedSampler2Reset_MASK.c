
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_4__ {int sample_range; scalar_t__ last_profile_tick; } ;
typedef TYPE_1__ SDL_SpeedSampler2 ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2(SDL_SpeedSampler2 *VAR_0, int VAR_1)
{
    FUNC_1(VAR_0, 0, sizeof(SDL_SpeedSampler2));
    VAR_0->sample_range = VAR_1;
    VAR_0->last_profile_tick = (int64_t)FUNC_0();
}
