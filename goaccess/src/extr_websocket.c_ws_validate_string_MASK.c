
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__*,char const*,int) ;

int
FUNC_2 (const char *VAR_2, int VAR_3)
{
  uint32_t VAR_4 = VAR_1;

  if (FUNC_1 (&VAR_4, VAR_2, VAR_3) == VAR_0) {
    FUNC_0 (("Invalid UTF8 data!\n"));
    return 1;
  }
  if (VAR_4 != VAR_1) {
    FUNC_0 (("Invalid UTF8 data!\n"));
    return 1;
  }

  return 0;
}
