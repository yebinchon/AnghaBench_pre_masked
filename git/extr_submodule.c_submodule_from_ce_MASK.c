
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule {int dummy; } ;
struct cache_entry {int name; int ce_mode; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 struct submodule const* FUNC_2 (int ,int *,int ) ;
 int VAR_1 ;

const struct submodule *FUNC_3(const struct cache_entry *VAR_2)
{
 if (!FUNC_0(VAR_2->ce_mode))
  return ((void*)0);

 if (!FUNC_1())
  return ((void*)0);

 return FUNC_2(VAR_1, &VAR_0, VAR_2->name);
}
