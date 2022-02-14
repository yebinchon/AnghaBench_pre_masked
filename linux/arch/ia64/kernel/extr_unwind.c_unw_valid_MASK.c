
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long top; unsigned long limit; } ;
struct TYPE_3__ {unsigned long limit; unsigned long top; } ;
struct unw_frame_info {TYPE_2__ memstk; TYPE_1__ regstk; } ;



__attribute__((used)) static int
FUNC_0(const struct unw_frame_info *VAR_0, unsigned long* VAR_1)
{
 unsigned long VAR_2 = (unsigned long)VAR_1;
 return (VAR_2 >= VAR_0->regstk.limit && VAR_2 < VAR_0->regstk.top) ||
        (VAR_2 >= VAR_0->memstk.top && VAR_2 < VAR_0->memstk.limit);
}
