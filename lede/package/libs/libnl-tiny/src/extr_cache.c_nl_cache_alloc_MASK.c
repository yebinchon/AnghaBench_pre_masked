
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_cache_ops {int dummy; } ;
struct nl_cache {struct nl_cache_ops* c_ops; int c_items; } ;


 int FUNC_0 (int,char*,struct nl_cache*,int ) ;
 struct nl_cache* FUNC_1 (int,int) ;
 int FUNC_2 (struct nl_cache*) ;
 int FUNC_3 (int *) ;

struct nl_cache *FUNC_4(struct nl_cache_ops *VAR_0)
{
 struct nl_cache *VAR_1;

 VAR_1 = FUNC_1(1, sizeof(*VAR_1));
 if (!VAR_1)
  return ((void*)0);

 FUNC_3(&VAR_1->c_items);
 VAR_1->c_ops = VAR_0;

 FUNC_0(2, "Allocated cache %p <%s>.\n", VAR_1, FUNC_2(VAR_1));

 return VAR_1;
}
