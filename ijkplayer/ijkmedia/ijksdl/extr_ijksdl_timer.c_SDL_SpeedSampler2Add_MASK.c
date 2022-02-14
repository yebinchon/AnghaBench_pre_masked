
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_3__ {scalar_t__ sample_range; scalar_t__ last_profile_tick; scalar_t__ last_profile_duration; scalar_t__ last_profile_quantity; int last_profile_speed; } ;
typedef TYPE_1__ SDL_SpeedSampler2 ;


 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;

int64_t FUNC_2(SDL_SpeedSampler2 *VAR_0, int VAR_1)
{
    if (VAR_1 < 0)
        return 0;

    int64_t VAR_2 = VAR_0->sample_range;
    int64_t VAR_3 = VAR_0->last_profile_tick;
    int64_t VAR_4 = VAR_0->last_profile_duration;
    int64_t VAR_5 = VAR_0->last_profile_quantity;
    int64_t VAR_6 = (int64_t)FUNC_0();
    int64_t VAR_7 = (int64_t)FUNC_1(VAR_6 - VAR_3);
    if (VAR_7 < 0 || VAR_7 >= VAR_2) {

        VAR_0->last_profile_tick = VAR_6;
        VAR_0->last_profile_duration = VAR_2;
        VAR_0->last_profile_quantity = VAR_1;
        VAR_0->last_profile_speed = VAR_1 * 1000 / VAR_2;
        return VAR_0->last_profile_speed;
    }

    int64_t VAR_8 = VAR_5 + VAR_1;
    int64_t VAR_9 = VAR_4 + VAR_7;
    if (VAR_9 > VAR_2) {
        VAR_8 = VAR_8 * VAR_2 / VAR_9;
        VAR_9 = VAR_2;
    }

    VAR_0->last_profile_tick = VAR_6;
    VAR_0->last_profile_duration = VAR_9;
    VAR_0->last_profile_quantity = VAR_8;
    if (VAR_9 > 0)
        VAR_0->last_profile_speed = VAR_8 * 1000 / VAR_9;
    return VAR_0->last_profile_speed;
}
