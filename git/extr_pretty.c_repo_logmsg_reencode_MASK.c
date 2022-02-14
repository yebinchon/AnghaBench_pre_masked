
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct commit {int dummy; } ;


 int FUNC_0 (char*) ;
 char const* FUNC_1 (struct repository*,struct commit const*,int *) ;
 char* FUNC_2 (char const*,char*) ;
 char* FUNC_3 (char const*,char const*,char const*) ;
 char* FUNC_4 (char*,char const*) ;
 char* FUNC_5 (struct repository*,struct commit const*,int *) ;
 int FUNC_6 (struct repository*,struct commit const*,char const*) ;
 scalar_t__ FUNC_7 (char const*,char const*) ;
 char* FUNC_8 (char const*) ;

const char *FUNC_9(struct repository *VAR_0,
     const struct commit *VAR_1,
     char **VAR_2,
     const char *VAR_3)
{
 static const char *VAR_4 = "UTF-8";
 const char *VAR_5;
 char *VAR_6;
 const char *VAR_7 = FUNC_5(VAR_0, VAR_1, ((void*)0));
 char *VAR_8;

 if (!VAR_3 || !*VAR_3) {
  if (VAR_2)
   *VAR_2 = FUNC_2(VAR_7, "encoding");
  return VAR_7;
 }
 VAR_6 = FUNC_2(VAR_7, "encoding");
 if (VAR_2)
  *VAR_2 = VAR_6;
 VAR_5 = VAR_6 ? VAR_6 : VAR_4;
 if (FUNC_7(VAR_5, VAR_3)) {





  if (!VAR_6)
   return VAR_7;
  if (VAR_7 == FUNC_1(VAR_0, VAR_1, ((void*)0)))
   VAR_8 = FUNC_8(VAR_7);
  else
   VAR_8 = (char *)VAR_7;
 }
 else {






  VAR_8 = FUNC_3(VAR_7, VAR_3, VAR_5);
  if (VAR_8)
   FUNC_6(VAR_0, VAR_1, VAR_7);
 }





 if (VAR_8)
  VAR_8 = FUNC_4(VAR_8, VAR_3);

 if (!VAR_2)
  FUNC_0(VAR_6);




 return VAR_8 ? VAR_8 : VAR_7;
}
