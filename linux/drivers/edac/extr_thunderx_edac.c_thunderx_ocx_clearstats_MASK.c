
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thunderx_ocx {scalar_t__ regs; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct thunderx_ocx *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_7 = FUNC_2(VAR_4->regs + FUNC_0(VAR_5));
  VAR_7 |= VAR_1;
  VAR_7 &= ~VAR_0;
  FUNC_3(VAR_7, VAR_4->regs + FUNC_0(VAR_5));

  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
   FUNC_2(VAR_4->regs + FUNC_1(VAR_5, VAR_6));
 }
}
