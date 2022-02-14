
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 char* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int,char const*,int) ;

int
FUNC_4 (int VAR_0, int VAR_1, const char *VAR_2, int VAR_3)
{
  char *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);

  VAR_4 = FUNC_0 (sizeof (uint32_t) * 3, sizeof (char));

  VAR_5 = VAR_4;
  VAR_5 += FUNC_2 (VAR_5, VAR_1);
  VAR_5 += FUNC_2 (VAR_5, 0x01);
  VAR_5 += FUNC_2 (VAR_5, VAR_3);

  FUNC_3 (VAR_0, VAR_4, sizeof (uint32_t) * 3);
  FUNC_3 (VAR_0, VAR_2, VAR_3);
  FUNC_1 (VAR_4);

  return 0;
}
