
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_dev {int dummy; } ;
struct hns_roce_cmq_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hns_roce_dev*,struct hns_roce_cmq_desc*,int) ;
 int FUNC_1 (struct hns_roce_dev*) ;

__attribute__((used)) static int FUNC_2(struct hns_roce_dev *VAR_3,
        struct hns_roce_cmq_desc *VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3);
 if (VAR_7 == VAR_1)
  return 0;
 if (VAR_7 == VAR_0)
  return -VAR_2;

 VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5);
 if (VAR_7) {
  VAR_6 = FUNC_1(VAR_3);
  if (VAR_6 == VAR_1)
   return 0;
  else if (VAR_6 == VAR_0)
   return -VAR_2;
 }

 return VAR_7;
}
