
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rmi_function_handler {scalar_t__ func; } ;
struct TYPE_2__ {scalar_t__ function_number; } ;
struct rmi_function {TYPE_1__ fd; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 struct rmi_function* FUNC_0 (struct device*) ;
 struct rmi_function_handler* FUNC_1 (struct device_driver*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct rmi_function_handler *VAR_2 = FUNC_1(VAR_1);
 struct rmi_function *VAR_3 = FUNC_0(VAR_0);

 return VAR_3->fd.function_number == VAR_2->func;
}
