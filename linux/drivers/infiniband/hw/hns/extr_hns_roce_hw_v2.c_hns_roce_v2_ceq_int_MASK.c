
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hns_roce_eq {int cons_index; int entries; } ;
struct hns_roce_dev {struct device* dev; } ;
struct hns_roce_ceqe {int comp; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct hns_roce_dev*,int ) ;
 struct hns_roce_ceqe* FUNC_3 (struct hns_roce_eq*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct hns_roce_eq*) ;

__attribute__((used)) static int FUNC_6(struct hns_roce_dev *VAR_3,
          struct hns_roce_eq *VAR_4)
{
 struct device *VAR_5 = VAR_3->dev;
 struct hns_roce_ceqe *VAR_6 = FUNC_3(VAR_4);
 int VAR_7 = 0;
 u32 VAR_8;

 while (VAR_6) {



  FUNC_1();

  VAR_8 = FUNC_4(VAR_6->comp,
         VAR_1,
         VAR_2);

  FUNC_2(VAR_3, VAR_8);

  ++VAR_4->cons_index;
  VAR_7 = 1;

  if (VAR_4->cons_index > (VAR_0 * VAR_4->entries - 1)) {
   FUNC_0(VAR_5, "cons_index overflow, set back to 0.\n");
   VAR_4->cons_index = 0;
  }

  VAR_6 = FUNC_3(VAR_4);
 }

 FUNC_5(VAR_4);

 return VAR_7;
}
