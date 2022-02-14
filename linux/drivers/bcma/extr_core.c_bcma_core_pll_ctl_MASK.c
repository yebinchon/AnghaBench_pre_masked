
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct bcma_device {int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct bcma_device*,int ,int) ;
 int FUNC_3 (struct bcma_device*,int ) ;
 int FUNC_4 (struct bcma_device*,int ,int) ;
 int FUNC_5 (int) ;

void FUNC_6(struct bcma_device *VAR_3, u32 VAR_4, u32 VAR_5, bool VAR_6)
{
 u16 VAR_7;

 FUNC_0(VAR_4 & ~VAR_1);
 FUNC_0(VAR_5 & ~VAR_2);

 if (VAR_6) {
  FUNC_4(VAR_3, VAR_0, VAR_4);
  for (VAR_7 = 0; VAR_7 < 10000; VAR_7++) {
   if ((FUNC_3(VAR_3, VAR_0) & VAR_5) ==
       VAR_5) {
    VAR_7 = 0;
    break;
   }
   FUNC_5(10);
  }
  if (VAR_7)
   FUNC_1(VAR_3->bus, "PLL enable timeout\n");
 } else {





  FUNC_2(VAR_3, VAR_0, ~VAR_4);
  FUNC_3(VAR_3, VAR_0);
 }
}
