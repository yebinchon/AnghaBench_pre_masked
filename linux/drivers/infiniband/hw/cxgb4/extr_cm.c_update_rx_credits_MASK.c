
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct cpl_rx_data_ack {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct c4iw_ep {int rcv_win; TYPE_2__ com; int ctrlq_idx; int hwtid; } ;
struct TYPE_3__ {int rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int,int ,int ,int) ;
 int VAR_4 ;
 struct sk_buff* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (char*,struct c4iw_ep*,int ,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct c4iw_ep *VAR_5, u32 VAR_6)
{
 struct sk_buff *VAR_7;
 u32 VAR_8 = FUNC_6(sizeof(struct cpl_rx_data_ack), 16);
 u32 VAR_9;

 FUNC_4("ep %p tid %u credits %u\n",
   VAR_5, VAR_5->hwtid, VAR_6);
 VAR_7 = FUNC_3(((void*)0), VAR_8, VAR_0);
 if (!VAR_7) {
  FUNC_5("update_rx_credits - cannot alloc skb!\n");
  return 0;
 }






 if (VAR_5->rcv_win > VAR_1 * 1024)
  VAR_6 += VAR_5->rcv_win - VAR_1 * 1024;

 VAR_9 = VAR_6 | VAR_3 | VAR_2 |
        FUNC_0(VAR_4);

 FUNC_2(VAR_7, VAR_8, VAR_5->hwtid, VAR_5->ctrlq_idx,
       VAR_9);

 FUNC_1(&VAR_5->com.dev->rdev, VAR_7);
 return VAR_6;
}
