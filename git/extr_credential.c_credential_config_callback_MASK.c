
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct credential {int use_http_path; scalar_t__ username; int helpers; } ;


 struct credential VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (struct credential*) ;
 int FUNC_2 (struct credential*,char*) ;
 int FUNC_3 (struct credential*,struct credential*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char const*,char const*) ;
 int FUNC_6 (char const*,char*,char const**) ;
 int FUNC_7 (char const*,char*) ;
 int FUNC_8 (int *,char const*) ;
 int FUNC_9 (int *,int ) ;
 char* FUNC_10 (char const*,char) ;
 char* FUNC_11 (char const*,int) ;
 scalar_t__ FUNC_12 (char const*) ;

__attribute__((used)) static int FUNC_13(const char *VAR_1, const char *VAR_2,
          void *VAR_3)
{
 struct credential *VAR_4 = VAR_3;
 const char *VAR_5, *VAR_6;

 if (!FUNC_6(VAR_1, "credential.", &VAR_5))
  return 0;

 if (!VAR_2)
  return FUNC_0(VAR_1);

 VAR_6 = FUNC_10(VAR_5, '.');
 if (VAR_6) {
  struct credential VAR_7 = VAR_0;
  char *VAR_8 = FUNC_11(VAR_5, VAR_6 - VAR_5);
  int VAR_9;

  FUNC_2(&VAR_7, VAR_8);
  VAR_9 = FUNC_3(&VAR_7, VAR_4);

  FUNC_1(&VAR_7);
  FUNC_4(VAR_8);

  if (!VAR_9)
   return 0;
  VAR_5 = VAR_6 + 1;
 }

 if (!FUNC_7(VAR_5, "helper")) {
  if (*VAR_2)
   FUNC_8(&VAR_4->helpers, VAR_2);
  else
   FUNC_9(&VAR_4->helpers, 0);
 } else if (!FUNC_7(VAR_5, "username")) {
  if (!VAR_4->username)
   VAR_4->username = FUNC_12(VAR_2);
 }
 else if (!FUNC_7(VAR_5, "usehttppath"))
  VAR_4->use_http_path = FUNC_5(VAR_1, VAR_2);

 return 0;
}
