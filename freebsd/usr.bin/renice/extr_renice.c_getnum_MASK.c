
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 scalar_t__ VAR_3 ;
 long FUNC_0 (char const*,char**,int) ;
 int FUNC_1 (char*,char const*,char const*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_4, const char *VAR_5, int *VAR_6)
{
 long VAR_7;
 char *VAR_8;

 VAR_3 = 0;
 VAR_7 = FUNC_0(VAR_5, &VAR_8, 10);
 if (VAR_7 < VAR_2 || VAR_7 > VAR_1 || VAR_3 == VAR_0) {
  FUNC_1("%s argument %s is out of range.", VAR_4, VAR_5);
  return (1);
 }
 if (VAR_8 == VAR_5 || *VAR_8 != '\0' || VAR_3 != 0) {
  FUNC_1("Bad %s argument: %s.", VAR_4, VAR_5);
  return (1);
 }

 *VAR_6 = (int)VAR_7;
 return (0);
}
