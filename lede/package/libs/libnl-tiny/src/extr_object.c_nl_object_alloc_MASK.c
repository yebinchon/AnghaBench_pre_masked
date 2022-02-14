
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_object_ops {int oo_size; int (* oo_constructor ) (struct nl_object*) ;} ;
struct nl_object {int ce_refcnt; struct nl_object_ops* ce_ops; int ce_list; } ;


 int FUNC_0 () ;
 int FUNC_1 (int,char*,struct nl_object*) ;
 struct nl_object* FUNC_2 (int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nl_object*) ;

struct nl_object *FUNC_5(struct nl_object_ops *VAR_0)
{
 struct nl_object *VAR_1;

 if (VAR_0->oo_size < sizeof(*VAR_1))
  FUNC_0();

 VAR_1 = FUNC_2(1, VAR_0->oo_size);
 if (!VAR_1)
  return ((void*)0);

 VAR_1->ce_refcnt = 1;
 FUNC_3(&VAR_1->ce_list);

 VAR_1->ce_ops = VAR_0;
 if (VAR_0->oo_constructor)
  VAR_0->oo_constructor(VAR_1);

 FUNC_1(4, "Allocated new object %p\n", VAR_1);

 return VAR_1;
}
