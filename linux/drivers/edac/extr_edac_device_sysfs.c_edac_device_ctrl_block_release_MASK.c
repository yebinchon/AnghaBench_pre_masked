
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct edac_device_block {TYPE_2__* instance; } ;
struct TYPE_4__ {TYPE_1__* ctl; } ;
struct TYPE_3__ {int kobj; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 struct edac_device_block* FUNC_2 (struct kobject*) ;

__attribute__((used)) static void FUNC_3(struct kobject *VAR_0)
{
 struct edac_device_block *VAR_1;

 FUNC_0(1, "\n");


 VAR_1 = FUNC_2(VAR_0);




 FUNC_1(&VAR_1->instance->ctl->kobj);
}
