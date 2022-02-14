
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmspace {scalar_t__ vm_refcnt; } ;
struct TYPE_2__ {struct vmspace* p_vmspace; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (scalar_t__*,int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vmspace*) ;

void
FUNC_4(struct vmspace *VAR_2)
{
 struct vmspace *VAR_3;



 FUNC_0(VAR_2->vm_refcnt > 0,
     ("vmspace_switch_aio: newvm unreferenced"));

 VAR_3 = VAR_0->p_vmspace;
 if (VAR_3 == VAR_2)
  return;




 VAR_0->p_vmspace = VAR_2;
 FUNC_1(&VAR_2->vm_refcnt, 1);


 FUNC_2(VAR_1);

 FUNC_3(VAR_3);
}
