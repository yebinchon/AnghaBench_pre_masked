
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct hns_roce_dev {int ib_dev; int priv; } ;


 int FUNC_0 (struct hns_roce_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct hns_roce_dev* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct hns_roce_dev *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(VAR_1);
 FUNC_2(VAR_1->priv);
 FUNC_1(&VAR_1->ib_dev);

 return 0;
}
