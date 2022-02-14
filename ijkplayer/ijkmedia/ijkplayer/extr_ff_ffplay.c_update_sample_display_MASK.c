
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sample_array_index; scalar_t__ sample_array; } ;
typedef TYPE_1__ VideoState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,short*,int) ;

__attribute__((used)) static void FUNC_1(VideoState *VAR_1, short *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;

    VAR_4 = VAR_3 / sizeof(short);
    while (VAR_4 > 0) {
        VAR_5 = VAR_0 - VAR_1->sample_array_index;
        if (VAR_5 > VAR_4)
            VAR_5 = VAR_4;
        FUNC_0(VAR_1->sample_array + VAR_1->sample_array_index, VAR_2, VAR_5 * sizeof(short));
        VAR_2 += VAR_5;
        VAR_1->sample_array_index += VAR_5;
        if (VAR_1->sample_array_index >= VAR_0)
            VAR_1->sample_array_index = 0;
        VAR_4 -= VAR_5;
    }
}
