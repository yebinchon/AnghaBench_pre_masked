
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmi_function_handler {int (* remove ) (struct rmi_function*) ;} ;
struct rmi_function {int dummy; } ;
struct device {int driver; } ;


 int FUNC_0 (struct rmi_function*) ;
 struct rmi_function* FUNC_1 (struct device*) ;
 struct rmi_function_handler* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct rmi_function *VAR_1 = FUNC_1(VAR_0);
 struct rmi_function_handler *VAR_2 =
     FUNC_2(VAR_0->driver);

 if (VAR_2->remove)
  VAR_2->remove(VAR_1);

 return 0;
}
