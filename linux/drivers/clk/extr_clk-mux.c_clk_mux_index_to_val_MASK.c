
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef unsigned int u32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

unsigned int FUNC_0(u32 *VAR_2, unsigned int VAR_3, u8 VAR_4)
{
 unsigned int VAR_5 = VAR_4;

 if (VAR_2) {
  VAR_5 = VAR_2[VAR_4];
 } else {
  if (VAR_3 & VAR_0)
   VAR_5 = 1 << VAR_4;

  if (VAR_3 & VAR_1)
   VAR_5++;
 }

 return VAR_5;
}
