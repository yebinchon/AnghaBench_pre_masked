
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mw {int device; } ;
struct hns_roce_mw {int dummy; } ;
struct hns_roce_dev {int dummy; } ;


 int FUNC_0 (struct hns_roce_dev*,struct hns_roce_mw*) ;
 int FUNC_1 (struct hns_roce_mw*) ;
 struct hns_roce_dev* FUNC_2 (int ) ;
 struct hns_roce_mw* FUNC_3 (struct ib_mw*) ;

int FUNC_4(struct ib_mw *VAR_0)
{
 struct hns_roce_dev *VAR_1 = FUNC_2(VAR_0->device);
 struct hns_roce_mw *VAR_2 = FUNC_3(VAR_0);

 FUNC_0(VAR_1, VAR_2);
 FUNC_1(VAR_2);

 return 0;
}
