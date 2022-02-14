
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_5__ {int num_ranges; TYPE_1__* ranges; } ;
typedef TYPE_2__ quicly_ranges_t ;
struct TYPE_4__ {int end; int start; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int *,int) ;

uint8_t *FUNC_3(uint8_t *VAR_1, uint8_t *VAR_2, quicly_ranges_t *VAR_3, uint64_t VAR_4)
{
    size_t VAR_5 = VAR_3->num_ranges - 1;

    FUNC_1(VAR_3->num_ranges != 0);

    *VAR_1++ = VAR_0;
    VAR_1 = FUNC_2(VAR_1, VAR_3->ranges[VAR_5].end - 1);
    VAR_1 = FUNC_2(VAR_1, VAR_4);
    VAR_1 = FUNC_2(VAR_1, VAR_3->num_ranges - 1);

    while (1) {
        do { uint64_t VAR_6 = (VAR_3->ranges[VAR_5].start), VAR_7 = (VAR_3->ranges[VAR_5].end); FUNC_1(VAR_6 < VAR_7); if (VAR_2 - VAR_1 < 8) return ((void*)0); VAR_1 = FUNC_2(VAR_1, VAR_7 - VAR_6 - 1); } while (0);
        if (VAR_5-- == 0)
            break;
        do { uint64_t VAR_8 = (VAR_3->ranges[VAR_5].end), VAR_9 = (VAR_3->ranges[VAR_5 + 1].start); FUNC_1(VAR_8 < VAR_9); if (VAR_2 - VAR_1 < 8) return ((void*)0); VAR_1 = FUNC_2(VAR_1, VAR_9 - VAR_8 - 1); } while (0);
    }

    return VAR_1;


}
