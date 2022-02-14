
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,char const*,char const**,char const**,size_t*) ;
 char* FUNC_3 (char const*,size_t) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0, const char *VAR_1,
          const char **VAR_2, int *VAR_3)
{
 const char *VAR_4;
 char *VAR_5;
 size_t VAR_6;
 int VAR_7;

 if (!FUNC_2(VAR_0, VAR_1, VAR_2, &VAR_4, &VAR_6))
  return 0;

 if (!VAR_4) {
  *VAR_3 = 1;
  return 1;
 }

 VAR_5 = FUNC_3(VAR_4, VAR_6);
 VAR_7 = FUNC_1(VAR_5);
 FUNC_0(VAR_5);

 if (VAR_7 == -1)
  return 0;

 *VAR_3 = VAR_7;

 return 1;
}
