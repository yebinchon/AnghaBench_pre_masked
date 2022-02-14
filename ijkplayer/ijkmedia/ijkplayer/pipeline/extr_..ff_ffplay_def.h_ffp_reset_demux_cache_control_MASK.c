
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* current_high_water_mark_in_ms; int last_high_water_mark_in_ms; int next_high_water_mark_in_ms; void* first_high_water_mark_in_ms; int high_water_mark_in_bytes; int max_buffer_size; int min_frames; } ;
typedef TYPE_1__ FFDemuxCacheControl ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) inline static void FUNC_0(FFDemuxCacheControl *VAR_6)
{
    VAR_6->min_frames = VAR_3;
    VAR_6->max_buffer_size = VAR_5;
    VAR_6->high_water_mark_in_bytes = VAR_1;

    VAR_6->first_high_water_mark_in_ms = VAR_0;
    VAR_6->next_high_water_mark_in_ms = VAR_4;
    VAR_6->last_high_water_mark_in_ms = VAR_2;
    VAR_6->current_high_water_mark_in_ms = VAR_0;
}
