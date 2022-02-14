
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_smi_msg {int link; } ;
struct ipmi_smi {struct ipmi_smi_msg* curr_msg; int xmit_msgs; int hp_xmit_msgs; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static struct ipmi_smi_msg *FUNC_1(struct ipmi_smi *VAR_0,
          struct ipmi_smi_msg *VAR_1,
          int VAR_2)
{
 if (VAR_0->curr_msg) {
  if (VAR_2 > 0)
   FUNC_0(&VAR_1->link, &VAR_0->hp_xmit_msgs);
  else
   FUNC_0(&VAR_1->link, &VAR_0->xmit_msgs);
  VAR_1 = ((void*)0);
 } else {
  VAR_0->curr_msg = VAR_1;
 }

 return VAR_1;
}
