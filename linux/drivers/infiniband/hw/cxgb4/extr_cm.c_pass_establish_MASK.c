
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct cpl_pass_establish {int rcv_isn; int snd_isn; int tcp_opt; } ;
struct TYPE_2__ {int mutex; int history; int state; } ;
struct c4iw_ep {TYPE_1__ com; int dst; int snd_wscale; void* rcv_seq; void* snd_seq; int hwtid; } ;
struct c4iw_dev {int dummy; } ;


 unsigned int FUNC_0 (struct cpl_pass_establish*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct c4iw_ep*,int,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 struct cpl_pass_establish* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ) ;
 struct c4iw_ep* FUNC_7 (struct c4iw_dev*,unsigned int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,struct c4iw_ep*,unsigned int,...) ;
 int FUNC_12 (struct c4iw_ep*) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (struct c4iw_ep*,int ) ;
 int FUNC_15 (struct c4iw_ep*) ;

__attribute__((used)) static int FUNC_16(struct c4iw_dev *VAR_3, struct sk_buff *VAR_4)
{
 struct c4iw_ep *VAR_5;
 struct cpl_pass_establish *VAR_6 = FUNC_5(VAR_4);
 unsigned int VAR_7 = FUNC_0(VAR_6);
 int VAR_8;
 u16 VAR_9 = FUNC_10(VAR_6->tcp_opt);

 VAR_5 = FUNC_7(VAR_3, VAR_7);
 FUNC_11("ep %p tid %u\n", VAR_5, VAR_5->hwtid);
 VAR_5->snd_seq = FUNC_2(VAR_6->snd_isn);
 VAR_5->rcv_seq = FUNC_2(VAR_6->rcv_isn);
 VAR_5->snd_wscale = FUNC_1(VAR_9);

 FUNC_11("ep %p hwtid %u tcp_opt 0x%02x\n", VAR_5, VAR_7, VAR_9);

 FUNC_14(VAR_5, VAR_9);

 FUNC_6(VAR_5->dst);
 FUNC_8(&VAR_5->com.mutex);
 VAR_5->com.state = VAR_1;
 FUNC_15(VAR_5);
 FUNC_13(VAR_2, &VAR_5->com.history);
 VAR_8 = FUNC_12(VAR_5);
 FUNC_9(&VAR_5->com.mutex);
 if (VAR_8)
  FUNC_3(VAR_5, 1, VAR_0);
 FUNC_4(&VAR_5->com);

 return 0;
}
