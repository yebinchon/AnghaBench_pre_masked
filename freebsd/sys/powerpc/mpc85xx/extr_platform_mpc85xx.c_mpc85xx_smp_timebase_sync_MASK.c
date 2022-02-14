
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int platform_t ;


 int FUNC_0 (int volatile*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 int volatile VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(platform_t VAR_2, u_long VAR_3, int VAR_4)
{
 static volatile bool VAR_5;
 static volatile int VAR_6;

 if (VAR_4) {

  while (!VAR_5)
   FUNC_1();
  FUNC_3(VAR_3);
  FUNC_0(&VAR_6, 1);
  while (VAR_6 < VAR_0)
   FUNC_1();
 } else {

  FUNC_2(VAR_1, 1);
  VAR_5 = 1;
  FUNC_3(VAR_3);
  FUNC_0(&VAR_6, 1);
  while (VAR_6 < VAR_0)
   FUNC_1();
  FUNC_2(VAR_1, 0);
 }
}
