
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t num_ranges; int capacity; int * ranges; } ;
typedef TYPE_1__ quicly_ranges_t ;
typedef int quicly_range_t ;


 int FUNC_0 (int *,int *,size_t) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int *,size_t) ;

void FUNC_3(quicly_ranges_t *VAR_0, size_t VAR_1, size_t VAR_2)
{
    FUNC_1(VAR_1 < VAR_2);

    FUNC_0(VAR_0->ranges + VAR_1, VAR_0->ranges + VAR_2, VAR_0->num_ranges - VAR_2);
    VAR_0->num_ranges -= VAR_2 - VAR_1;
    if (VAR_0->capacity > 4 && VAR_0->num_ranges * 3 <= VAR_0->capacity) {
        size_t VAR_3 = VAR_0->capacity / 2;
        quicly_range_t *VAR_4 = FUNC_2(VAR_0->ranges, VAR_3 * sizeof(*VAR_4));
        if (VAR_4 != ((void*)0)) {
            VAR_0->ranges = VAR_4;
            VAR_0->capacity = VAR_3;
        }
    }
}
