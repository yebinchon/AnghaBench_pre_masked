
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subsys_private {struct bus_type* bus; } ;
struct kobject {int dummy; } ;
struct bus_type {int * p; } ;


 int FUNC_0 (struct subsys_private*) ;
 struct subsys_private* FUNC_1 (struct kobject*) ;

__attribute__((used)) static void FUNC_2(struct kobject *VAR_0)
{
 struct subsys_private *VAR_1 = FUNC_1(VAR_0);
 struct bus_type *VAR_2 = VAR_1->bus;

 FUNC_0(VAR_1);
 VAR_2->p = ((void*)0);
}
