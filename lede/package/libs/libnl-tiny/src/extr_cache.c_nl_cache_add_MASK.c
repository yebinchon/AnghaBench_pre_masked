
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nl_object {scalar_t__ ce_ops; int ce_list; } ;
struct nl_cache {TYPE_1__* c_ops; } ;
struct TYPE_2__ {scalar_t__ co_obj_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nl_cache*,struct nl_object*) ;
 int FUNC_1 (int *) ;
 struct nl_object* FUNC_2 (struct nl_object*) ;
 int FUNC_3 (struct nl_object*) ;

int FUNC_4(struct nl_cache *VAR_2, struct nl_object *VAR_3)
{
 struct nl_object *VAR_4;

 if (VAR_2->c_ops->co_obj_ops != VAR_3->ce_ops)
  return -VAR_1;

 if (!FUNC_1(&VAR_3->ce_list)) {
  VAR_4 = FUNC_2(VAR_3);
  if (!VAR_4)
   return -VAR_0;
 } else {
  FUNC_3(VAR_3);
  VAR_4 = VAR_3;
 }

 return FUNC_0(VAR_2, VAR_4);
}
