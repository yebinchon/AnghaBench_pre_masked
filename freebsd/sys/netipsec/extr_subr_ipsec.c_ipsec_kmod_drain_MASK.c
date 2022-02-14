
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int volatile*,int,int) ;
 scalar_t__ FUNC_1 (int volatile*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void
FUNC_3(volatile u_int *VAR_2)
{
 u_int VAR_3, VAR_4;

 do {
  VAR_3 = *VAR_2;
  VAR_4 = VAR_3 & ~VAR_0;
 } while (FUNC_0(VAR_2, VAR_3, VAR_4) == 0);
 while (FUNC_1(VAR_2, 0, 0) == 0)
  FUNC_2("ipsecd", VAR_1/2);
}
