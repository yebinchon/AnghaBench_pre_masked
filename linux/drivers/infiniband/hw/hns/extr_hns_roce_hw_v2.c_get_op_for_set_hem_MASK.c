
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hns_roce_dev {int dev; } ;


 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct hns_roce_dev *VAR_8, u32 VAR_9,
         int VAR_10)
{
 int VAR_11;

 if (VAR_9 == 129 && VAR_10)
  return -VAR_0;

 switch (VAR_9) {
 case 131:
  VAR_11 = VAR_4;
  break;
 case 132:
  VAR_11 = VAR_3;
  break;
 case 134:
  VAR_11 = VAR_1;
  break;
 case 128:
  VAR_11 = VAR_7;
  break;
 case 129:
  VAR_11 = VAR_6;
  break;
 case 130:
  VAR_11 = VAR_5;
  break;
 case 133:
  VAR_11 = VAR_2;
  break;
 default:
  FUNC_0(VAR_8->dev,
    "Table %d not to be written by mailbox!\n", VAR_9);
  return -VAR_0;
 }

 return VAR_11 + VAR_10;
}
