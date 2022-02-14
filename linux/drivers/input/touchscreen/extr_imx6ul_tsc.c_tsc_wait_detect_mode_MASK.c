
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx6ul_tsc {scalar_t__ tsc_regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static bool FUNC_4(struct imx6ul_tsc *VAR_3)
{
 unsigned long VAR_4 = VAR_2 + FUNC_0(2);
 u32 VAR_5;
 u32 VAR_6;

 do {
  if (FUNC_2(VAR_2, VAR_4))
   return 0;

  FUNC_3(200, 400);
  VAR_6 = FUNC_1(VAR_3->tsc_regs + VAR_1);
  VAR_5 = (VAR_6 >> 20) & 0x7;
 } while (VAR_5 != VAR_0);

 FUNC_3(200, 400);
 return 1;
}
