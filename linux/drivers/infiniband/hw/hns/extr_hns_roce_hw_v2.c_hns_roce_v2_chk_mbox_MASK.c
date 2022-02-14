
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hns_roce_dev {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct hns_roce_dev*) ;
 scalar_t__ FUNC_3 (struct hns_roce_dev*) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct hns_roce_dev *VAR_4,
    unsigned long VAR_5)
{
 struct device *VAR_6 = VAR_4->dev;
 unsigned long VAR_7;
 u32 VAR_8;

 VAR_7 = FUNC_4(VAR_5) + VAR_3;
 while (FUNC_3(VAR_4) && FUNC_5(VAR_3, VAR_7))
  FUNC_0();

 if (FUNC_3(VAR_4)) {
  FUNC_1(VAR_6, "[cmd_poll]hw run cmd TIMEDOUT!\n");
  return -VAR_2;
 }

 VAR_8 = FUNC_2(VAR_4);
 if (VAR_8 != 0x1) {
  if (VAR_8 == VAR_0)
   return VAR_8;

  FUNC_1(VAR_6, "mailbox status 0x%x!\n", VAR_8);
  return -VAR_1;
 }

 return 0;
}
