
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_5 = 60000;

 while ((FUNC_0(VAR_3) & (VAR_2 | VAR_4 | VAR_1))
         != (VAR_1 | VAR_4) && VAR_5) {

  if (FUNC_1(VAR_3) & VAR_2) FUNC_1(VAR_0);

  FUNC_2(1);
  VAR_5--;
 }

 return !VAR_5;
}
