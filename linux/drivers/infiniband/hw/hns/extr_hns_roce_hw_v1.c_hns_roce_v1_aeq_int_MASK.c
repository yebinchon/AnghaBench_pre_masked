
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct hns_roce_eq {int cons_index; int eqn; } ;
struct TYPE_10__ {int aeqe_depth; } ;
struct hns_roce_dev {TYPE_5__ caps; TYPE_1__* pdev; } ;
struct TYPE_8__ {int ceqe; } ;
struct TYPE_7__ {int out_param; int status; int token; } ;
struct TYPE_9__ {TYPE_3__ ce_event; TYPE_2__ cmd; } ;
struct hns_roce_aeqe {TYPE_4__ event; int asyn; } ;
struct device {int dummy; } ;
struct TYPE_6__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,struct hns_roce_aeqe*,int) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 () ;
 int FUNC_3 (struct hns_roce_dev*,int ,int ,int ) ;
 int FUNC_4 (struct hns_roce_dev*,struct hns_roce_aeqe*,int) ;
 int FUNC_5 (struct hns_roce_dev*,struct hns_roce_aeqe*) ;
 int FUNC_6 (struct hns_roce_dev*,struct hns_roce_aeqe*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct hns_roce_aeqe* FUNC_9 (struct hns_roce_eq*) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (struct hns_roce_eq*,int ) ;

__attribute__((used)) static int FUNC_12(struct hns_roce_dev *VAR_4,
          struct hns_roce_eq *VAR_5)
{
 struct device *VAR_6 = &VAR_4->pdev->dev;
 struct hns_roce_aeqe *VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 while ((VAR_7 = FUNC_9(VAR_5))) {




  FUNC_2();

  FUNC_0(VAR_6, "aeqe = %pK, aeqe->asyn.event_type = 0x%lx\n",
   VAR_7,
   FUNC_10(VAR_7->asyn,
           VAR_2,
           VAR_3));
  VAR_9 = FUNC_10(VAR_7->asyn,
         VAR_2,
         VAR_3);
  switch (VAR_9) {
  case 135:
   FUNC_1(VAR_6, "PATH MIG not supported\n");
   break;
  case 143:
   FUNC_1(VAR_6, "COMMUNICATION established\n");
   break;
  case 132:
   FUNC_1(VAR_6, "SQ DRAINED not supported\n");
   break;
  case 134:
   FUNC_1(VAR_6, "PATH MIG failed\n");
   break;
  case 138:
  case 128:
  case 137:
   FUNC_6(VAR_4, VAR_7, VAR_9);
   break;
  case 129:
  case 131:
  case 130:
   FUNC_1(VAR_6, "SRQ not support!\n");
   break;
  case 142:
  case 140:
  case 141:
   FUNC_4(VAR_4, VAR_7, VAR_9);
   break;
  case 133:
   FUNC_1(VAR_6, "port change.\n");
   break;
  case 136:
   FUNC_3(VAR_4,
        FUNC_7(VAR_7->event.cmd.token),
        VAR_7->event.cmd.status,
        FUNC_8(VAR_7->event.cmd.out_param
        ));
   break;
  case 139:
   FUNC_5(VAR_4, VAR_7);
   break;
  case 144:
   FUNC_1(VAR_6, "CEQ 0x%lx overflow.\n",
   FUNC_10(VAR_7->event.ce_event.ceqe,
         VAR_0,
         VAR_1));
   break;
  default:
   FUNC_1(VAR_6, "Unhandled event %d on EQ %d at idx %u.\n",
     VAR_9, VAR_5->eqn, VAR_5->cons_index);
   break;
  }

  VAR_5->cons_index++;
  VAR_8 = 1;

  if (VAR_5->cons_index > 2 * VAR_4->caps.aeqe_depth - 1) {
   FUNC_1(VAR_6, "cons_index overflow, set back to 0.\n");
   VAR_5->cons_index = 0;
  }
 }

 FUNC_11(VAR_5, 0);

 return VAR_8;
}
