
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_eq {scalar_t__ type_flag; struct hns_roce_dev* hr_dev; } ;
struct hns_roce_dev {int dummy; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct hns_roce_dev*,struct hns_roce_eq*) ;
 int FUNC_2 (struct hns_roce_dev*,struct hns_roce_eq*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct hns_roce_eq *VAR_3 = VAR_2;
 struct hns_roce_dev *VAR_4 = VAR_3->hr_dev;
 int VAR_5 = 0;

 if (VAR_3->type_flag == VAR_0)

  VAR_5 = FUNC_2(VAR_4, VAR_3);
 else

  VAR_5 = FUNC_1(VAR_4, VAR_3);

 return FUNC_0(VAR_5);
}
