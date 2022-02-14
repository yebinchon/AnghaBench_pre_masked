
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int*,int ,int *) ;

__attribute__((used)) static void FUNC_4(int VAR_7)
{
 int VAR_8;
 int VAR_9;

 VAR_9 = VAR_6;

 if (VAR_7 == VAR_1) {
  FUNC_1();
  VAR_6 = VAR_9;
  return;
 }

 if (VAR_7 == VAR_0) {
  while (FUNC_3(&VAR_8, VAR_2, ((void*)0)) > 0)
   VAR_5--;
 } else {
  (void) FUNC_2(VAR_3, VAR_4);
  FUNC_0(0);
 }

 VAR_6 = VAR_9;
 return;
}
