
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch {scalar_t__ new_name; int new_mode; scalar_t__ old_name; scalar_t__ is_delete; scalar_t__ is_rename; int old_mode; struct patch* next; } ;
struct apply_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct apply_state*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct apply_state *VAR_2, struct patch *VAR_3)
{
 for ( ; VAR_3; VAR_3 = VAR_3->next) {
  if ((VAR_3->old_name && FUNC_0(VAR_3->old_mode)) &&
      (VAR_3->is_rename || VAR_3->is_delete))

   FUNC_1(VAR_2, VAR_3->old_name, VAR_0);

  if (VAR_3->new_name && FUNC_0(VAR_3->new_mode))

   FUNC_1(VAR_2, VAR_3->new_name, VAR_1);
 }
}
