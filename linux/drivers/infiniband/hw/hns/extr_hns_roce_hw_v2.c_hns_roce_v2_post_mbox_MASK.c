
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct hns_roce_dev {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct device*,char*,int,int) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct hns_roce_dev*,int ,int ,int ,int ,int ,int ,int) ;
 scalar_t__ FUNC_4 (struct hns_roce_dev*) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct hns_roce_dev *VAR_3, u64 VAR_4,
     u64 VAR_5, u32 VAR_6, u8 VAR_7,
     u16 VAR_8, u16 VAR_9, int VAR_10)
{
 struct device *VAR_11 = VAR_3->dev;
 unsigned long VAR_12;
 int VAR_13;

 VAR_12 = FUNC_5(VAR_1) + VAR_2;
 while (FUNC_4(VAR_3)) {
  if (FUNC_6(VAR_2, VAR_12)) {
   FUNC_1(VAR_11, "jiffies=%d end=%d\n", (int)VAR_2,
    (int)VAR_12);
   return -VAR_0;
  }
  FUNC_0();
 }

 VAR_13 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_7, VAR_8, VAR_9, VAR_10);
 if (VAR_13)
  FUNC_2(VAR_11, "Post mailbox fail(%d)\n", VAR_13);

 return VAR_13;
}
