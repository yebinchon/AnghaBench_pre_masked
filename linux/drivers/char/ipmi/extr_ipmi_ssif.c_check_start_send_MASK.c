
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssif_info {int ssif_state; int * curr_msg; } ;
struct ipmi_smi_msg {int data_size; int data; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipmi_smi_msg*) ;
 unsigned long* FUNC_1 (struct ssif_info*,unsigned long*) ;
 int FUNC_2 (struct ssif_info*,unsigned long*) ;
 scalar_t__ FUNC_3 (struct ssif_info*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ssif_info *VAR_1, unsigned long *VAR_2,
        struct ipmi_smi_msg *VAR_3)
{
 if (FUNC_3(VAR_1, VAR_3->data, VAR_3->data_size) != 0) {
  unsigned long VAR_4;

  VAR_2 = FUNC_1(VAR_1, &VAR_4);
  VAR_1->curr_msg = ((void*)0);
  VAR_1->ssif_state = VAR_0;
  FUNC_2(VAR_1, VAR_2);
  FUNC_0(VAR_3);
 }
}
