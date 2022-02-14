
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_send_wr {unsigned long long wr_id; int opcode; int * sg_list; scalar_t__ send_flags; scalar_t__ num_sge; int * next; } ;
struct TYPE_4__ {int device; } ;
struct hns_roce_qp {TYPE_2__ ibqp; } ;
struct hns_roce_dev {TYPE_1__* pdev; } ;
struct device {int dummy; } ;
typedef int send_wr ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (TYPE_2__*,struct ib_send_wr*,struct ib_send_wr const**) ;
 int FUNC_2 (struct ib_send_wr*,int ,int) ;
 struct hns_roce_dev* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct hns_roce_qp *VAR_1)
{
 struct hns_roce_dev *VAR_2 = FUNC_3(VAR_1->ibqp.device);
 struct device *VAR_3 = &VAR_2->pdev->dev;
 struct ib_send_wr VAR_4;
 const struct ib_send_wr *VAR_5;
 int VAR_6;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.next = ((void*)0);
 VAR_4.num_sge = 0;
 VAR_4.send_flags = 0;
 VAR_4.sg_list = ((void*)0);
 VAR_4.wr_id = (unsigned long long)&VAR_4;
 VAR_4.opcode = VAR_0;

 VAR_6 = FUNC_1(&VAR_1->ibqp, &VAR_4, &VAR_5);
 if (VAR_6) {
  FUNC_0(VAR_3, "Post write wqe for mr free failed(%d)!", VAR_6);
  return VAR_6;
 }

 return 0;
}
