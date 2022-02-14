
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned char,scalar_t__) ;

__attribute__((used)) static void FUNC_2(int VAR_8, int VAR_9)
{
 unsigned char VAR_10;
 unsigned VAR_11;

 FUNC_1(0x3, VAR_8 + VAR_5);
 FUNC_1(0, VAR_8 + VAR_4);
 FUNC_1(0, VAR_8 + VAR_3);
 FUNC_1(0x3, VAR_8 + VAR_6);

 VAR_11 = 115200 / VAR_9;
 VAR_10 = FUNC_0(VAR_8 + VAR_5);
 FUNC_1(VAR_10 | VAR_0, VAR_8 + VAR_5);
 FUNC_1(VAR_11 & 0xff, VAR_8 + VAR_2);
 FUNC_1((VAR_11 >> 8) & 0xff, VAR_8 + VAR_1);
 FUNC_1(VAR_10 & ~VAR_0, VAR_8 + VAR_5);

 VAR_7 = VAR_8;
}
