
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;


 int FUNC_0 (scalar_t__*,scalar_t__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool
FUNC_1(u_long VAR_2)
{
 u_long VAR_3;

 VAR_3 = VAR_1;
 do {
  if (VAR_2 + VAR_3 > VAR_0)
   return (0);
 } while (!FUNC_0(&VAR_1, &VAR_3,
     VAR_2 + VAR_3));

 return (1);
}
