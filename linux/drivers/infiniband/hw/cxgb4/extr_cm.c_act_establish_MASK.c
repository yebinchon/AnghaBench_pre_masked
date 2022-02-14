
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tid_info {int dummy; } ;
struct sk_buff {int dummy; } ;
struct cpl_act_establish {int rcv_isn; int snd_isn; int tos_atid; int tcp_opt; } ;
struct TYPE_8__ {int ss_family; } ;
struct TYPE_10__ {int mutex; int history; TYPE_4__* dev; TYPE_3__ local_addr; } ;
struct c4iw_ep {unsigned int hwtid; TYPE_5__ com; scalar_t__ retry_with_mpa_v1; int snd_wscale; void* rcv_seq; void* snd_seq; int dst; } ;
struct TYPE_6__ {struct tid_info* tids; } ;
struct TYPE_7__ {TYPE_1__ lldi; } ;
struct c4iw_dev {TYPE_2__ rdev; } ;
struct TYPE_9__ {int atids; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct cpl_act_establish*) ;
 int VAR_2 ;
 int FUNC_1 (unsigned short) ;
 unsigned int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct c4iw_ep*,int ,int ) ;
 int FUNC_5 (struct c4iw_ep*,int ) ;
 struct cpl_act_establish* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct tid_info*,unsigned int) ;
 int FUNC_8 (struct tid_info*,struct c4iw_ep*,unsigned int,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct c4iw_ep*) ;
 struct c4iw_ep* FUNC_11 (struct tid_info*,unsigned int) ;
 int VAR_3 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 unsigned short FUNC_15 (int ) ;
 int FUNC_16 (char*,struct c4iw_ep*,unsigned int,void*,void*) ;
 int FUNC_17 (struct c4iw_ep*) ;
 int FUNC_18 (struct c4iw_ep*,struct sk_buff*,int) ;
 int FUNC_19 (int ,int *) ;
 int FUNC_20 (struct c4iw_ep*,unsigned short) ;
 int FUNC_21 (int *,unsigned int) ;

__attribute__((used)) static int FUNC_22(struct c4iw_dev *VAR_4, struct sk_buff *VAR_5)
{
 struct c4iw_ep *VAR_6;
 struct cpl_act_establish *VAR_7 = FUNC_6(VAR_5);
 unsigned short VAR_8 = FUNC_15(VAR_7->tcp_opt);
 unsigned int VAR_9 = FUNC_0(VAR_7);
 unsigned int VAR_10 = FUNC_2(FUNC_14(VAR_7->tos_atid));
 struct tid_info *VAR_11 = VAR_4->rdev.lldi.tids;
 int VAR_12;

 VAR_6 = FUNC_11(VAR_11, VAR_10);

 FUNC_16("ep %p tid %u snd_isn %u rcv_isn %u\n", VAR_6, VAR_9,
   FUNC_3(VAR_7->snd_isn), FUNC_3(VAR_7->rcv_isn));

 FUNC_12(&VAR_6->com.mutex);
 FUNC_9(VAR_6->dst);


 VAR_6->hwtid = VAR_9;
 FUNC_8(VAR_11, VAR_6, VAR_9, VAR_6->com.local_addr.ss_family);
 FUNC_10(VAR_6);

 VAR_6->snd_seq = FUNC_3(VAR_7->snd_isn);
 VAR_6->rcv_seq = FUNC_3(VAR_7->rcv_isn);
 VAR_6->snd_wscale = FUNC_1(VAR_8);

 FUNC_20(VAR_6, VAR_8);


 FUNC_21(&VAR_6->com.dev->atids, VAR_10);
 FUNC_7(VAR_11, VAR_10);
 FUNC_19(VAR_0, &VAR_6->com.history);


 VAR_12 = FUNC_17(VAR_6);
 if (VAR_12)
  goto err;
 if (VAR_6->retry_with_mpa_v1)
  VAR_12 = FUNC_18(VAR_6, VAR_5, 1);
 else
  VAR_12 = FUNC_18(VAR_6, VAR_5, VAR_3);
 if (VAR_12)
  goto err;
 FUNC_13(&VAR_6->com.mutex);
 return 0;
err:
 FUNC_13(&VAR_6->com.mutex);
 FUNC_5(VAR_6, -VAR_1);
 FUNC_4(VAR_6, 0, VAR_2);
 return 0;
}
