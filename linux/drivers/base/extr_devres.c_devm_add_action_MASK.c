
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct action_devres {void (* action ) (void*) ;void* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,struct action_devres*) ;
 struct action_devres* FUNC_1 (int ,int,int ) ;

int FUNC_2(struct device *VAR_3, void (*VAR_4)(void *), void *VAR_5)
{
 struct action_devres *VAR_6;

 VAR_6 = FUNC_1(VAR_2,
         sizeof(struct action_devres), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->data = VAR_5;
 VAR_6->action = VAR_4;

 FUNC_0(VAR_3, VAR_6);
 return 0;
}
