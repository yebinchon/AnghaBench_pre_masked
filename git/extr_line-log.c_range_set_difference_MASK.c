
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct range_set {unsigned int nr; TYPE_1__* ranges; } ;
struct TYPE_2__ {long start; long end; } ;


 int FUNC_0 (struct range_set*,long,long) ;

__attribute__((used)) static void FUNC_1(struct range_set *VAR_0,
      struct range_set *VAR_1, struct range_set *VAR_2)
{
 unsigned int VAR_3, VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_1->nr; VAR_3++) {
  long VAR_5 = VAR_1->ranges[VAR_3].start;
  long VAR_6 = VAR_1->ranges[VAR_3].end;
  while (VAR_5 < VAR_6) {
   while (VAR_4 < VAR_2->nr && VAR_5 >= VAR_2->ranges[VAR_4].end)




    VAR_4++;
   if (VAR_4 >= VAR_2->nr || VAR_6 < VAR_2->ranges[VAR_4].start) {





    FUNC_0(VAR_0, VAR_5, VAR_6);
    break;
   }
   if (VAR_5 >= VAR_2->ranges[VAR_4].start) {




    VAR_5 = VAR_2->ranges[VAR_4].end;
   } else if (VAR_6 > VAR_2->ranges[VAR_4].start) {




    if (VAR_5 < VAR_2->ranges[VAR_4].start)
     FUNC_0(VAR_0, VAR_5, VAR_2->ranges[VAR_4].start);
    VAR_5 = VAR_2->ranges[VAR_4].end;
   }
  }
 }
}
