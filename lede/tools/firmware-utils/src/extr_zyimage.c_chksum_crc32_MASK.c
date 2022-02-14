
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u_int32_t ;
typedef int FILE ;


 unsigned long* VAR_0 ;
 int FUNC_0 (int *) ;
 unsigned long FUNC_1 (char*,int,int ,int *) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ) ;
 int VAR_1 ;

u_int32_t FUNC_4 (FILE *VAR_2)
{
  register unsigned long VAR_3;
  unsigned long VAR_4, VAR_5;
  char *VAR_6 = FUNC_3(VAR_1);
  char *VAR_7;

  VAR_3 = 0xFFFFFFFF;
  while (!FUNC_0(VAR_2))
  {
    VAR_5 = FUNC_1(VAR_6, 1, VAR_1, VAR_2);
    VAR_7 = VAR_6;
    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
      VAR_3 = ((VAR_3 >> 8) & 0x00FFFFFF) ^ VAR_0[(VAR_3 ^ *VAR_7++) & 0xFF];
  }
  FUNC_2(VAR_6);
  return VAR_3;
}
