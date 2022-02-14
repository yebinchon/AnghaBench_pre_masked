
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_v2_qp_context {int dummy; } ;
struct hns_roce_qp {int qpn; } ;
struct hns_roce_dev {int dummy; } ;
struct hns_roce_cmd_mailbox {int dma; int buf; } ;
typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hns_roce_cmd_mailbox*) ;
 int FUNC_1 (struct hns_roce_cmd_mailbox*) ;
 struct hns_roce_cmd_mailbox* FUNC_2 (struct hns_roce_dev*) ;
 int FUNC_3 (struct hns_roce_dev*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct hns_roce_dev*,struct hns_roce_cmd_mailbox*) ;
 int FUNC_5 (int ,struct hns_roce_v2_qp_context*,int) ;

__attribute__((used)) static int FUNC_6(struct hns_roce_dev *VAR_2,
     enum ib_qp_state VAR_3,
     enum ib_qp_state VAR_4,
     struct hns_roce_v2_qp_context *VAR_5,
     struct hns_roce_qp *VAR_6)
{
 struct hns_roce_cmd_mailbox *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_2);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 FUNC_5(VAR_7->buf, VAR_5, sizeof(*VAR_5) * 2);

 VAR_8 = FUNC_3(VAR_2, VAR_7->dma, 0, VAR_6->qpn, 0,
    VAR_0,
    VAR_1);

 FUNC_4(VAR_2, VAR_7);

 return VAR_8;
}
