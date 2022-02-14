
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_3__ {scalar_t__ max_sample; int total_counter; int sample_elapsed; int sample_counter; int average_elapsed; float sample_per_seconds; int total_elapsed; scalar_t__ begin_time; } ;
typedef TYPE_1__ SDL_Profiler ;


 scalar_t__ FUNC_0 () ;

int64_t FUNC_1(SDL_Profiler* VAR_0)
{
    int64_t VAR_1 = FUNC_0() - VAR_0->begin_time;

    if (VAR_0->max_sample > 0) {
        VAR_0->total_elapsed += VAR_1;
        VAR_0->total_counter += 1;

        VAR_0->sample_elapsed += VAR_1;
        VAR_0->sample_counter += 1;

        if (VAR_0->sample_counter > VAR_0->max_sample) {
            VAR_0->sample_elapsed -= VAR_0->average_elapsed;
            VAR_0->sample_counter -= 1;
        }

        if (VAR_0->sample_counter > 0) {
            VAR_0->average_elapsed = VAR_0->sample_elapsed / VAR_0->sample_counter;
        }
        if (VAR_0->sample_elapsed > 0) {
            VAR_0->sample_per_seconds = VAR_0->sample_counter * 1000.f / VAR_0->sample_elapsed;
        }
    }

    return VAR_1;
}
