
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ stereoFrame_t ;
typedef int GLboolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

void FUNC_0(GLboolean *VAR_8, stereoFrame_t VAR_9, int VAR_10)
{
 VAR_8[0] = VAR_8[1] = VAR_8[2] = VAR_8[3] = VAR_1;

 if(VAR_10 > VAR_3)
 {
  if(VAR_9 == VAR_6)
   VAR_9 = VAR_7;
  else if(VAR_9 == VAR_7)
   VAR_9 = VAR_6;

  VAR_10 -= VAR_3;
 }

 if(VAR_10 == VAR_2)
 {
  if(VAR_9 == VAR_6)
   VAR_8[0] = VAR_8[2] = VAR_0;
  else if(VAR_9 == VAR_7)
   VAR_8[1] = VAR_0;
 }
 else
 {
  if(VAR_9 == VAR_6)
   VAR_8[1] = VAR_8[2] = VAR_0;
  else if(VAR_9 == VAR_7)
  {
   VAR_8[0] = VAR_0;

   if(VAR_10 == VAR_4)
    VAR_8[1] = VAR_0;
   else if(VAR_10 == VAR_5)
    VAR_8[2] = VAR_0;
  }
 }
}
