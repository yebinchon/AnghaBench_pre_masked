
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
FUNC_4 (int VAR_0, const char *VAR_1, int VAR_2)
{
  char *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);

  VAR_3 = FUNC_0 (sizeof (uint32_t) * 3, sizeof (char));

  VAR_4 = VAR_3;
  VAR_4 += FUNC_2 (VAR_4, 0);
  VAR_4 += FUNC_2 (VAR_4, 0x01);
  VAR_4 += FUNC_2 (VAR_4, VAR_2);

  FUNC_3 (VAR_0, VAR_3, sizeof (uint32_t) * 3);
  FUNC_3 (VAR_0, VAR_1, VAR_2);
  FUNC_1 (VAR_3);

  return 0;
}
