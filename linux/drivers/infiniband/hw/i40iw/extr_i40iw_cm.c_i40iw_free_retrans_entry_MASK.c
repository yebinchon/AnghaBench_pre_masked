
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_timer_entry {scalar_t__ sqbuf; } ;
struct i40iw_device {int vsi; } ;
struct i40iw_cm_node {int ref_count; struct i40iw_timer_entry* send_entry; struct i40iw_device* iwdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,void*) ;
 int FUNC_2 (struct i40iw_timer_entry*) ;

__attribute__((used)) static void FUNC_3(struct i40iw_cm_node *VAR_0)
{
 struct i40iw_device *VAR_1 = VAR_0->iwdev;
 struct i40iw_timer_entry *VAR_2;

 VAR_2 = VAR_0->send_entry;
 if (VAR_2) {
  VAR_0->send_entry = ((void*)0);
  FUNC_1(&VAR_1->vsi, (void *)VAR_2->sqbuf);
  FUNC_2(VAR_2);
  FUNC_0(&VAR_0->ref_count);
 }
}
