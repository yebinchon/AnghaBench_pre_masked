
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct action_devres {void* data; void (* action ) (void*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,int ,int ,struct action_devres*) ;

void FUNC_2(struct device *VAR_2, void (*VAR_3)(void *), void *VAR_4)
{
 struct action_devres VAR_5 = {
  .data = VAR_4,
  .action = VAR_3,
 };

 FUNC_0(FUNC_1(VAR_2, VAR_1, VAR_0,
          &VAR_5));

}
