
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_3__ {scalar_t__ sample_range; scalar_t__ last_profile_tick; scalar_t__ last_profile_quantity; scalar_t__ last_profile_duration; } ;
typedef TYPE_1__ SDL_SpeedSampler2 ;


 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;

int64_t FUNC_2(SDL_SpeedSampler2 *VAR_0)
{
    int64_t VAR_1 = VAR_0->sample_range;
    int64_t VAR_2 = VAR_0->last_profile_tick;
    int64_t VAR_3 = VAR_0->last_profile_quantity;
    int64_t VAR_4 = VAR_0->last_profile_duration;
    int64_t VAR_5 = (int64_t)FUNC_0();
    int64_t VAR_6 = (int64_t)FUNC_1(VAR_5 - VAR_2);
    if (VAR_6 < 0 || VAR_6 >= VAR_1)
        return 0;

    int64_t VAR_7 = VAR_3;
    int64_t VAR_8 = VAR_4 + VAR_6;
    if (VAR_8 > VAR_1) {
        VAR_7 = VAR_7 * VAR_1 / VAR_8;
        VAR_8 = VAR_1;
    }

    if (VAR_8 <= 0)
        return 0;

    return VAR_7 * 1000 / VAR_8;
}
