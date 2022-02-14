
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct patch {int old_name; int old_mode; } ;
struct apply_state {int cached; TYPE_1__* repo; int ita_only; scalar_t__ update_index; } ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct apply_state *VAR_0, struct patch *VAR_1, int VAR_2)
{
 if (VAR_0->update_index && !VAR_0->ita_only) {
  if (FUNC_2(VAR_0->repo->index, VAR_1->old_name) < 0)
   return FUNC_1(FUNC_0("unable to remove %s from index"), VAR_1->old_name);
 }
 if (!VAR_0->cached) {
  if (!FUNC_3(VAR_1->old_mode, VAR_1->old_name) && VAR_2) {
   FUNC_4(VAR_1->old_name);
  }
 }
 return 0;
}
