
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
struct ahci_host_priv {scalar_t__ mmio; int * clks; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int FUNC_6 (unsigned long) ;
 unsigned long FUNC_7 (int ) ;
 int FUNC_8 (struct device*,char*) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct ahci_host_priv *VAR_3, struct device *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;
 u32 VAR_7;






 if (!VAR_3->clks[1]) {
  FUNC_8(VAR_4, "reference clock not supplied\n");
  return -VAR_2;
 }

 VAR_5 = FUNC_7(VAR_3->clks[1]);
 if ((VAR_5 % 100) != 0) {
  FUNC_8(VAR_4, "reference clock rate must be divisible by 100\n");
  return -VAR_2;
 }

 VAR_6 = FUNC_6(VAR_5);
 if (VAR_6 < 0) {
  FUNC_8(VAR_4, "can't calculate the MPY bits value\n");
  return -VAR_2;
 }


 VAR_7 = FUNC_2(VAR_6) | FUNC_1(1) |
       FUNC_3(4) | FUNC_4(1) |
       FUNC_5(3) | FUNC_0(1);
 FUNC_9(VAR_7, VAR_3->mmio + VAR_0);


 VAR_7 = FUNC_1(1) | FUNC_3(4) |
       FUNC_4(1) | FUNC_5(3);
 FUNC_9(VAR_7, VAR_3->mmio + VAR_1);

 return 0;
}
