
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct action_devres {int data; int (* action ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_0, void *VAR_1)
{
 struct action_devres *VAR_2 = VAR_1;

 VAR_2->action(VAR_2->data);
}
