
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int sge_shift; void* sge_cnt; } ;
struct TYPE_7__ {int max_gs; int wqe_cnt; } ;
struct TYPE_6__ {scalar_t__ qp_type; } ;
struct hns_roce_qp {TYPE_5__ sge; TYPE_2__ sq; TYPE_1__ ibqp; } ;
struct TYPE_9__ {int max_sq_sg; void* max_extend_sg; } ;
struct hns_roce_dev {TYPE_4__ caps; TYPE_3__* pci_dev; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_8__ {int revision; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device*,char*,void*) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct hns_roce_dev *VAR_2,
    struct hns_roce_qp *VAR_3)
{
 struct device *VAR_4 = VAR_2->dev;

 if (VAR_3->sq.max_gs > 2) {
  VAR_3->sge.sge_cnt = FUNC_1(VAR_3->sq.wqe_cnt *
         (VAR_3->sq.max_gs - 2));
  VAR_3->sge.sge_shift = 4;
 }


 if (VAR_2->caps.max_sq_sg > 2 && VAR_3->ibqp.qp_type == VAR_1) {
  VAR_3->sge.sge_cnt = FUNC_1(VAR_3->sq.wqe_cnt *
         VAR_3->sq.max_gs);
  VAR_3->sge.sge_shift = 4;
 }

 if ((VAR_3->sq.max_gs > 2) && VAR_2->pci_dev->revision == 0x20) {
  if (VAR_3->sge.sge_cnt > VAR_2->caps.max_extend_sg) {
   FUNC_0(VAR_4, "The extended sge cnt error! sge_cnt=%d\n",
    VAR_3->sge.sge_cnt);
   return -VAR_0;
  }
 }

 return 0;
}
