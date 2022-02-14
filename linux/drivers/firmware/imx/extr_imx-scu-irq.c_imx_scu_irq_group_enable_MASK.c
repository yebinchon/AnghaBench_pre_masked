
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct imx_sc_rpc_msg {int size; int func; int svc; int ver; } ;
struct imx_sc_msg_irq_enable {void* enable; int mask; void* group; int resource; struct imx_sc_rpc_msg hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct imx_sc_msg_irq_enable*,int) ;
 int VAR_5 ;
 int FUNC_1 (char*,void*,int ,int) ;

int FUNC_2(u8 VAR_6, u32 VAR_7, u8 VAR_8)
{
 struct imx_sc_msg_irq_enable VAR_9;
 struct imx_sc_rpc_msg *VAR_10 = &VAR_9.hdr;
 int VAR_11;

 if (!VAR_4)
  return -VAR_0;

 VAR_10->ver = VAR_3;
 VAR_10->svc = VAR_2;
 VAR_10->func = VAR_1;
 VAR_10->size = 3;

 VAR_9.resource = VAR_5;
 VAR_9.group = VAR_6;
 VAR_9.mask = VAR_7;
 VAR_9.enable = VAR_8;

 VAR_11 = FUNC_0(VAR_4, &VAR_9, 1);
 if (VAR_11)
  FUNC_1("enable irq failed, group %d, mask %d, ret %d\n",
   VAR_6, VAR_7, VAR_11);

 return VAR_11;
}
