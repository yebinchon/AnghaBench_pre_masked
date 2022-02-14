
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evrpc_hook_list {int dummy; } ;
struct evrpc_hooks_ {struct evrpc_hook_list out_hooks; struct evrpc_hook_list in_hooks; } ;
typedef enum EVRPC_HOOK_TYPE { ____Placeholder_EVRPC_HOOK_TYPE } EVRPC_HOOK_TYPE ;




 int FUNC_0 (int) ;
 int FUNC_1 (struct evrpc_hook_list*,void*) ;

int
FUNC_2(void *VAR_0, enum EVRPC_HOOK_TYPE VAR_1, void *VAR_2)
{
 struct evrpc_hooks_ *VAR_3 = VAR_0;
 struct evrpc_hook_list *VAR_4 = ((void*)0);
 switch (VAR_1) {
 case 129:
  VAR_4 = &VAR_3->in_hooks;
  break;
 case 128:
  VAR_4 = &VAR_3->out_hooks;
  break;
 default:
  FUNC_0(VAR_1 == 129 || VAR_1 == 128);
 }

 return (FUNC_1(VAR_4, VAR_2));
}
