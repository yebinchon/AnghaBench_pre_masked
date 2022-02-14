
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__*** VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_4;

 FUNC_1(&VAR_3);
 VAR_0 = 0;



 for (VAR_4 = 0; VAR_2[VAR_4][0][0]; VAR_4++) {
  FUNC_2(VAR_2[VAR_4][0],
          VAR_2[VAR_4][1],
          VAR_2[VAR_4][2],
          VAR_2[VAR_4][3]);
 }

 FUNC_0();
 VAR_1 = 1;
}
