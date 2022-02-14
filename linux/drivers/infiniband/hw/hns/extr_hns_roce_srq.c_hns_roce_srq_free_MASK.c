
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_srq_table {int bitmap; int table; int xa; } ;
struct hns_roce_srq {int srqn; int free; int refcount; } ;
struct hns_roce_dev {int dev; struct hns_roce_srq_table srq_table; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (struct hns_roce_dev*,int *,int ) ;
 int FUNC_5 (struct hns_roce_dev*,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8(struct hns_roce_dev *VAR_1,
         struct hns_roce_srq *VAR_2)
{
 struct hns_roce_srq_table *VAR_3 = &VAR_1->srq_table;
 int VAR_4;

 VAR_4 = FUNC_4(VAR_1, ((void*)0), VAR_2->srqn);
 if (VAR_4)
  FUNC_2(VAR_1->dev, "HW2SW_SRQ failed (%d) for CQN %06lx\n",
   VAR_4, VAR_2->srqn);

 FUNC_7(&VAR_3->xa, VAR_2->srqn);

 if (FUNC_0(&VAR_2->refcount))
  FUNC_1(&VAR_2->free);
 FUNC_6(&VAR_2->free);

 FUNC_5(VAR_1, &VAR_3->table, VAR_2->srqn);
 FUNC_3(&VAR_3->bitmap, VAR_2->srqn, VAR_0);
}
