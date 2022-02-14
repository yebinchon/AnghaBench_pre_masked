
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*,int) ;
 char* FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_0, void **VAR_1, size_t *VAR_2)
{
 char *VAR_3;
 int VAR_4, VAR_5;

 VAR_4 = FUNC_5(VAR_0);
 VAR_5 = (VAR_4 + 3) / 4 * 3;
 VAR_3 = FUNC_1(VAR_5, 1);
 if (VAR_3 == ((void*)0))
  FUNC_3(1, "calloc");

 VAR_5 = FUNC_0(VAR_0, VAR_3, VAR_5);
 if (VAR_5 < 0) {
  FUNC_4("malformed base64 variable");
  FUNC_2(VAR_3);
  return (-1);
 }
 *VAR_1 = VAR_3;
 *VAR_2 = VAR_5;
 return (0);
}
