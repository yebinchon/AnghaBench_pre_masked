
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct highlander_i2c_dev {int dev; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct highlander_i2c_dev *VAR_4)
{
 unsigned long VAR_5;
 u16 VAR_6;

 VAR_5 = VAR_3 + FUNC_4(VAR_2);
 for (;;) {
  VAR_6 = FUNC_3(VAR_4->base + VAR_0);







  if (VAR_6 & VAR_1)
   return;
  if (FUNC_5(VAR_3, VAR_5))
   break;

  FUNC_1();
  FUNC_0();
 }

 FUNC_2(VAR_4->dev, "polling timed out\n");
}
