
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (unsigned int) ;

__attribute__((used)) static char *
FUNC_1(const char *VAR_0, unsigned int VAR_1)
{
 char *VAR_2, *VAR_3;

 VAR_2 = FUNC_0(VAR_1 + 1);
 VAR_3 = VAR_2;
 do {
  *VAR_3++ = *VAR_0;
 } while (*VAR_0++);

 return (VAR_2);
}
