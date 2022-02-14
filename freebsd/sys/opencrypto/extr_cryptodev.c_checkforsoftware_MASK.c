
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(int *VAR_4)
{
 int VAR_5;

 VAR_5 = *VAR_4;

 if (!VAR_3) {
  if (VAR_5 & VAR_1) {
   if (VAR_5 & VAR_0) {
    *VAR_4 = VAR_0;
    return 0;
   }
   return VAR_2;
  }
  if ((VAR_5 & VAR_0) == 0 &&
      (FUNC_0(VAR_5) & VAR_0) == 0)
   return VAR_2;
 }
 return 0;
}
