
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule {int dummy; } ;
struct repository {int submodule_cache; } ;
struct object_id {int dummy; } ;


 struct submodule const* FUNC_0 (int ,struct object_id const*,char const*,int ) ;
 int FUNC_1 (struct repository*) ;
 int VAR_0 ;

const struct submodule *FUNC_2(struct repository *VAR_1,
         const struct object_id *VAR_2,
  const char *VAR_3)
{
 FUNC_1(VAR_1);
 return FUNC_0(VAR_1->submodule_cache, VAR_2, VAR_3, VAR_0);
}
