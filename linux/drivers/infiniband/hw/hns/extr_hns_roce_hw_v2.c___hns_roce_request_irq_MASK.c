
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_eq_table {struct hns_roce_dev* eq; } ;
struct hns_roce_dev {scalar_t__* irq_names; int *** irq; int dev; struct hns_roce_eq_table eq_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int **,struct hns_roce_dev*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int **,int ,int ,scalar_t__,struct hns_roce_dev*) ;
 int FUNC_5 (char*,int ,char*,int) ;

__attribute__((used)) static int FUNC_6(struct hns_roce_dev *VAR_5, int VAR_6,
      int VAR_7, int VAR_8, int VAR_9)
{
 struct hns_roce_eq_table *VAR_10 = &VAR_5->eq_table;
 int VAR_11, VAR_12;
 int VAR_13;

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  VAR_5->irq_names[VAR_11] = FUNC_3(VAR_2,
            VAR_1);
  if (!VAR_5->irq_names[VAR_11]) {
   VAR_13 = -VAR_0;
   goto err_kzalloc_failed;
  }
 }


 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++)
  FUNC_5((char *)VAR_5->irq_names[VAR_12],
    VAR_2, "hns-abn-%d", VAR_12);

 for (VAR_12 = VAR_9; VAR_12 < (VAR_9 + VAR_8); VAR_12++)
  FUNC_5((char *)VAR_5->irq_names[VAR_12],
    VAR_2, "hns-aeq-%d",
    VAR_12 - VAR_9);

 for (VAR_12 = (VAR_9 + VAR_8); VAR_12 < VAR_6; VAR_12++)
  FUNC_5((char *)VAR_5->irq_names[VAR_12],
    VAR_2, "hns-ceq-%d",
    VAR_12 - VAR_9 - VAR_8);

 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  if (VAR_12 < VAR_9)
   VAR_13 = FUNC_4(VAR_5->irq[VAR_12],
       VAR_3,
       0, VAR_5->irq_names[VAR_12], VAR_5);

  else if (VAR_12 < (VAR_9 + VAR_7))
   VAR_13 = FUNC_4(*VAR_10->eq[VAR_12 - VAR_9].irq,
       VAR_4,
       0, VAR_5->irq_names[VAR_12 + VAR_8],
       &VAR_10->eq[VAR_12 - VAR_9]);
  else
   VAR_13 = FUNC_4(*VAR_10->eq[VAR_12 - VAR_9].irq,
       VAR_4,
       0, VAR_5->irq_names[VAR_12 - VAR_7],
       &VAR_10->eq[VAR_12 - VAR_9]);
  if (VAR_13) {
   FUNC_0(VAR_5->dev, "Request irq error!\n");
   goto err_request_failed;
  }
 }

 return 0;

err_request_failed:
 for (VAR_12 -= 1; VAR_12 >= 0; VAR_12--)
  if (VAR_12 < VAR_9)
   FUNC_1(VAR_5->irq[VAR_12], VAR_5);
  else
   FUNC_1(*VAR_10->eq[VAR_12 - VAR_9].irq,
     &VAR_10->eq[VAR_12 - VAR_9]);

err_kzalloc_failed:
 for (VAR_11 -= 1; VAR_11 >= 0; VAR_11--)
  FUNC_2(VAR_5->irq_names[VAR_11]);

 return VAR_13;
}
