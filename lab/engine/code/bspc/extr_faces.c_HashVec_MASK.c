
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* vec3_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;

unsigned FUNC_1 (vec3_t VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = (4096 + (int)(VAR_1[0]+0.5)) >> 7;
 VAR_3 = (4096 + (int)(VAR_1[1]+0.5)) >> 7;

 if ( VAR_2 < 0 || VAR_2 >= VAR_0 || VAR_3 < 0 || VAR_3 >= VAR_0 )
  FUNC_0 ("HashVec: point outside valid range");

 return VAR_3*VAR_0 + VAR_2;
}
