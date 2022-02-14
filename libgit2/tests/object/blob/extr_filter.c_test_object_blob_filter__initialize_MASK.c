
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int * VAR_1 ;
 int * VAR_2 ;
 scalar_t__* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ,int ,size_t) ;
 scalar_t__ FUNC_3 (int ) ;

void FUNC_4(void)
{
 int VAR_5;

 VAR_4 = FUNC_1("empty_standard_repo");

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_3[VAR_5] < 0)
   VAR_3[VAR_5] = FUNC_3(VAR_2[VAR_5]);

  FUNC_0(FUNC_2(
   &VAR_1[VAR_5], VAR_4, VAR_2[VAR_5], (size_t)VAR_3[VAR_5]));
 }
}
