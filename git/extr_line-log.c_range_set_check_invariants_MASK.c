
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct range_set {int nr; TYPE_1__* ranges; } ;
struct TYPE_2__ {scalar_t__ start; scalar_t__ end; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct range_set *VAR_0)
{
 unsigned int VAR_1;

 if (!VAR_0)
  return;

 if (VAR_0->nr)
  FUNC_0(VAR_0->ranges[0].start < VAR_0->ranges[0].end);

 for (VAR_1 = 1; VAR_1 < VAR_0->nr; VAR_1++) {
  FUNC_0(VAR_0->ranges[VAR_1-1].end < VAR_0->ranges[VAR_1].start);
  FUNC_0(VAR_0->ranges[VAR_1].start < VAR_0->ranges[VAR_1].end);
 }
}
