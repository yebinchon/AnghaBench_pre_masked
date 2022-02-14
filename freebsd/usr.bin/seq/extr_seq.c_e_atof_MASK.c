
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,char const*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*,char const*) ;
 double FUNC_2 (char const*,char**) ;

__attribute__((used)) static double
FUNC_3(const char *VAR_2)
{
 char *VAR_3;
 double VAR_4;

 VAR_1 = 0;
 VAR_4 = FUNC_2(VAR_2, &VAR_3);

 if (VAR_1 == VAR_0)

  FUNC_0(2, "%s", VAR_2);
 else if (*VAR_3 != '\0')

  FUNC_1(2, "invalid floating point argument: %s", VAR_2);


 if (VAR_4 == -0.0)
  VAR_4 = 0;
 return (VAR_4);
}
