
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct hns_roce_dev {TYPE_2__ caps; } ;
struct TYPE_4__ {int cqe; } ;
struct TYPE_6__ {int hr_mtt; } ;
struct hns_roce_cq {int db; TYPE_1__ ib_cq; TYPE_3__ hr_buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct hns_roce_dev*,int *) ;
 int FUNC_1 (struct hns_roce_dev*,TYPE_3__*,int ) ;
 int FUNC_2 (struct hns_roce_dev*,int *) ;

__attribute__((used)) static void FUNC_3(struct hns_roce_dev *VAR_1,
         struct hns_roce_cq *VAR_2)
{
 FUNC_2(VAR_1, &VAR_2->hr_buf.hr_mtt);
 FUNC_1(VAR_1, &VAR_2->hr_buf, VAR_2->ib_cq.cqe);

 if (VAR_1->caps.flags & VAR_0)
  FUNC_0(VAR_1, &VAR_2->db);
}
