
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct bcma_device {int bus; } ;


 int FUNC_0 (struct bcma_device*,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int,unsigned long) ;
 int FUNC_4 (int) ;

__attribute__((used)) static bool FUNC_5(struct bcma_device *VAR_1, u16 VAR_2, u32 VAR_3,
     u32 VAR_4, int VAR_5)
{
 unsigned long VAR_6 = VAR_0 + VAR_5;
 u32 VAR_7;

 do {
  VAR_7 = FUNC_0(VAR_1, VAR_2);
  if ((VAR_7 & VAR_3) == VAR_4)
   return 1;
  FUNC_2();
  FUNC_4(10);
 } while (!FUNC_3(VAR_0, VAR_6));

 FUNC_1(VAR_1->bus, "Timeout waiting for register 0x%04X!\n", VAR_2);

 return 0;
}
