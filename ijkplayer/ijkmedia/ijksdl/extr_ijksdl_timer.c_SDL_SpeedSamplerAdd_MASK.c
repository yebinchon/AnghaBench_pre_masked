
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef float Uint64 ;
struct TYPE_3__ {float* samples; size_t next_index; int capacity; int count; int first_index; float last_log_time; } ;
typedef TYPE_1__ SDL_SpeedSampler ;


 int FUNC_0 (char*,char const*,float) ;
 float FUNC_1 () ;

float FUNC_2(SDL_SpeedSampler *VAR_0, int VAR_1, const char *VAR_2)
{
    Uint64 VAR_3 = FUNC_1();
    VAR_0->samples[VAR_0->next_index] = VAR_3;
    VAR_0->next_index++;
    VAR_0->next_index %= VAR_0->capacity;
    if (VAR_0->count + 1 >= VAR_0->capacity) {
        VAR_0->first_index++;
        VAR_0->first_index %= VAR_0->capacity;
    } else {
        VAR_0->count++;
    }

    if (VAR_0->count < 2)
        return 0;

    float VAR_4 = 1000.0f * (VAR_0->count - 1) / (VAR_3 - VAR_0->samples[VAR_0->first_index]);

    if (VAR_1 && (VAR_0->last_log_time + 1000 < VAR_3 || VAR_0->last_log_time > VAR_3)) {
        VAR_0->last_log_time = VAR_3;
        FUNC_0("%s: %.2f\n", VAR_2 ? VAR_2 : "N/A", VAR_4);
    }

    return VAR_4;
}
