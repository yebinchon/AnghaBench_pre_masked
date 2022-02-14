
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct range_set {unsigned int nr; TYPE_2__* ranges; } ;
struct TYPE_6__ {scalar_t__ nr; TYPE_1__* ranges; } ;
struct diff_ranges {TYPE_3__ target; TYPE_3__ parent; } ;
struct TYPE_5__ {scalar_t__ end; } ;
struct TYPE_4__ {scalar_t__ start; int end; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(struct diff_ranges *VAR_0,
           struct diff_ranges *VAR_1,
           struct range_set *VAR_2)
{
 unsigned int VAR_3, VAR_4 = 0;

 FUNC_0(VAR_0->target.nr == 0);

 for (VAR_3 = 0; VAR_3 < VAR_1->target.nr; VAR_3++) {
  while (VAR_1->target.ranges[VAR_3].start > VAR_2->ranges[VAR_4].end) {
   VAR_4++;
   if (VAR_4 == VAR_2->nr)
    return;
  }
  if (FUNC_2(&VAR_1->target.ranges[VAR_3], &VAR_2->ranges[VAR_4])) {
   FUNC_1(&VAR_0->parent,
      VAR_1->parent.ranges[VAR_3].start,
      VAR_1->parent.ranges[VAR_3].end);
   FUNC_1(&VAR_0->target,
      VAR_1->target.ranges[VAR_3].start,
      VAR_1->target.ranges[VAR_3].end);
  }
 }
}
