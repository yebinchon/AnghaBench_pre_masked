
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef int longstring ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (scalar_t__*) ;
 char* FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (char*,int,char const*,int ) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(time_t VAR_3)
{
 char VAR_4[80];
 static time_t VAR_5;
 const char *VAR_6;
 static int VAR_7 = -1;





 if (VAR_5 == 0)
  VAR_5 = FUNC_4(((void*)0));


 if (VAR_3 + ((365 / 2) * 86400) > VAR_5 && VAR_3 < VAR_5 + ((365 / 2) * 86400))

  VAR_6 = VAR_7 ? "%e %b %R " : "%b %e %R ";
 else

  VAR_6 = VAR_7 ? "%e %b  %Y " : "%b %e  %Y ";
 FUNC_3(VAR_4, sizeof(VAR_4), VAR_6, FUNC_1(&VAR_3));
 FUNC_0(VAR_4, VAR_2);
}
