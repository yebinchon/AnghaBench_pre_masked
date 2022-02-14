
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ step; int next; int first; } ;
struct TYPE_4__ {TYPE_1__ dtlb; } ;


 TYPE_2__* VAR_0 ;
 unsigned long long FUNC_0 () ;

unsigned long long FUNC_1(void)
{
 unsigned long long VAR_1 = FUNC_0();

 VAR_0->dtlb.first += VAR_0->dtlb.step;
 VAR_0->dtlb.next += VAR_0->dtlb.step;

 return VAR_1;
}
