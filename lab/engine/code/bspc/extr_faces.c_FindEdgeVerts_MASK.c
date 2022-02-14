
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* vec3_t ;


 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;

void FUNC_0 (vec3_t VAR_6, vec3_t VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14;
 int VAR_15;
 VAR_8 = (4096 + (int)(VAR_6[0]+0.5)) >> 7;
 VAR_10 = (4096 + (int)(VAR_6[1]+0.5)) >> 7;
 VAR_9 = (4096 + (int)(VAR_7[0]+0.5)) >> 7;
 VAR_11 = (4096 + (int)(VAR_7[1]+0.5)) >> 7;

 if (VAR_8 > VAR_9)
 {
  VAR_12 = VAR_8;
  VAR_8 = VAR_9;
  VAR_9 = VAR_12;
 }
 if (VAR_10 > VAR_11)
 {
  VAR_12 = VAR_10;
  VAR_10 = VAR_11;
  VAR_11 = VAR_12;
 }
 VAR_3 = 0;
 for (VAR_13=VAR_8 ; VAR_13 <= VAR_9 ; VAR_13++)
 {
  for (VAR_14=VAR_10 ; VAR_14 <= VAR_11 ; VAR_14++)
  {
   for (VAR_15=VAR_2[VAR_14*VAR_0+VAR_13] ; VAR_15 ; VAR_15=VAR_5[VAR_15])
   {
    VAR_1[VAR_3++] = VAR_15;
   }
  }
 }
}
