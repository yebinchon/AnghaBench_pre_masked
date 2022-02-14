
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch {int old_name; int new_name; scalar_t__ is_toplevel_relative; } ;
struct apply_state {int prefix; } ;


 int FUNC_0 (struct apply_state*,int *) ;

__attribute__((used)) static void FUNC_1(struct apply_state *VAR_0, struct patch *VAR_1)
{
 if (!VAR_0->prefix || VAR_1->is_toplevel_relative)
  return;
 FUNC_0(VAR_0, &VAR_1->new_name);
 FUNC_0(VAR_0, &VAR_1->old_name);
}
