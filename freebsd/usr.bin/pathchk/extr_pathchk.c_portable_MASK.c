
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long FUNC_0 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0)
{
 static const char VAR_1[] =
     "abcdefghijklmnopqrstuvwxyz"
     "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
     "0123456789._-";
 long VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_0[VAR_2] != '\0')
  return (0);

 return (1);
}
