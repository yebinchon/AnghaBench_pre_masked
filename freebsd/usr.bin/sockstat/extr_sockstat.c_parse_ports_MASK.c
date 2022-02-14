
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int,int) ;
 int FUNC_2 (char const) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int,char*) ;
 scalar_t__ FUNC_5 (char const) ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_6(const char *VAR_2)
{
 const char *VAR_3, *VAR_4;
 int VAR_5, VAR_6;

 if (VAR_1 == ((void*)0))
  if ((VAR_1 = FUNC_1(65536 / VAR_0, sizeof(int))) == ((void*)0))
   FUNC_3(1, "calloc()");
 VAR_3 = VAR_2;
 while (*VAR_3 != '\0') {
  if (!FUNC_5(*VAR_3))
   FUNC_4(1, "syntax error in port range");
  for (VAR_4 = VAR_3; *VAR_4 != '\0' && FUNC_5(*VAR_4); ++VAR_4)
                 ;
  for (VAR_5 = 0; VAR_3 < VAR_4; ++VAR_3)
   VAR_5 = VAR_5 * 10 + FUNC_2(*VAR_3);
  if (VAR_5 < 0 || VAR_5 > 65535)
   FUNC_4(1, "invalid port number");
  FUNC_0(VAR_5);
  switch (*VAR_3) {
  case '-':
   ++VAR_3;
   break;
  case ',':
   ++VAR_3;

  case '\0':
  default:
   continue;
  }
  for (VAR_4 = VAR_3; *VAR_4 != '\0' && FUNC_5(*VAR_4); ++VAR_4)
                 ;
  for (VAR_6 = 0; VAR_3 < VAR_4; ++VAR_3)
   VAR_6 = VAR_6 * 10 + FUNC_2(*VAR_3);
  if (VAR_6 < VAR_5 || VAR_6 > 65535)
   FUNC_4(1, "invalid port number");
  while (VAR_5++ < VAR_6)
   FUNC_0(VAR_5);
  if (*VAR_3 == ',')
   ++VAR_3;
 }
}
