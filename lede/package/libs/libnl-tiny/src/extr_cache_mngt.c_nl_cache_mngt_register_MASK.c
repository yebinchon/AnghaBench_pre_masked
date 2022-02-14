
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_cache_ops {int co_name; struct nl_cache_ops* co_next; int co_obj_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 struct nl_cache_ops* VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;

int FUNC_2(struct nl_cache_ops *VAR_3)
{
 if (!VAR_3->co_name || !VAR_3->co_obj_ops)
  return -VAR_1;

 if (FUNC_1(VAR_3->co_name))
  return -VAR_0;

 VAR_3->co_next = VAR_2;
 VAR_2 = VAR_3;

 FUNC_0(1, "Registered cache operations %s\n", VAR_3->co_name);

 return 0;
}
