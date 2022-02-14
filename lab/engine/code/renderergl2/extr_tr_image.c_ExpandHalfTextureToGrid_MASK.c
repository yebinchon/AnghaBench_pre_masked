
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int width ;
typedef int byte ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1( byte *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_4 = VAR_2 / 2; VAR_4 > 0; VAR_4--)
 {
  byte *VAR_5 = VAR_0 + ((VAR_4 * 2 - 1) * (VAR_1) - 2) * 4;
  byte *VAR_6 = VAR_0 + (VAR_4 * (VAR_1 / 2) - 1) * 4;

  for (VAR_3 = VAR_1 / 2; VAR_3 > 0; VAR_3--)
  {
   FUNC_0(VAR_5, VAR_6);

   VAR_5 -= 8;
   VAR_6 -= 4;
  }
 }
}
