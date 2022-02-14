
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct range_set {unsigned int nr; TYPE_1__* ranges; } ;
struct TYPE_2__ {scalar_t__ start; scalar_t__ end; } ;


 int FUNC_0 (TYPE_1__*,unsigned int,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct range_set*) ;

void FUNC_3(struct range_set *VAR_1)
{
 unsigned int VAR_2;
 unsigned int VAR_3 = 0;

 FUNC_0(VAR_1->ranges, VAR_1->nr, VAR_0);

 for (VAR_2 = 0; VAR_2 < VAR_1->nr; VAR_2++) {
  if (VAR_1->ranges[VAR_2].start == VAR_1->ranges[VAR_2].end)
   continue;
  if (VAR_3 > 0 && VAR_1->ranges[VAR_2].start <= VAR_1->ranges[VAR_3-1].end) {
   if (VAR_1->ranges[VAR_3-1].end < VAR_1->ranges[VAR_2].end)
    VAR_1->ranges[VAR_3-1].end = VAR_1->ranges[VAR_2].end;
  } else {
   VAR_1->ranges[VAR_3].start = VAR_1->ranges[VAR_2].start;
   VAR_1->ranges[VAR_3].end = VAR_1->ranges[VAR_2].end;
   VAR_3++;
  }
 }
 FUNC_1(VAR_3 <= VAR_1->nr);
 VAR_1->nr = VAR_3;

 FUNC_2(VAR_1);
}
