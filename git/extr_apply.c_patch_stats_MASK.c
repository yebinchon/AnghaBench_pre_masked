
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch {int lines_added; int lines_deleted; scalar_t__ new_name; scalar_t__ old_name; } ;
struct apply_state {int max_change; int max_len; } ;


 int FUNC_0 (scalar_t__,int *,int *,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct apply_state *VAR_0, struct patch *VAR_1)
{
 int VAR_2 = VAR_1->lines_added + VAR_1->lines_deleted;

 if (VAR_2 > VAR_0->max_change)
  VAR_0->max_change = VAR_2;
 if (VAR_1->old_name) {
  int VAR_3 = FUNC_0(VAR_1->old_name, ((void*)0), ((void*)0), 0);
  if (!VAR_3)
   VAR_3 = FUNC_1(VAR_1->old_name);
  if (VAR_3 > VAR_0->max_len)
   VAR_0->max_len = VAR_3;
 }
 if (VAR_1->new_name) {
  int VAR_4 = FUNC_0(VAR_1->new_name, ((void*)0), ((void*)0), 0);
  if (!VAR_4)
   VAR_4 = FUNC_1(VAR_1->new_name);
  if (VAR_4 > VAR_0->max_len)
   VAR_0->max_len = VAR_4;
 }
}
