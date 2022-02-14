
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipmi_smi_powernv {int intf; } ;
struct ipmi_smi_msg {int* rsp; int* data; int rsp_size; } ;


 int FUNC_0 (int ,struct ipmi_smi_msg*) ;

__attribute__((used)) static void FUNC_1(struct ipmi_smi_powernv *VAR_0,
  struct ipmi_smi_msg *VAR_1, u8 VAR_2)
{
 VAR_1->rsp[0] = VAR_1->data[0] | 0x4;
 VAR_1->rsp[1] = VAR_1->data[1];
 VAR_1->rsp[2] = VAR_2;
 VAR_1->rsp_size = 3;
 FUNC_0(VAR_0->intf, VAR_1);
}
