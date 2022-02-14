
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct device {TYPE_1__* class; } ;
typedef int kuid_t ;
typedef int kgid_t ;
struct TYPE_2__ {int (* get_ownership ) (struct device*,int *,int *) ;} ;


 struct device* FUNC_0 (struct kobject*) ;
 int FUNC_1 (struct device*,int *,int *) ;

__attribute__((used)) static void FUNC_2(struct kobject *VAR_0, kuid_t *VAR_1, kgid_t *VAR_2)
{
 struct device *VAR_3 = FUNC_0(VAR_0);

 if (VAR_3->class && VAR_3->class->get_ownership)
  VAR_3->class->get_ownership(VAR_3, VAR_1, VAR_2);
}
