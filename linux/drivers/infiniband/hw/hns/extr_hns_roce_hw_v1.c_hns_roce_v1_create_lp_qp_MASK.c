
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* max_send_wr; void* max_recv_wr; } ;
struct ib_qp_init_attr {TYPE_1__ cap; int sq_sig_type; int qp_type; } ;
struct ib_qp {int dummy; } ;
struct ib_pd {int dummy; } ;
struct hns_roce_qp {int dummy; } ;
struct hns_roce_dev {TYPE_2__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ib_qp*) ;
 int FUNC_1 (struct device*,char*) ;
 struct ib_qp* FUNC_2 (struct ib_pd*,struct ib_qp_init_attr*,int *) ;
 int FUNC_3 (struct ib_qp_init_attr*,int ,int) ;
 struct hns_roce_qp* FUNC_4 (struct ib_qp*) ;

__attribute__((used)) static struct hns_roce_qp *FUNC_5(struct hns_roce_dev *VAR_3,
          struct ib_pd *VAR_4)
{
 struct device *VAR_5 = &VAR_3->pdev->dev;
 struct ib_qp_init_attr VAR_6;
 struct ib_qp *VAR_7;

 FUNC_3(&VAR_6, 0, sizeof(struct ib_qp_init_attr));
 VAR_6.qp_type = VAR_1;
 VAR_6.sq_sig_type = VAR_2;
 VAR_6.cap.max_recv_wr = VAR_0;
 VAR_6.cap.max_send_wr = VAR_0;

 VAR_7 = FUNC_2(VAR_4, &VAR_6, ((void*)0));
 if (FUNC_0(VAR_7)) {
  FUNC_1(VAR_5, "Create loop qp for mr free failed!");
  return ((void*)0);
 }

 return FUNC_4(VAR_7);
}
