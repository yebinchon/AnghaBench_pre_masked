
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct cpl_peer_close {int dummy; } ;
struct c4iw_qp_attributes {int next_state; } ;
struct TYPE_4__ {int state; int mutex; TYPE_2__* qp; int cm_id; int wr_waitp; int history; } ;
struct c4iw_ep {TYPE_1__ com; int hwtid; int dst; } ;
struct c4iw_dev {int dummy; } ;
struct TYPE_5__ {int rhp; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;

 unsigned int FUNC_0 (struct cpl_peer_close*) ;
 int VAR_4 ;





 int VAR_5 ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (struct c4iw_ep*,int ,int ) ;
 int FUNC_4 (int ,TYPE_2__*,int ,struct c4iw_qp_attributes*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct c4iw_ep*,int ) ;
 int FUNC_8 (struct c4iw_ep*,int) ;
 struct cpl_peer_close* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int ) ;
 struct c4iw_ep* FUNC_11 (struct c4iw_dev*,unsigned int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct c4iw_ep*) ;
 int FUNC_15 (char*,struct c4iw_ep*,int ) ;
 int FUNC_16 (struct c4iw_ep*) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (struct c4iw_ep*) ;
 int FUNC_19 (struct c4iw_ep*) ;

__attribute__((used)) static int FUNC_20(struct c4iw_dev *VAR_6, struct sk_buff *VAR_7)
{
 struct cpl_peer_close *VAR_8 = FUNC_9(VAR_7);
 struct c4iw_ep *VAR_9;
 struct c4iw_qp_attributes VAR_10;
 int VAR_11 = 1;
 int VAR_12 = 0;
 unsigned int VAR_13 = FUNC_0(VAR_8);
 int VAR_14;

 VAR_9 = FUNC_11(VAR_6, VAR_13);
 if (!VAR_9)
  return 0;

 FUNC_15("ep %p tid %u\n", VAR_9, VAR_9->hwtid);
 FUNC_10(VAR_9->dst);

 FUNC_17(VAR_5, &VAR_9->com.history);
 FUNC_12(&VAR_9->com.mutex);
 switch (VAR_9->com.state) {
 case 128:
  FUNC_2(&VAR_9->com, 135);
  break;
 case 129:
  FUNC_2(&VAR_9->com, 135);
  FUNC_8(VAR_9, -VAR_3);
  break;
 case 130:







  FUNC_2(&VAR_9->com, 135);
  FUNC_15("waking up ep %p tid %u\n", VAR_9, VAR_9->hwtid);
  FUNC_6(VAR_9->com.wr_waitp, -VAR_3);
  break;
 case 131:
  FUNC_2(&VAR_9->com, 135);
  FUNC_15("waking up ep %p tid %u\n", VAR_9, VAR_9->hwtid);
  FUNC_6(VAR_9->com.wr_waitp, -VAR_3);
  break;
 case 133:
  FUNC_18(VAR_9);
  FUNC_2(&VAR_9->com, 135);
  VAR_10.next_state = VAR_1;
  VAR_14 = FUNC_4(VAR_9->com.qp->rhp, VAR_9->com.qp,
           VAR_0, &VAR_10, 1);
  if (VAR_14 != -VAR_3) {
   FUNC_14(VAR_9);
   VAR_11 = 1;
  }
  break;
 case 136:
  VAR_11 = 0;
  break;
 case 135:
  FUNC_2(&VAR_9->com, 132);
  VAR_11 = 0;
  break;
 case 132:
  (void)FUNC_19(VAR_9);
  if (VAR_9->com.cm_id && VAR_9->com.qp) {
   VAR_10.next_state = VAR_2;
   FUNC_4(VAR_9->com.qp->rhp, VAR_9->com.qp,
           VAR_0, &VAR_10, 1);
  }
  FUNC_7(VAR_9, 0);
  FUNC_2(&VAR_9->com, 134);
  VAR_12 = 1;
  VAR_11 = 0;
  break;
 case 134:
  VAR_11 = 0;
  break;
 default:
  FUNC_1(1, "Bad endpoint state %u\n", VAR_9->com.state);
 }
 FUNC_13(&VAR_9->com.mutex);
 if (VAR_11)
  FUNC_3(VAR_9, 0, VAR_4);
 if (VAR_12)
  FUNC_16(VAR_9);
 FUNC_5(&VAR_9->com);
 return 0;
}
