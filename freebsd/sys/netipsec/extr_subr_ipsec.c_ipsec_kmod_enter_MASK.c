
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int volatile*,int,int) ;

__attribute__((used)) static int
FUNC_1(volatile u_int *VAR_3)
{
 u_int VAR_4, VAR_5;

 do {
  VAR_4 = *VAR_3;
  if ((VAR_4 & VAR_1) == 0)
   return (VAR_0);
  VAR_5 = VAR_4 + VAR_2;
 } while(FUNC_0(VAR_3, VAR_4, VAR_5) == 0);
 return (0);
}
