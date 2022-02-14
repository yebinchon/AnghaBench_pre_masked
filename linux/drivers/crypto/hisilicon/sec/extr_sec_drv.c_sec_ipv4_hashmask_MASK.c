
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sec_dev_info {scalar_t__* regs; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct sec_dev_info *VAR_4, u32 VAR_5)
{
 if (VAR_5 & VAR_1) {
  FUNC_0(VAR_4->dev, "Sec Ipv4 Hash Mask Input Error!\n ");
  return -VAR_0;
 }

 FUNC_1(VAR_5,
         VAR_4->regs[VAR_3] + VAR_2);

 return 0;
}
