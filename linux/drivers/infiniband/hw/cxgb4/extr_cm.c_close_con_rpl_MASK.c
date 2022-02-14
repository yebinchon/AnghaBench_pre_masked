
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct cpl_close_con_rpl {int dummy; } ;
struct c4iw_qp_attributes {int next_state; } ;
struct TYPE_4__ {int state; int mutex; TYPE_2__* qp; int cm_id; int history; } ;
struct c4iw_ep {TYPE_1__ com; int hwtid; } ;
struct c4iw_dev {int dummy; } ;
struct TYPE_5__ {int rhp; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 unsigned int FUNC_0 (struct cpl_close_con_rpl*) ;

 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ,TYPE_2__*,int ,struct c4iw_qp_attributes*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct c4iw_ep*,int ) ;
 struct cpl_close_con_rpl* FUNC_6 (struct sk_buff*) ;
 struct c4iw_ep* FUNC_7 (struct c4iw_dev*,unsigned int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,struct c4iw_ep*,int ) ;
 int FUNC_11 (struct c4iw_ep*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (struct c4iw_ep*) ;

__attribute__((used)) static int FUNC_14(struct c4iw_dev *VAR_3, struct sk_buff *VAR_4)
{
 struct c4iw_ep *VAR_5;
 struct c4iw_qp_attributes VAR_6;
 struct cpl_close_con_rpl *VAR_7 = FUNC_6(VAR_4);
 int VAR_8 = 0;
 unsigned int VAR_9 = FUNC_0(VAR_7);

 VAR_5 = FUNC_7(VAR_3, VAR_9);
 if (!VAR_5)
  return 0;

 FUNC_10("ep %p tid %u\n", VAR_5, VAR_5->hwtid);


 FUNC_8(&VAR_5->com.mutex);
 FUNC_12(VAR_2, &VAR_5->com.history);
 switch (VAR_5->com.state) {
 case 130:
  FUNC_2(&VAR_5->com, 128);
  break;
 case 128:
  (void)FUNC_13(VAR_5);
  if ((VAR_5->com.cm_id) && (VAR_5->com.qp)) {
   VAR_6.next_state = VAR_1;
   FUNC_3(VAR_5->com.qp->rhp,
          VAR_5->com.qp,
          VAR_0,
          &VAR_6, 1);
  }
  FUNC_5(VAR_5, 0);
  FUNC_2(&VAR_5->com, 129);
  VAR_8 = 1;
  break;
 case 131:
 case 129:
  break;
 default:
  FUNC_1(1, "Bad endpoint state %u\n", VAR_5->com.state);
  break;
 }
 FUNC_9(&VAR_5->com.mutex);
 if (VAR_8)
  FUNC_11(VAR_5);
 FUNC_4(&VAR_5->com);
 return 0;
}
