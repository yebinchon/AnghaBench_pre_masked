
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int dummy; } ;


 int FUNC_0 (struct parport*,unsigned char) ;
 int FUNC_1 (struct parport*,unsigned char) ;

__attribute__((used)) static void FUNC_2(struct parport *VAR_0, int VAR_1, unsigned char VAR_2, int VAR_3, int VAR_4)
{
 unsigned char VAR_5;

 switch (VAR_1) {
 case 1:
  VAR_5 = 0x80 | 0x30 | (VAR_3 ? 0x08 : 0) | (VAR_4 ? 0x04 : 0) | VAR_2;
  FUNC_1(VAR_0, VAR_5);
  break;
 case 2:
  VAR_5 = 0x40 | VAR_2 << 4 | (VAR_3 ? 0x08 : 0) | (VAR_4 ? 0x04 : 0) | 0x03;
  FUNC_1(VAR_0, VAR_5);
  break;
 case 0:
  VAR_5 = ((((VAR_2 & 2) ? 2 : 0) | ((VAR_2 & 1) ? 4 : 0)) ^ 0x02) | !VAR_3;
  FUNC_0(VAR_0, VAR_5);
  break;
 }
}
