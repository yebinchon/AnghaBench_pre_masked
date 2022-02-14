
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ds_info {unsigned int num_ds_states; struct ds_cap_state* ds_states; } ;
struct ds_cap_state {int dummy; } ;



__attribute__((used)) static struct ds_cap_state *FUNC_0(struct ds_info *VAR_0, u64 VAR_1)
{
 unsigned int VAR_2 = VAR_1 >> 32;

 if (VAR_2 >= VAR_0->num_ds_states)
  return ((void*)0);
 return &VAR_0->ds_states[VAR_2];
}
