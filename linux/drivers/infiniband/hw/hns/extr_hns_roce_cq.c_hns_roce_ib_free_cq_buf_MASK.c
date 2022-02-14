
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cq_entry_sz; } ;
struct hns_roce_dev {TYPE_1__ caps; } ;
struct hns_roce_cq_buf {int hr_buf; } ;


 int FUNC_0 (struct hns_roce_dev*,int,int *) ;

__attribute__((used)) static void FUNC_1(struct hns_roce_dev *VAR_0,
        struct hns_roce_cq_buf *VAR_1, int VAR_2)
{
 FUNC_0(VAR_0, (VAR_2 + 1) * VAR_0->caps.cq_entry_sz,
     &VAR_1->hr_buf);
}
