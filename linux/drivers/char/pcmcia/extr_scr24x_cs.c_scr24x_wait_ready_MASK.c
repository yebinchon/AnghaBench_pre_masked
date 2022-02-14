
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct scr24x_dev {scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct scr24x_dev *VAR_3)
{
 u_char VAR_4;
 int VAR_5 = 100;

 do {
  VAR_4 = FUNC_0(VAR_3->regs + VAR_1);
  if (!(VAR_4 & VAR_2))
   return 0;

  FUNC_1(20);
 } while (--VAR_5);

 return -VAR_0;
}
