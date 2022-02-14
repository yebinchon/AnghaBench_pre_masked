
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static int FUNC_0(u32 VAR_0, u32 VAR_1, int VAR_2,
       unsigned int VAR_3)
{
 u32 VAR_4;

 VAR_4 = 0;
 switch (VAR_3) {
 case 1:
  VAR_4 = (VAR_0 & ~(0xff << ((VAR_2 & 3) << 3))) |
   (VAR_1 << ((VAR_2 & 3) << 3));
  break;
 case 2:
  VAR_4 = (VAR_0 & ~(0xffff << ((VAR_2 & 3) << 3))) |
   (VAR_1 << ((VAR_2 & 3) << 3));
  break;
 case 4:
  VAR_4 = VAR_1;
  break;
 }
 return VAR_4;
}
