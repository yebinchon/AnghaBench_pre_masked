
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static int FUNC_0(u8 VAR_0)
{
 if (VAR_0 >= 0x02 && VAR_0 <= 0x07)
  return 3;
 else if (VAR_0 >= 0x08 && VAR_0 <= 0x18)
  return 4;
 else if (VAR_0 >= 0x20 && VAR_0 <= 0x2b)
  return 6;
 else if (VAR_0 >= 0x42 && VAR_0 <= 0x49)
  return 5;

 return 0;
}
