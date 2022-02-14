
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct work_struct {int dummy; } ;
struct imx_sc_rpc_msg {int size; int func; int svc; int ver; } ;
struct TYPE_5__ {int status; } ;
struct TYPE_4__ {scalar_t__ group; int resource; } ;
struct TYPE_6__ {TYPE_2__ resp; TYPE_1__ req; } ;
struct imx_sc_msg_irq_get_status {TYPE_3__ data; struct imx_sc_rpc_msg hdr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct imx_sc_msg_irq_get_status*,int) ;
 int FUNC_1 (int ,scalar_t__*) ;
 int VAR_5 ;
 int FUNC_2 (char*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct work_struct *VAR_6)
{
 struct imx_sc_msg_irq_get_status VAR_7;
 struct imx_sc_rpc_msg *VAR_8 = &VAR_7.hdr;
 u32 VAR_9;
 int VAR_10;
 u8 VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  VAR_8->ver = VAR_3;
  VAR_8->svc = VAR_2;
  VAR_8->func = VAR_0;
  VAR_8->size = 2;

  VAR_7.data.req.resource = VAR_5;
  VAR_7.data.req.group = VAR_11;

  VAR_10 = FUNC_0(VAR_4, &VAR_7, 1);
  if (VAR_10) {
   FUNC_2("get irq group %d status failed, ret %d\n",
          VAR_11, VAR_10);
   return;
  }

  VAR_9 = VAR_7.data.resp.status;
  if (!VAR_9)
   continue;

  FUNC_1(VAR_9, &VAR_11);
 }
}
