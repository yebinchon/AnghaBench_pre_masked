
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int wqe_cnt; scalar_t__ offset; } ;
struct hns_roce_qp {scalar_t__ buff_size; int qpn; TYPE_1__ rq; } ;
struct hns_roce_dev {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int ) ;

__attribute__((used)) static bool FUNC_1(struct hns_roce_dev *VAR_1,
       struct hns_roce_qp *VAR_2, int VAR_3,
       u32 VAR_4)
{
 struct device *VAR_5 = VAR_1->dev;

 if (VAR_2->rq.wqe_cnt < 1)
  return 1;

 if (VAR_3 < 1) {
  FUNC_0(VAR_5, "qp(0x%lx) rqwqe buf ba find failed\n",
   VAR_2->qpn);
  return 0;
 }

 if (VAR_3 < VAR_0 &&
  (VAR_2->rq.offset + VAR_4) < VAR_2->buff_size) {
  FUNC_0(VAR_5, "qp(0x%lx) next rqwqe buf ba find failed\n",
   VAR_2->qpn);
  return 0;
 }

 return 1;
}
