
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct creq_qp_event {scalar_t__ status; } ;
struct creq_base {int dummy; } ;
struct cmdq_base {int opcode; int cookie; } ;
struct bnxt_qplib_rcfw {TYPE_1__* pdev; int flags; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bnxt_qplib_rcfw*,int) ;
 int FUNC_1 (struct bnxt_qplib_rcfw*,struct cmdq_base*,struct creq_base*,void*,int) ;
 int FUNC_2 (struct bnxt_qplib_rcfw*,int) ;
 int FUNC_3 (int *,char*,int,int,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int,int) ;

int FUNC_8(struct bnxt_qplib_rcfw *VAR_6,
     struct cmdq_base *VAR_7,
     struct creq_base *VAR_8,
     void *VAR_9, u8 VAR_10)
{
 struct creq_qp_event *VAR_11 = (struct creq_qp_event *)VAR_8;
 u16 VAR_12;
 u8 VAR_13, VAR_14 = 0xFF;
 int VAR_15 = 0;

 do {
  VAR_13 = VAR_7->opcode;
  VAR_15 = FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
  VAR_12 = FUNC_4(VAR_7->cookie) & VAR_5;
  if (!VAR_15)
   break;

  if (!VAR_14 || (VAR_15 != -VAR_0 && VAR_15 != -VAR_1)) {

   FUNC_3(&VAR_6->pdev->dev, "cmdq[%#x]=%#x send failed\n",
    VAR_12, VAR_13);
   return VAR_15;
  }
  VAR_10 ? FUNC_5(1) : FUNC_7(500, 1000);

 } while (VAR_14--);

 if (VAR_10)
  VAR_15 = FUNC_0(VAR_6, VAR_12);
 else
  VAR_15 = FUNC_2(VAR_6, VAR_12);
 if (VAR_15) {

  FUNC_3(&VAR_6->pdev->dev, "cmdq[%#x]=%#x timedout (%d)msec\n",
   VAR_12, VAR_13, VAR_4);
  FUNC_6(VAR_3, &VAR_6->flags);
  return VAR_15;
 }

 if (VAR_11->status) {

  FUNC_3(&VAR_6->pdev->dev, "cmdq[%#x]=%#x status %#x\n",
   VAR_12, VAR_13, VAR_11->status);
  VAR_15 = -VAR_2;
 }

 return VAR_15;
}
