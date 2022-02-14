
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch {int is_delete; int def_name; int old_name; } ;
struct gitdiff_data {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct gitdiff_data*,char const*,struct patch*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct gitdiff_data *VAR_0,
     const char *VAR_1,
     struct patch *VAR_2)
{
 VAR_2->is_delete = 1;
 FUNC_0(VAR_2->old_name);
 VAR_2->old_name = FUNC_2(VAR_2->def_name);
 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
