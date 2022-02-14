
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u32 ;
struct hns_roce_eq {int cons_index; int event_type; int sub_type; int entries; int eqn; } ;
struct hns_roce_dev {struct device* dev; } ;
struct TYPE_9__ {int out_param; int status; int token; } ;
struct TYPE_8__ {int srq; } ;
struct TYPE_7__ {int cq; } ;
struct TYPE_6__ {int qp; } ;
struct TYPE_10__ {TYPE_4__ cmd; TYPE_3__ srq_event; TYPE_2__ cq_event; TYPE_1__ qp_event; } ;
struct hns_roce_aeqe {TYPE_5__ event; int asyn; } ;
struct device {int dummy; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*,int,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct hns_roce_dev*,int ,int ,int ) ;
 int FUNC_3 (struct hns_roce_dev*,void*,int) ;
 int FUNC_4 (struct hns_roce_dev*,void*,int) ;
 int FUNC_5 (struct hns_roce_dev*,void*,int) ;
 int FUNC_6 (struct hns_roce_dev*,struct hns_roce_eq*,void*,void*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct hns_roce_aeqe* FUNC_9 (struct hns_roce_eq*) ;
 void* FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (struct hns_roce_eq*) ;

__attribute__((used)) static int FUNC_12(struct hns_roce_dev *VAR_6,
          struct hns_roce_eq *VAR_7)
{
 struct device *VAR_8 = VAR_6->dev;
 struct hns_roce_aeqe *VAR_9 = FUNC_9(VAR_7);
 int VAR_10 = 0;
 int VAR_11;
 int VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15;

 while (VAR_9) {



  FUNC_1();

  VAR_11 = FUNC_10(VAR_9->asyn,
         VAR_2,
         VAR_3);
  VAR_12 = FUNC_10(VAR_9->asyn,
       VAR_4,
       VAR_5);
  VAR_14 = FUNC_10(VAR_9->event.qp_event.qp,
         VAR_0,
         VAR_1);
  VAR_15 = FUNC_10(VAR_9->event.cq_event.cq,
         VAR_0,
         VAR_1);
  VAR_13 = FUNC_10(VAR_9->event.srq_event.srq,
         VAR_0,
         VAR_1);

  switch (VAR_11) {
  case 134:
  case 133:
  case 142:
  case 132:
  case 128:
  case 130:
  case 137:
  case 136:
   FUNC_4(VAR_6, VAR_14, VAR_11);
   break;
  case 129:
  case 131:
   FUNC_5(VAR_6, VAR_13, VAR_11);
   break;
  case 141:
  case 140:
   FUNC_3(VAR_6, VAR_15, VAR_11);
   break;
  case 139:
   break;
  case 135:
   FUNC_2(VAR_6,
     FUNC_7(VAR_9->event.cmd.token),
     VAR_9->event.cmd.status,
     FUNC_8(VAR_9->event.cmd.out_param));
   break;
  case 143:
   break;
  case 138:
   break;
  default:
   FUNC_0(VAR_8, "Unhandled event %d on EQ %d at idx %u.\n",
    VAR_11, VAR_7->eqn, VAR_7->cons_index);
   break;
  }

  VAR_7->event_type = VAR_11;
  VAR_7->sub_type = VAR_12;
  ++VAR_7->cons_index;
  VAR_10 = 1;

  if (VAR_7->cons_index > (2 * VAR_7->entries - 1))
   VAR_7->cons_index = 0;

  FUNC_6(VAR_6, VAR_7, VAR_14, VAR_15);

  VAR_9 = FUNC_9(VAR_7);
 }

 FUNC_11(VAR_7);
 return VAR_10;
}
