
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mcde_dsi {int dev; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct mcde_dsi *VAR_2)
{
 u32 VAR_3;
 int VAR_4;





 VAR_4 = 0;
 VAR_3 = VAR_1;
 while ((FUNC_1(VAR_2->regs + VAR_0) & VAR_3) == VAR_3) {

  FUNC_2(1000, 2000);
  if (VAR_4++ == 100) {
   FUNC_0(VAR_2->dev,
     "could not get out of command mode\n");
   return;
  }
 }
}
