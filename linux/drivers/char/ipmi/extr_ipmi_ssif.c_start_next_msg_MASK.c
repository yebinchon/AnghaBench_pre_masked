
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssif_info {struct ipmi_smi_msg* curr_msg; struct ipmi_smi_msg* waiting_msg; } ;
struct ipmi_smi_msg {int data_size; int data; } ;


 int FUNC_0 (struct ssif_info*) ;
 unsigned long* FUNC_1 (struct ssif_info*,unsigned long*) ;
 int FUNC_2 (struct ssif_info*,unsigned long*) ;
 int FUNC_3 (struct ssif_info*,struct ipmi_smi_msg*) ;
 int FUNC_4 (struct ssif_info*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct ssif_info *VAR_0, unsigned long *VAR_1)
{
 struct ipmi_smi_msg *VAR_2;
 unsigned long VAR_3;

 restart:
 if (!FUNC_0(VAR_0)) {
  FUNC_2(VAR_0, VAR_1);
  return;
 }

 if (!VAR_0->waiting_msg) {
  VAR_0->curr_msg = ((void*)0);
  FUNC_2(VAR_0, VAR_1);
 } else {
  int VAR_4;

  VAR_0->curr_msg = VAR_0->waiting_msg;
  VAR_0->waiting_msg = ((void*)0);
  FUNC_2(VAR_0, VAR_1);
  VAR_4 = FUNC_4(VAR_0,
    VAR_0->curr_msg->data,
    VAR_0->curr_msg->data_size);
  if (VAR_4) {
   VAR_2 = VAR_0->curr_msg;
   VAR_0->curr_msg = ((void*)0);
   FUNC_3(VAR_0, VAR_2);
   VAR_1 = FUNC_1(VAR_0, &VAR_3);
   goto restart;
  }
 }
}
