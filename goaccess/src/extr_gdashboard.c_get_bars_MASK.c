
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (float,char) ;
 int FUNC_1 (int ,int,int) ;
 int VAR_0 ;

__attribute__((used)) static char *
FUNC_2 (int VAR_1, int VAR_2, int VAR_3)
{
  int VAR_4, VAR_5;
  float VAR_6 = 0.0;

  FUNC_1 (VAR_0, VAR_5, VAR_4);
  (void) VAR_5;

  VAR_6 = ((((float) VAR_1) / VAR_2));
  VAR_6 *= (VAR_4 - VAR_3);
  if (VAR_6 < 1)
    VAR_6 = 1;
  return FUNC_0 (VAR_6, '|');
}
