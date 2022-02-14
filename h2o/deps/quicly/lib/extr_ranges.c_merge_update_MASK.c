
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {TYPE_1__* ranges; } ;
typedef TYPE_2__ quicly_ranges_t ;
struct TYPE_5__ {scalar_t__ start; scalar_t__ end; } ;


 int FUNC_0 (TYPE_2__*,size_t,size_t) ;

__attribute__((used)) static inline int FUNC_1(quicly_ranges_t *VAR_0, uint64_t VAR_1, uint64_t VAR_2, size_t VAR_3, size_t VAR_4)
{
    if (VAR_1 < VAR_0->ranges[VAR_3].start)
        VAR_0->ranges[VAR_3].start = VAR_1;
    VAR_0->ranges[VAR_3].end = VAR_2 < VAR_0->ranges[VAR_4].end ? VAR_0->ranges[VAR_4].end : VAR_2;

    if (VAR_3 != VAR_4)
        FUNC_0(VAR_0, VAR_3 + 1, VAR_4 + 1);

    return 0;
}
