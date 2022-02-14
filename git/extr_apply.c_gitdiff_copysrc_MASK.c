
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch {int is_copy; int old_name; } ;
struct gitdiff_data {scalar_t__ p_value; int root; } ;


 int FUNC_0 (int ,char const*,int *,scalar_t__,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct gitdiff_data *VAR_0,
      const char *VAR_1,
      struct patch *VAR_2)
{
 VAR_2->is_copy = 1;
 FUNC_1(VAR_2->old_name);
 VAR_2->old_name = FUNC_0(VAR_0->root, VAR_1, ((void*)0), VAR_0->p_value ? VAR_0->p_value - 1 : 0, 0);
 return 0;
}
