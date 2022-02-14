
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch {int old_name; scalar_t__ is_rename; scalar_t__ is_copy; } ;
struct apply_state {int dummy; } ;


 struct patch* FUNC_0 (struct apply_state*,int ) ;
 scalar_t__ FUNC_1 (struct patch*) ;
 scalar_t__ FUNC_2 (struct patch*) ;

__attribute__((used)) static struct patch *FUNC_3(struct apply_state *VAR_0,
        struct patch *VAR_1,
        int *VAR_2)
{
 struct patch *VAR_3;

 *VAR_2 = 0;
 if (VAR_1->is_copy || VAR_1->is_rename)
  return ((void*)0);

 VAR_3 = FUNC_0(VAR_0, VAR_1->old_name);
 if (!VAR_3)
  return ((void*)0);

 if (FUNC_1(VAR_3))
  return ((void*)0);

 if (FUNC_2(VAR_3))
  *VAR_2 = 1;

 return VAR_3;
}
