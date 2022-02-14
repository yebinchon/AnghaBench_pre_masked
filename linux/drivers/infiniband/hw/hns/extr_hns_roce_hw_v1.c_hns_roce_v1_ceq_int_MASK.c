
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct hns_roce_eq {int cons_index; TYPE_3__* hr_dev; } ;
struct TYPE_4__ {int ceqe_depth; } ;
struct hns_roce_dev {TYPE_1__ caps; } ;
struct hns_roce_ceqe {int comp; } ;
struct TYPE_6__ {TYPE_2__* pdev; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct hns_roce_dev*,int ) ;
 struct hns_roce_ceqe* FUNC_3 (struct hns_roce_eq*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct hns_roce_eq*,int ) ;

__attribute__((used)) static int FUNC_6(struct hns_roce_dev *VAR_3,
          struct hns_roce_eq *VAR_4)
{
 struct hns_roce_ceqe *VAR_5;
 int VAR_6 = 0;
 u32 VAR_7;

 while ((VAR_5 = FUNC_3(VAR_4))) {




  FUNC_1();

  VAR_7 = FUNC_4(VAR_5->comp,
         VAR_1,
         VAR_2);
  FUNC_2(VAR_3, VAR_7);

  ++VAR_4->cons_index;
  VAR_6 = 1;

  if (VAR_4->cons_index >
      VAR_0 * VAR_3->caps.ceqe_depth - 1) {
   FUNC_0(&VAR_4->hr_dev->pdev->dev,
    "cons_index overflow, set back to 0.\n");
   VAR_4->cons_index = 0;
  }
 }

 FUNC_5(VAR_4, 0);

 return VAR_6;
}
