
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct action_devres {scalar_t__ action; scalar_t__ data; } ;



__attribute__((used)) static int FUNC_0(struct device *VAR_0, void *VAR_1, void *VAR_2)
{
 struct action_devres *VAR_3 = VAR_1;
 struct action_devres *VAR_4 = VAR_2;

 return VAR_3->action == VAR_4->action &&
        VAR_3->data == VAR_4->data;
}
