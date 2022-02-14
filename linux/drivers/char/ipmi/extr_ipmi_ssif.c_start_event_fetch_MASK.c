
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssif_info {int req_events; int ssif_state; struct ipmi_smi_msg* curr_msg; } ;
struct ipmi_smi_msg {int* data; int data_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ssif_info*,unsigned long*,struct ipmi_smi_msg*) ;
 struct ipmi_smi_msg* FUNC_1 () ;
 int FUNC_2 (struct ssif_info*,unsigned long*) ;

__attribute__((used)) static void FUNC_3(struct ssif_info *VAR_4, unsigned long *VAR_5)
{
 struct ipmi_smi_msg *VAR_6;

 VAR_4->req_events = 0;

 VAR_6 = FUNC_1();
 if (!VAR_6) {
  VAR_4->ssif_state = VAR_3;
  FUNC_2(VAR_4, VAR_5);
  return;
 }

 VAR_4->curr_msg = VAR_6;
 VAR_4->ssif_state = VAR_2;
 FUNC_2(VAR_4, VAR_5);

 VAR_6->data[0] = (VAR_0 << 2);
 VAR_6->data[1] = VAR_1;
 VAR_6->data_size = 2;

 FUNC_0(VAR_4, VAR_5, VAR_6);
}
