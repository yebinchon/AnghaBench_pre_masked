
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int kobj; } ;
struct TYPE_3__ {int kobj; } ;


 int FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *,int *,char*) ;
 int FUNC_3 (char*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

void FUNC_4(void)
{
 int VAR_3 = 0;

 VAR_1.kobj = FUNC_0(VAR_1.kobj);
 if (!VAR_1.kobj)
  return;

 VAR_3 = FUNC_2(VAR_1.kobj, &VAR_2,
       &VAR_0->kobj, "proc");
 if (VAR_3) {
  FUNC_3("Could not create procfs proc folder");

  FUNC_1();
 }
}
