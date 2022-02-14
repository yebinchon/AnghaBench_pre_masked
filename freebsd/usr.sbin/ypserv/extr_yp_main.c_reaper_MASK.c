
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
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int*,int ,int *) ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(int VAR_5)
{
 int VAR_6;
 int VAR_7;

 VAR_7 = VAR_4;

 if (VAR_5 == VAR_1) {
  FUNC_1();



  VAR_4 = VAR_7;
  return;
 }

 if (VAR_5 == VAR_0) {
  while (FUNC_3(&VAR_6, VAR_2, ((void*)0)) > 0)
   VAR_3--;
 } else {
  FUNC_2();
  FUNC_0(0);
 }
 VAR_4 = VAR_7;
 return;
}
