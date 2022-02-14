
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_3__* vm_object_t ;
struct domainset {int ds_mask; } ;
struct TYPE_7__ {struct domainset* dr_policy; } ;
struct TYPE_9__ {TYPE_2__ td_domain; } ;
struct TYPE_6__ {struct domainset* dr_policy; } ;
struct TYPE_8__ {TYPE_1__ domain; } ;


 TYPE_5__* VAR_0 ;
 int FUNC_0 (int *) ;

void
FUNC_1(vm_object_t VAR_1)
{
 struct domainset *VAR_2;

 VAR_2 = ((void*)0);





 if (VAR_1 != ((void*)0))
  VAR_2 = VAR_1->domain.dr_policy;
 if (VAR_2 == ((void*)0))
  VAR_2 = VAR_0->td_domain.dr_policy;

 FUNC_0(&VAR_2->ds_mask);
}
