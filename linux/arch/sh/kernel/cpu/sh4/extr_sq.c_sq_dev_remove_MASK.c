
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subsys_interface {int dummy; } ;
struct kobject {int dummy; } ;
struct device {unsigned int id; } ;


 int FUNC_0 (struct kobject*) ;
 struct kobject** VAR_0 ;

__attribute__((used)) static void FUNC_1(struct device *VAR_1, struct subsys_interface *VAR_2)
{
 unsigned int VAR_3 = VAR_1->id;
 struct kobject *VAR_4 = VAR_0[VAR_3];

 FUNC_0(VAR_4);
}
