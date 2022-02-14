
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 unsigned char VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned char,scalar_t__) ;

int FUNC_2(unsigned int VAR_6)
{
 int VAR_7;
 unsigned char VAR_8;

 if (VAR_6 >= 8) return -1;

 VAR_7 = (VAR_6 & 0x03) << 2;

 VAR_8 = FUNC_0(VAR_0);
 VAR_8 = VAR_6 | VAR_2 | VAR_3;
 FUNC_1(VAR_8, VAR_0);

 do {
  VAR_8 = FUNC_0(VAR_0);
 } while ((VAR_8 & VAR_1) == 0);

 VAR_8 &= ~(VAR_1 | VAR_2);
 FUNC_1(VAR_8, VAR_0);

 return (((FUNC_0(VAR_4 + VAR_7) << 8) |
  FUNC_0(VAR_5 + VAR_7)) >> 6);
}
