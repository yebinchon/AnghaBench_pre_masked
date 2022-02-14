
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ib_udata {int dummy; } ;
struct ib_cq {int cqe; int device; } ;
struct TYPE_5__ {int cq_entry_sz; } ;
struct hns_roce_dev {TYPE_2__ caps; TYPE_1__* pdev; } ;
struct TYPE_6__ {int hr_buf; int hr_mtt; } ;
struct hns_roce_cq {TYPE_3__ hr_buf; int umem; int cqn; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct hns_roce_dev*,scalar_t__,int *) ;
 int FUNC_2 (struct hns_roce_dev*,struct hns_roce_cq*) ;
 int FUNC_3 (struct hns_roce_dev*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct hns_roce_dev*,int ) ;
 struct hns_roce_cq* FUNC_7 (struct ib_cq*) ;
 struct hns_roce_dev* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct ib_cq *VAR_6, struct ib_udata *VAR_7)
{
 struct hns_roce_dev *VAR_8 = FUNC_8(VAR_6->device);
 struct hns_roce_cq *VAR_9 = FUNC_7(VAR_6);
 struct device *VAR_10 = &VAR_8->pdev->dev;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 int VAR_14 = 0;

 FUNC_2(VAR_8, VAR_9);





 VAR_11 = FUNC_6(VAR_8, VAR_5);
 while (1) {
  if (FUNC_6(VAR_8, VAR_4) &
      VAR_0)
   break;

  VAR_12 = FUNC_6(VAR_8, VAR_5);
  if ((VAR_12 - VAR_11) >= VAR_3)
   break;

  FUNC_5(VAR_1);
  if (VAR_14 > VAR_2) {
   FUNC_0(VAR_10, "Destroy cq 0x%lx timeout!\n",
    VAR_9->cqn);
   break;
  }
  VAR_14++;
 }

 FUNC_3(VAR_8, &VAR_9->hr_buf.hr_mtt);

 FUNC_4(VAR_9->umem);
 if (!VAR_7) {

  VAR_13 = (VAR_6->cqe + 1) * VAR_8->caps.cq_entry_sz;
  FUNC_1(VAR_8, VAR_13, &VAR_9->hr_buf.hr_buf);
 }
}
