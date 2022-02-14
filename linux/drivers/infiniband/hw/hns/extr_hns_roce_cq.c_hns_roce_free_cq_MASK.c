
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* eq; } ;
struct hns_roce_cq_table {int bitmap; int table; int array; } ;
struct hns_roce_dev {TYPE_2__ eq_table; struct device* dev; struct hns_roce_cq_table cq_table; } ;
struct hns_roce_cq {size_t vector; int cqn; int free; int refcount; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int irq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*,int,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (struct hns_roce_dev*,int *,int ) ;
 int FUNC_5 (struct hns_roce_dev*,int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;

void FUNC_9(struct hns_roce_dev *VAR_1, struct hns_roce_cq *VAR_2)
{
 struct hns_roce_cq_table *VAR_3 = &VAR_1->cq_table;
 struct device *VAR_4 = VAR_1->dev;
 int VAR_5;

 VAR_5 = FUNC_4(VAR_1, ((void*)0), VAR_2->cqn);
 if (VAR_5)
  FUNC_2(VAR_4, "HW2SW_CQ failed (%d) for CQN %06lx\n", VAR_5,
   VAR_2->cqn);

 FUNC_8(&VAR_3->array, VAR_2->cqn);


 FUNC_6(VAR_1->eq_table.eq[VAR_2->vector].irq);


 if (FUNC_0(&VAR_2->refcount))
  FUNC_1(&VAR_2->free);
 FUNC_7(&VAR_2->free);

 FUNC_5(VAR_1, &VAR_3->table, VAR_2->cqn);
 FUNC_3(&VAR_3->bitmap, VAR_2->cqn, VAR_0);
}
