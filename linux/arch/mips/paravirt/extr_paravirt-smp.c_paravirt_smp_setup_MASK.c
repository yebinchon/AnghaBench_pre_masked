
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int* VAR_1 ;
 int* VAR_2 ;
 unsigned int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(void)
{
 int VAR_4;
 unsigned int VAR_5 = FUNC_1();

 if (FUNC_0(VAR_5 >= VAR_0))
  return;


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_2(VAR_4, VAR_4 == 0);
  FUNC_3(VAR_4, VAR_4 == 0);
 }
 VAR_2[VAR_5] = 0;
 VAR_1[0] = VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  FUNC_2(VAR_4, 1);
  FUNC_3(VAR_4, 1);
  VAR_2[VAR_4] = VAR_4;
  VAR_1[VAR_4] = VAR_4;
 }
}
