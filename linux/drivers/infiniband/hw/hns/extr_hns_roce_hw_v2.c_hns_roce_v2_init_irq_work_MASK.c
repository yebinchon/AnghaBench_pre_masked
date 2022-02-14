
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct hns_roce_work {int work; int sub_type; int event_type; void* cqn; void* qpn; struct hns_roce_dev* hr_dev; } ;
struct hns_roce_eq {int sub_type; int event_type; } ;
struct hns_roce_dev {int irq_workq; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 struct hns_roce_work* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct hns_roce_dev *VAR_2,
          struct hns_roce_eq *VAR_3,
          u32 VAR_4, u32 VAR_5)
{
 struct hns_roce_work *VAR_6;

 VAR_6 = FUNC_1(sizeof(struct hns_roce_work), VAR_0);
 if (!VAR_6)
  return;

 FUNC_0(&(VAR_6->work), VAR_1);
 VAR_6->hr_dev = VAR_2;
 VAR_6->qpn = VAR_4;
 VAR_6->cqn = VAR_5;
 VAR_6->event_type = VAR_3->event_type;
 VAR_6->sub_type = VAR_3->sub_type;
 FUNC_2(VAR_2->irq_workq, &(VAR_6->work));
}
