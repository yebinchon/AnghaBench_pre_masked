
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smi_info {struct ipmi_smi_msg* curr_msg; } ;
struct ipmi_smi_msg {int* rsp; int* data; int rsp_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct smi_info*,struct ipmi_smi_msg*) ;

__attribute__((used)) static void FUNC_1(struct smi_info *VAR_1)
{
 struct ipmi_smi_msg *VAR_2 = VAR_1->curr_msg;


 VAR_2->rsp[0] = VAR_2->data[0] | 4;
 VAR_2->rsp[1] = VAR_2->data[1];
 VAR_2->rsp[2] = VAR_0;
 VAR_2->rsp_size = 3;
 VAR_1->curr_msg = ((void*)0);
 FUNC_0(VAR_1, VAR_2);
}
