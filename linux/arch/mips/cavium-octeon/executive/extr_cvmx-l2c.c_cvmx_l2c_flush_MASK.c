
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

void FUNC_6(void)
{
 uint64_t VAR_4, VAR_5;
 uint64_t VAR_6, VAR_7;

 VAR_7 = FUNC_5();
 VAR_6 = FUNC_4();

 if (FUNC_2(VAR_3)) {
  uint64_t VAR_8;

  int VAR_9 = VAR_1;
  int VAR_10 = VAR_0;

  for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
   for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
    VAR_8 = FUNC_0(VAR_2,
             (VAR_4 << VAR_9) | (VAR_5 << VAR_10));
    FUNC_1(VAR_8, 0);
   }
  }
 } else {
  for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++)
   for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++)
    FUNC_3(VAR_4, VAR_5);
 }
}
