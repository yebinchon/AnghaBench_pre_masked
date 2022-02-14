
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_object_ops {int (* oo_free_data ) (struct nl_object*) ;} ;
struct nl_object {scalar_t__ ce_refcnt; scalar_t__ ce_cache; } ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (struct nl_object*) ;
 int FUNC_2 (struct nl_object*) ;
 struct nl_object_ops* FUNC_3 (struct nl_object*) ;
 int FUNC_4 (struct nl_object*) ;

void FUNC_5(struct nl_object *VAR_0)
{
 struct nl_object_ops *VAR_1 = FUNC_3(VAR_0);

 if (VAR_0->ce_refcnt > 0)
  FUNC_0(1, "Warning: Freeing object in use...\n");

 if (VAR_0->ce_cache)
  FUNC_2(VAR_0);

 if (VAR_1->oo_free_data)
  VAR_1->oo_free_data(VAR_0);

 FUNC_1(VAR_0);

 FUNC_0(4, "Freed object %p\n", VAR_0);
}
