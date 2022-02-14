
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_smi_msg {int dummy; } ;
struct ipmi_smi_handlers {int (* sender ) (int ,struct ipmi_smi_msg*) ;} ;
struct ipmi_smi {int run_to_completion; int send_info; int xmit_msgs_lock; } ;


 struct ipmi_smi_msg* FUNC_0 (struct ipmi_smi*,struct ipmi_smi_msg*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,struct ipmi_smi_msg*) ;

__attribute__((used)) static void FUNC_4(struct ipmi_smi *VAR_0,
       const struct ipmi_smi_handlers *VAR_1,
       struct ipmi_smi_msg *VAR_2, int VAR_3)
{
 int VAR_4 = VAR_0->run_to_completion;
 unsigned long VAR_5 = 0;

 if (!VAR_4)
  FUNC_1(&VAR_0->xmit_msgs_lock, VAR_5);
 VAR_2 = FUNC_0(VAR_0, VAR_2, VAR_3);

 if (!VAR_4)
  FUNC_2(&VAR_0->xmit_msgs_lock, VAR_5);

 if (VAR_2)
  VAR_1->sender(VAR_0->send_info, VAR_2);
}
