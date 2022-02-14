
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch {scalar_t__ is_delete; scalar_t__ is_new; int is_rename; scalar_t__ is_copy; } ;
struct apply_state {int dummy; } ;


 int FUNC_0 (struct apply_state*,struct patch*) ;
 int FUNC_1 (struct apply_state*,struct patch*,int) ;

__attribute__((used)) static int FUNC_2(struct apply_state *VAR_0,
    struct patch *VAR_1,
    int VAR_2)
{
 if (VAR_1->is_delete > 0) {
  if (VAR_2 == 0)
   return FUNC_1(VAR_0, VAR_1, 1);
  return 0;
 }
 if (VAR_1->is_new > 0 || VAR_1->is_copy) {
  if (VAR_2 == 1)
   return FUNC_0(VAR_0, VAR_1);
  return 0;
 }




 if (VAR_2 == 0)
  return FUNC_1(VAR_0, VAR_1, VAR_1->is_rename);
 if (VAR_2 == 1)
  return FUNC_0(VAR_0, VAR_1);
 return 0;
}
