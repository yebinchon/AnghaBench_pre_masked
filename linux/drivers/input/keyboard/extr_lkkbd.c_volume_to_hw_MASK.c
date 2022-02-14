
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned char FUNC_0(int VAR_0)
{
 unsigned char VAR_1 = 0;

 if (VAR_0 < 0)
  VAR_0 = 0;
 if (VAR_0 > 100)
  VAR_0 = 100;

 if (VAR_0 >= 0)
  VAR_1 = 7;
 if (VAR_0 >= 13)
  VAR_1 = 6;
 if (VAR_0 >= 25)
  VAR_1 = 5;
 if (VAR_0 >= 38)
  VAR_1 = 4;
 if (VAR_0 >= 50)
  VAR_1 = 3;
 if (VAR_0 >= 63)
  VAR_1 = 2;
 if (VAR_0 >= 75)
  VAR_1 = 1;
 if (VAR_0 >= 88)
  VAR_1 = 0;

 VAR_1 |= 0x80;

 return VAR_1;
}
