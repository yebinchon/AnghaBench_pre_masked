
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_7__ {int num_ranges; TYPE_1__* ranges; } ;
typedef TYPE_2__ quicly_ranges_t ;
struct TYPE_6__ {scalar_t__ end; scalar_t__ start; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,scalar_t__,size_t) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,scalar_t__,size_t,size_t) ;

int FUNC_3(quicly_ranges_t *VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{
    size_t VAR_3, VAR_4;

    FUNC_0(VAR_1 <= VAR_2);

    if (VAR_1 == VAR_2)
        return 0;

    if (VAR_0->num_ranges == 0) {
        return FUNC_1(VAR_0, VAR_1, VAR_2, 0);
    } else if (VAR_0->ranges[VAR_0->num_ranges - 1].end < VAR_1) {
        return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_0->num_ranges);
    }


    for (VAR_3 = VAR_0->num_ranges - 1;; --VAR_3) {
        if (VAR_0->ranges[VAR_3].start <= VAR_2)
            break;
        if (VAR_3 == 0)
            return FUNC_1(VAR_0, VAR_1, VAR_2, 0);
    }
    VAR_4 = VAR_3;


    do {
        if (VAR_0->ranges[VAR_3].end == VAR_1) {
            return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
        } else if (VAR_0->ranges[VAR_3].end < VAR_1) {
            if (VAR_3++ == VAR_4) {
                return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
            } else {
                return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
            }
        }
    } while (VAR_3-- != 0);

    return FUNC_2(VAR_0, VAR_1, VAR_2, 0, VAR_4);
}
