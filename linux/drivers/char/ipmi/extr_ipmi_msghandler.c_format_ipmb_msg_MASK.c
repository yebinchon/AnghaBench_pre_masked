
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_ipmi_msg {int netfn; unsigned char cmd; int data_len; int data; } ;
struct ipmi_smi_msg {int* data; int data_size; long msgid; } ;
struct ipmi_ipmb_addr {int channel; int slave_addr; int lun; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int*,int) ;
 int FUNC_1 (unsigned char*,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct ipmi_smi_msg *VAR_2,
       struct kernel_ipmi_msg *VAR_3,
       struct ipmi_ipmb_addr *VAR_4,
       long VAR_5,
       unsigned char VAR_6,
       int VAR_7,
       unsigned char VAR_8,
       unsigned char VAR_9)
{
 int VAR_10 = VAR_7;


 VAR_2->data[0] = (VAR_0 << 2);
 VAR_2->data[1] = VAR_1;
 VAR_2->data[2] = VAR_4->channel;
 if (VAR_7)
  VAR_2->data[3] = 0;
 VAR_2->data[VAR_10+3] = VAR_4->slave_addr;
 VAR_2->data[VAR_10+4] = (VAR_3->netfn << 2) | (VAR_4->lun & 0x3);
 VAR_2->data[VAR_10+5] = FUNC_0(&VAR_2->data[VAR_10 + 3], 2);
 VAR_2->data[VAR_10+6] = VAR_8;
 VAR_2->data[VAR_10+7] = (VAR_6 << 2) | VAR_9;
 VAR_2->data[VAR_10+8] = VAR_3->cmd;


 if (VAR_3->data_len > 0)
  FUNC_1(&VAR_2->data[VAR_10 + 9], VAR_3->data, VAR_3->data_len);
 VAR_2->data_size = VAR_3->data_len + 9;


 VAR_2->data[VAR_10+VAR_2->data_size]
  = FUNC_0(&VAR_2->data[VAR_10 + 6], VAR_2->data_size - 6);





 VAR_2->data_size += 1 + VAR_10;

 VAR_2->msgid = VAR_5;
}
