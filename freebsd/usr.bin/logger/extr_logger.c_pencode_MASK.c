
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int,char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2(char *VAR_4)
{
 char *VAR_5;
 int VAR_6, VAR_7;

 for (VAR_5 = VAR_4; *VAR_4 && *VAR_4 != '.'; ++VAR_4);
 if (*VAR_4) {
  *VAR_4 = '\0';
  VAR_6 = FUNC_0(VAR_5, VAR_2);
  if (VAR_6 < 0)
   FUNC_1(1, "unknown facility name: %s", VAR_5);
  *VAR_4++ = '.';
 }
 else {
  VAR_6 = 0;
  VAR_4 = VAR_5;
 }
 VAR_7 = FUNC_0(VAR_4, VAR_3);
 if (VAR_7 < 0)
  FUNC_1(1, "unknown priority name: %s", VAR_5);
 return ((VAR_7 & VAR_1) | (VAR_6 & VAR_0));
}
