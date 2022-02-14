
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssif_info {int dummy; } ;
struct ipmi_smi_msg {int* rsp; int* data; int rsp_size; } ;


 int FUNC_0 (struct ssif_info*,struct ipmi_smi_msg*) ;
 int VAR_0 ;
 int FUNC_1 (struct ssif_info*,int ) ;

__attribute__((used)) static void FUNC_2(struct ssif_info *VAR_1,
        struct ipmi_smi_msg *VAR_2)
{
 FUNC_1(VAR_1, VAR_0);


 VAR_2->rsp[0] = VAR_2->data[0] | 4;
 VAR_2->rsp[1] = VAR_2->data[1];
 VAR_2->rsp[2] = 0xFF;
 VAR_2->rsp_size = 3;

 FUNC_0(VAR_1, VAR_2);
}
