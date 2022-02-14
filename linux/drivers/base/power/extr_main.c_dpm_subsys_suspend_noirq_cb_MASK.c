
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct device {TYPE_4__* bus; TYPE_3__* class; TYPE_2__* type; TYPE_1__* pm_domain; } ;
typedef int pm_message_t ;
typedef int * pm_callback_t ;
struct TYPE_8__ {int * pm; } ;
struct TYPE_7__ {int * pm; } ;
struct TYPE_6__ {int * pm; } ;
struct TYPE_5__ {int ops; } ;


 int * FUNC_0 (int *,int ) ;

__attribute__((used)) static pm_callback_t FUNC_1(struct device *VAR_0,
       pm_message_t VAR_1,
       const char **VAR_2)
{
 pm_callback_t VAR_3;
 const char *VAR_4;

 if (VAR_0->pm_domain) {
  VAR_4 = "noirq power domain ";
  VAR_3 = FUNC_0(&VAR_0->pm_domain->ops, VAR_1);
 } else if (VAR_0->type && VAR_0->type->pm) {
  VAR_4 = "noirq type ";
  VAR_3 = FUNC_0(VAR_0->type->pm, VAR_1);
 } else if (VAR_0->class && VAR_0->class->pm) {
  VAR_4 = "noirq class ";
  VAR_3 = FUNC_0(VAR_0->class->pm, VAR_1);
 } else if (VAR_0->bus && VAR_0->bus->pm) {
  VAR_4 = "noirq bus ";
  VAR_3 = FUNC_0(VAR_0->bus->pm, VAR_1);
 } else {
  return ((void*)0);
 }

 if (VAR_2)
  *VAR_2 = VAR_4;

 return VAR_3;
}
