
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 double FUNC_1 (char const*,char**) ;

__attribute__((used)) static double
FUNC_2(const char *VAR_1)
{
 double VAR_2;
 char *VAR_3;

 VAR_2 = FUNC_1(VAR_1, &VAR_3);
 if (VAR_2 == 0 && VAR_3 == VAR_1)
  FUNC_0(125, "invalid duration");

 if (VAR_3 == ((void*)0) || *VAR_3 == '\0')
  return (VAR_2);

 if (VAR_3 != ((void*)0) && *(VAR_3 + 1) != '\0')
  FUNC_0(VAR_0, "invalid duration");

 switch (*VAR_3) {
 case 's':
  break;
 case 'm':
  VAR_2 *= 60;
  break;
 case 'h':
  VAR_2 *= 60 * 60;
  break;
 case 'd':
  VAR_2 *= 60 * 60 * 24;
  break;
 default:
  FUNC_0(125, "invalid duration");
 }

 if (VAR_2 < 0 || VAR_2 >= 100000000UL)
  FUNC_0(125, "invalid duration");

 return (VAR_2);
}
