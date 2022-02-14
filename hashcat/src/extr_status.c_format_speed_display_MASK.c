
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;


 int* VAR_0 ;
 int FUNC_0 (char*,size_t,char*,double,...) ;

void FUNC_1 (double VAR_1, char *VAR_2, size_t VAR_3)
{
  if (VAR_1 <= 0)
  {
    VAR_2[0] = '0';
    VAR_2[1] = ' ';
    VAR_2[2] = 0;

    return;
  }

  u32 VAR_4 = 0;

  while (VAR_1 > 99999)
  {
    VAR_1 /= 1000;

    VAR_4++;
  }



  if (VAR_4 == 0)
  {
    FUNC_0 (VAR_2, VAR_3, "%.0f ", VAR_1);
  }
  else
  {
    FUNC_0 (VAR_2, VAR_3, "%.1f %c", VAR_1, VAR_0[VAR_4]);
  }
}
