
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned char VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (scalar_t__,unsigned char) ;

void FUNC_2(void)
{
 unsigned char VAR_14 = VAR_10;
 unsigned int VAR_15 = FUNC_0(VAR_13);

 if (!VAR_12 || !VAR_13)
  return;

 FUNC_1(VAR_12 + VAR_5, VAR_14);
 FUNC_1(VAR_12 + VAR_11, 0);
 FUNC_1(VAR_12 + VAR_4, 0);

 VAR_14 |= VAR_9 | VAR_8 | VAR_7;

 FUNC_1(VAR_12 + VAR_5, VAR_14);

 FUNC_1(VAR_12 + VAR_5, VAR_14 | VAR_6);
 FUNC_1(VAR_12 + VAR_0, VAR_15 & 0xff);
 FUNC_1(VAR_12 + VAR_1, VAR_15 >> 8);
 FUNC_1(VAR_12 + VAR_5, VAR_14);
 FUNC_1(VAR_12 + VAR_2, VAR_3);
}
