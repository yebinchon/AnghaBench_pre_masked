
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * gf ;


 int FUNC_0 (int *,int *,int * const) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(gf VAR_0, const gf VAR_1)
{
  gf VAR_2;
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < 16; VAR_3++)
    VAR_2[VAR_3] = VAR_1[VAR_3];

  for (VAR_3 = 253; VAR_3 >= 0; VAR_3--)
  {
    FUNC_1(VAR_2, VAR_2);
    if(VAR_3 != 2 && VAR_3 != 4)
      FUNC_0(VAR_2, VAR_2, VAR_1);
  }

  for (VAR_3 = 0; VAR_3 < 16; VAR_3++)
    VAR_0[VAR_3] = VAR_2[VAR_3];
}
