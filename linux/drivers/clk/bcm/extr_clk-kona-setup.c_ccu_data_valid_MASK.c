
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccu_policy {int dummy; } ;
struct ccu_data {int name; struct ccu_policy policy; } ;


 int FUNC_0 (struct ccu_data*) ;
 scalar_t__ FUNC_1 (struct ccu_policy*) ;
 int FUNC_2 (struct ccu_policy*,int ) ;

__attribute__((used)) static bool FUNC_3(struct ccu_data *VAR_0)
{
 struct ccu_policy *VAR_1;

 if (!FUNC_0(VAR_0))
  return 0;

 VAR_1 = &VAR_0->policy;
 if (FUNC_1(VAR_1))
  if (!FUNC_2(VAR_1, VAR_0->name))
   return 0;

 return 1;
}
