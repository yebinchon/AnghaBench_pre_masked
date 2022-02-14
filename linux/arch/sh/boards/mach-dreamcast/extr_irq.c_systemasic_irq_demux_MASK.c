
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

int FUNC_1(int VAR_3)
{
 __u32 VAR_4, VAR_5, VAR_6, VAR_7;
 __u32 VAR_8, VAR_9;

 switch (VAR_3) {
 case 13:
  VAR_7 = 0;
  break;
 case 11:
  VAR_7 = 1;
  break;
 case 9:
  VAR_7 = 2;
  break;
 default:
  return VAR_3;
 }
 VAR_4 = VAR_0 + (VAR_7 << 4) + (VAR_7 << 2);
 VAR_5 = VAR_1 + (VAR_7 << 2);


 VAR_6 = FUNC_0(VAR_5);
 VAR_6 &= FUNC_0(VAR_4);


 for (VAR_9 = 1, VAR_8 = 0; VAR_8 < 32; VAR_9 <<= 1, VAR_8++) {
  if (VAR_6 & VAR_9) {
   VAR_3 = VAR_2 + VAR_8 + (VAR_7 << 5);
   return VAR_3;
  }
 }


 return VAR_3;
}
