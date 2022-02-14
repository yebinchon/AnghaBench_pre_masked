
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun4i_tcon {int regs; } ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int,int) ;

void FUNC_3(struct sun4i_tcon *VAR_2, bool VAR_3)
{
 u32 VAR_4, VAR_5 = 0;

 FUNC_0("%sabling VBLANK interrupt\n", VAR_3 ? "En" : "Dis");

 VAR_4 = FUNC_1(0) |
  FUNC_1(1) |
  VAR_1;

 if (VAR_3)
  VAR_5 = VAR_4;

 FUNC_2(VAR_2->regs, VAR_0, VAR_4, VAR_5);
}
