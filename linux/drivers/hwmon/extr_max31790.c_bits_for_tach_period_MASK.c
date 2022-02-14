
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static u8 FUNC_0(int VAR_0)
{
 u8 VAR_1;

 if (VAR_0 < 500)
  VAR_1 = 0x0;
 else if (VAR_0 < 1000)
  VAR_1 = 0x1;
 else if (VAR_0 < 2000)
  VAR_1 = 0x2;
 else if (VAR_0 < 4000)
  VAR_1 = 0x3;
 else if (VAR_0 < 8000)
  VAR_1 = 0x4;
 else
  VAR_1 = 0x5;

 return VAR_1;
}
