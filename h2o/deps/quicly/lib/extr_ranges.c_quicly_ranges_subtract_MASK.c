
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_7__ {int num_ranges; TYPE_1__* ranges; } ;
typedef TYPE_2__ quicly_ranges_t ;
struct TYPE_6__ {scalar_t__ start; scalar_t__ end; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__,scalar_t__,size_t) ;
 int FUNC_2 (TYPE_2__*,size_t,size_t) ;

int FUNC_3(quicly_ranges_t *VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{
    size_t VAR_3, VAR_4;

    FUNC_0(VAR_1 <= VAR_2);

    if (VAR_1 == VAR_2)
        return 0;

    if (VAR_0->num_ranges == 0) {
        return 0;
    } else if (VAR_2 <= VAR_0->ranges[0].start) {
        return 0;
    } else if (VAR_0->ranges[VAR_0->num_ranges - 1].end <= VAR_1) {
        return 0;
    }


    for (VAR_4 = 0; VAR_0->ranges[VAR_4].end < VAR_1; ++VAR_4)
        ;

    if (VAR_2 <= VAR_0->ranges[VAR_4].end) {

        if (VAR_2 <= VAR_0->ranges[VAR_4].start)
            return 0;
        if (VAR_1 <= VAR_0->ranges[VAR_4].start) {
            VAR_0->ranges[VAR_4].start = VAR_2;
        } else if (VAR_2 == VAR_0->ranges[VAR_4].end) {
            VAR_0->ranges[VAR_4].end = VAR_1;
        } else {

            if (FUNC_1(VAR_0, VAR_2, VAR_0->ranges[VAR_4].end, VAR_4 + 1) != 0)
                return -1;
            VAR_0->ranges[VAR_4].end = VAR_1;
            return 0;
        }

        if (VAR_0->ranges[VAR_4].start == VAR_0->ranges[VAR_4].end)
            FUNC_2(VAR_0, VAR_4, VAR_4 + 1);
        return 0;
    }


    if (VAR_1 <= VAR_0->ranges[VAR_4].start) {
        VAR_3 = VAR_4;
    } else {
        VAR_0->ranges[VAR_4].end = VAR_1;
        VAR_3 = VAR_4 + 1;
    }


    for (++VAR_4; VAR_4 != VAR_0->num_ranges; ++VAR_4) {
        if (VAR_2 <= VAR_0->ranges[VAR_4].start)
            break;
        if (VAR_2 < VAR_0->ranges[VAR_4].end) {
            VAR_0->ranges[VAR_4].start = VAR_2;
            break;
        }
    }


    if (VAR_3 != VAR_4)
        FUNC_2(VAR_0, VAR_3, VAR_4);

    return 0;
}
