
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_domain {int vmd_inactive_target; TYPE_1__* vmd_pagequeues; } ;
struct TYPE_2__ {int pq_cnt; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vm_domain*) ;

__attribute__((used)) static int
FUNC_1(struct vm_domain *VAR_3)
{
 int VAR_4;

 VAR_4 = VAR_3->vmd_inactive_target + FUNC_0(VAR_3) -
     (VAR_3->vmd_pagequeues[VAR_0].pq_cnt +
     VAR_3->vmd_pagequeues[VAR_1].pq_cnt / VAR_2);
 VAR_4 *= VAR_2;
 return (VAR_4);
}
