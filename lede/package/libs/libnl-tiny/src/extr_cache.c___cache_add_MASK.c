
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_object {int ce_list; struct nl_cache* ce_cache; } ;
struct nl_cache {int c_nitems; int c_items; } ;


 int FUNC_0 (int,char*,struct nl_object*,struct nl_cache*,int ) ;
 int FUNC_1 (struct nl_cache*) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct nl_cache *VAR_0, struct nl_object *VAR_1)
{
 VAR_1->ce_cache = VAR_0;

 FUNC_2(&VAR_1->ce_list, &VAR_0->c_items);
 VAR_0->c_nitems++;

 FUNC_0(1, "Added %p to cache %p <%s>.\n",
        VAR_1, VAR_0, FUNC_1(VAR_0));

 return 0;
}
