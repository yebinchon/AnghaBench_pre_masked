
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long,scalar_t__) ;
 int FUNC_2 () ;

void FUNC_3(int VAR_2, unsigned int VAR_3)
{
 unsigned long VAR_4;

 if ((VAR_2 >= 0) && (VAR_2 <= 1)) {
  VAR_4 = FUNC_0(VAR_0 + VAR_1);
  VAR_4 &= ~(0xff << (8 * VAR_2));
  VAR_4 |= (VAR_3 & 0x7f) << (8 * VAR_2);
  FUNC_1(VAR_4, VAR_0 + VAR_1);
  FUNC_2();
 }
}
