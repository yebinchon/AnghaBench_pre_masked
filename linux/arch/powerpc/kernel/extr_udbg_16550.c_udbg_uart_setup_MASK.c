
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;

void FUNC_1(unsigned int VAR_7, unsigned int VAR_8)
{
 unsigned int VAR_9, VAR_10;

 if (!&FUNC_0)
  return;

 if (VAR_8 == 0)
  VAR_8 = 1843200;
 if (VAR_7 == 0)
  VAR_7 = 9600;

 VAR_10 = VAR_8 / 16;
 VAR_9 = VAR_10 / VAR_7;

 FUNC_0(VAR_5, 0x00);
 FUNC_0(VAR_4, 0xff);
 FUNC_0(VAR_4, 0x00);
 FUNC_0(VAR_5, VAR_0);
 FUNC_0(VAR_1, VAR_9 & 0xff);
 FUNC_0(VAR_2, VAR_9 >> 8);

 FUNC_0(VAR_5, 0x3);

 FUNC_0(VAR_6, 0x3);

 FUNC_0(VAR_3, 0x7);
}
