
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int VAR_1 ;
 long FUNC_2 (char const*,int *,int ) ;

int FUNC_3(int VAR_2, const char **VAR_3)
{
 unsigned long VAR_4, VAR_5 = 0;
 unsigned char *VAR_6;

 if (VAR_2 < 2 || VAR_2 > 3) {
  FUNC_0(VAR_1, "usage: %s <seed_string> [<size>]\n", VAR_3[0]);
  return 1;
 }

 VAR_6 = (unsigned char *) VAR_3[1];
 do {
  VAR_5 = VAR_5 * 11 + *VAR_6;
 } while (*VAR_6++);

 VAR_4 = (VAR_2 == 3) ? FUNC_2(VAR_3[2], ((void*)0), 0) : -1L;

 while (VAR_4--) {
  VAR_5 = VAR_5 * 1103515245 + 12345;
  if (FUNC_1((VAR_5 >> 16) & 0xff) == VAR_0)
   return -1;
 }

 return 0;
}
