
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_0(u32 VAR_10, u64 VAR_11)
{
 int VAR_12 = (int)(VAR_11 & VAR_10);
 int VAR_13 = VAR_11 >> 8;

 switch (VAR_13) {
 case 0:
  VAR_12 = VAR_1 + VAR_12;
  if (VAR_12 >= VAR_5 || VAR_12 <= VAR_4)
   return -VAR_0;
  break;
 case 1:
  VAR_12 = VAR_2 + VAR_12;
  if (VAR_12 >= VAR_7 || VAR_12 <= VAR_6)
   return -VAR_0;
  break;
 case 2:
  VAR_12 = VAR_3 + VAR_12;
  if (VAR_12 >= VAR_9 || VAR_12 <= VAR_8)
   return -VAR_0;
  break;
 default:
  return -VAR_0;
 }

 return VAR_12;
}
