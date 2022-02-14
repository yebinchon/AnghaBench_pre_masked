
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int submodule_cache; } ;
struct parse_config_parameter {int overwrite; int * gitmodules_oid; int * treeish_name; int cache; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,char const*,struct parse_config_parameter*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_1, const char *VAR_2, void *VAR_3)
{
 struct repository *VAR_4 = VAR_3;
 struct parse_config_parameter VAR_5;

 VAR_5.cache = VAR_4->submodule_cache;
 VAR_5.treeish_name = ((void*)0);
 VAR_5.gitmodules_oid = &VAR_0;
 VAR_5.overwrite = 1;

 return FUNC_0(VAR_1, VAR_2, &VAR_5);
}
