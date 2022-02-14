
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;

__attribute__((used)) static unsigned char FUNC_0(char *VAR_5)
{
 unsigned char VAR_6;

 if (VAR_5[4] & 0x40)
  VAR_6 = VAR_3;
 else if (VAR_5[4] & 0x01)
  VAR_6 = VAR_1;
 else if ((VAR_5[0] & 0x10) && !(VAR_5[4] & 0x43))
  VAR_6 = VAR_2;
 else if (VAR_5[1] == 0x00 && VAR_5[4] == 0x00)
  VAR_6 = VAR_0;
 else
  VAR_6 = VAR_4;

 return VAR_6;
}
