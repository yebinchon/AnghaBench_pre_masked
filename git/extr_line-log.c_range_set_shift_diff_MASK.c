
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct range_set {unsigned int nr; struct range* ranges; } ;
struct range {scalar_t__ start; scalar_t__ end; } ;
struct TYPE_4__ {unsigned int nr; struct range* ranges; } ;
struct TYPE_3__ {struct range* ranges; } ;
struct diff_ranges {TYPE_2__ target; TYPE_1__ parent; } ;


 int FUNC_0 (struct range_set*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct range_set *VAR_0,
     struct range_set *VAR_1,
     struct diff_ranges *VAR_2)
{
 unsigned int VAR_3, VAR_4 = 0;
 long VAR_5 = 0;
 struct range *VAR_6 = VAR_1->ranges;
 struct range *VAR_7 = VAR_2->target.ranges;
 struct range *VAR_8 = VAR_2->parent.ranges;

 for (VAR_3 = 0; VAR_3 < VAR_1->nr; VAR_3++) {
  while (VAR_4 < VAR_2->target.nr && VAR_6[VAR_3].start >= VAR_7[VAR_4].start) {
   VAR_5 += (VAR_8[VAR_4].end-VAR_8[VAR_4].start)
    - (VAR_7[VAR_4].end-VAR_7[VAR_4].start);
   VAR_4++;
  }
  FUNC_0(VAR_0, VAR_6[VAR_3].start+VAR_5, VAR_6[VAR_3].end+VAR_5);
 }
}
