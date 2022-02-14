
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 unsigned long long VAR_1 ;
 int FUNC_0 (int,char*,char const*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,char*,char const*) ;
 unsigned long long FUNC_2 (char const*,char**,int) ;

__attribute__((used)) static unsigned long long
FUNC_3(const char *VAR_3)
{
 unsigned long long VAR_4;
 char *VAR_5;

 VAR_4 = FUNC_2(VAR_3, &VAR_5, 10);
 if (VAR_4 == VAR_1 && VAR_2 == VAR_0)
  FUNC_0(1, "%s", VAR_3);

 if (VAR_5[0] != '\0') {
  if (VAR_5[1] != '\0')
   FUNC_1(1, "invalid byte count: %s", VAR_3);
  if (VAR_5[0] == 'k' || VAR_5[0] == 'K')
   VAR_4 *= 1024;
  else if (VAR_5[0] == 'm' || VAR_5[0] == 'M')
   VAR_4 *= 1024 * 1024;
  else if (VAR_5[0] == 'g' || VAR_5[0] == 'G')
   VAR_4 *= 1024 * 1024 * 1024;
  else
   FUNC_1(1, "invalid byte count modifier: %s", VAR_3);
 }

 return (VAR_4);
}
