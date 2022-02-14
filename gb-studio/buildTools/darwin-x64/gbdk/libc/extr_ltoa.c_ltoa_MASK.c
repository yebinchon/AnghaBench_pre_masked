
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;


 int FUNC_0 (char*) ;

char *FUNC_1(long VAR_0, char *VAR_1)
{
  UINT8 VAR_2, VAR_3;

  if(VAR_0 < 0) {
    VAR_3 = 1;
    VAR_0 = -VAR_0;
  } else
    VAR_3 = 0;
  VAR_2 = 0;
  do {
    VAR_1[VAR_2++] = VAR_0 % 10 + '0';
  } while((VAR_0 = VAR_0/10) > 0);
  if(VAR_3)
    VAR_1[VAR_2++] = '-';
  VAR_1[VAR_2] = 0;
  FUNC_0(VAR_1);
  return VAR_1;
}
