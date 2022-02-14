
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct range_set {size_t nr; TYPE_1__* ranges; } ;
struct TYPE_2__ {long start; long end; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct range_set*,int) ;

void FUNC_2(struct range_set *VAR_0, long VAR_1, long VAR_2)
{
 FUNC_0(VAR_1 <= VAR_2);
 FUNC_1(VAR_0, 1);
 VAR_0->ranges[VAR_0->nr].start = VAR_1;
 VAR_0->ranges[VAR_0->nr].end = VAR_2;
 VAR_0->nr++;
}
