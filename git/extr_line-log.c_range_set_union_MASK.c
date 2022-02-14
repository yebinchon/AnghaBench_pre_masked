
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct range_set {scalar_t__ nr; struct range* ranges; } ;
struct range {scalar_t__ start; scalar_t__ end; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct range_set*,int) ;

__attribute__((used)) static void FUNC_2(struct range_set *VAR_0,
        struct range_set *VAR_1, struct range_set *VAR_2)
{
 unsigned int VAR_3 = 0, VAR_4 = 0;
 struct range *VAR_5 = VAR_1->ranges;
 struct range *VAR_6 = VAR_2->ranges;


 FUNC_0(VAR_0->nr == 0);
 while (VAR_3 < VAR_1->nr || VAR_4 < VAR_2->nr) {
  struct range *VAR_7;
  if (VAR_3 < VAR_1->nr && VAR_4 < VAR_2->nr) {
   if (VAR_5[VAR_3].start < VAR_6[VAR_4].start)
    VAR_7 = &VAR_5[VAR_3++];
   else if (VAR_5[VAR_3].start > VAR_6[VAR_4].start)
    VAR_7 = &VAR_6[VAR_4++];
   else if (VAR_5[VAR_3].end < VAR_6[VAR_4].end)
    VAR_7 = &VAR_5[VAR_3++];
   else
    VAR_7 = &VAR_6[VAR_4++];
  } else if (VAR_3 < VAR_1->nr)
   VAR_7 = &VAR_5[VAR_3++];
  else
   VAR_7 = &VAR_6[VAR_4++];
  if (VAR_7->start == VAR_7->end)
   ;
  else if (!VAR_0->nr || VAR_0->ranges[VAR_0->nr-1].end < VAR_7->start) {
   FUNC_1(VAR_0, 1);
   VAR_0->ranges[VAR_0->nr].start = VAR_7->start;
   VAR_0->ranges[VAR_0->nr].end = VAR_7->end;
   VAR_0->nr++;
  } else if (VAR_0->ranges[VAR_0->nr-1].end < VAR_7->end) {
   VAR_0->ranges[VAR_0->nr-1].end = VAR_7->end;
  }
 }
}
