
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long long first; unsigned long long step; unsigned long long next; } ;
struct TYPE_4__ {TYPE_1__ dtlb; } ;


 unsigned long long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long long) ;
 TYPE_2__* VAR_2 ;

int FUNC_1(unsigned long long VAR_3)
{
 FUNC_0(VAR_3);
 if (VAR_3 <= VAR_0)
  return -VAR_1;





 if (VAR_3 < (VAR_2->dtlb.first - VAR_2->dtlb.step))
  return -VAR_1;


 VAR_2->dtlb.first -= VAR_2->dtlb.step;
 VAR_2->dtlb.next = VAR_3;

 return 0;
}
