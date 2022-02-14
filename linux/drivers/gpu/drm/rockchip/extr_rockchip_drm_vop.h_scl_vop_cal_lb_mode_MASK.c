
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline int FUNC_0(int VAR_5, bool VAR_6)
{
 int VAR_7;

 if (VAR_6) {
  if (VAR_5 > 1280)
   VAR_7 = VAR_4;
  else
   VAR_7 = VAR_3;
 } else {
  if (VAR_5 > 2560)
   VAR_7 = VAR_2;
  else if (VAR_5 > 1920)
   VAR_7 = VAR_1;
  else
   VAR_7 = VAR_0;
 }

 return VAR_7;
}
