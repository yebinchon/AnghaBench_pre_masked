
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clp_state_data {scalar_t__ fid; int state; } ;
struct clp_fh_list_entry {scalar_t__ fid; int config_state; } ;



__attribute__((used)) static void FUNC_0(struct clp_fh_list_entry *VAR_0, void *VAR_1)
{
 struct clp_state_data *VAR_2 = VAR_1;

 if (VAR_0->fid != VAR_2->fid)
  return;

 VAR_2->state = VAR_0->config_state;
}
