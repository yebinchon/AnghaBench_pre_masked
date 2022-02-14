
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_object {struct nl_cache* ce_cache; int ce_list; } ;
struct nl_cache {int c_nitems; } ;


 int FUNC_0 (int,char*,struct nl_object*,struct nl_cache*,int ) ;
 int FUNC_1 (struct nl_cache*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nl_object*) ;

void FUNC_4(struct nl_object *VAR_0)
{
 struct nl_cache *VAR_1 = VAR_0->ce_cache;

 if (VAR_1 == ((void*)0))
  return;

 FUNC_2(&VAR_0->ce_list);
 VAR_0->ce_cache = ((void*)0);
 FUNC_3(VAR_0);
 VAR_1->c_nitems--;

 FUNC_0(1, "Deleted %p from cache %p <%s>.\n",
        VAR_0, VAR_1, FUNC_1(VAR_1));
}
