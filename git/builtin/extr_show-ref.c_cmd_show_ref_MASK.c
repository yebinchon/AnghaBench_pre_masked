
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;
 int FUNC_3 (int ,int *) ;
 int VAR_3 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int,char const**,char const*,int ,int ,int ) ;
 char const** VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (char const*,struct object_id*) ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (char const*,struct object_id*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int FUNC_9 (char const*,char*) ;
 scalar_t__ VAR_10 ;

int FUNC_10(int VAR_11, const char **VAR_12, const char *VAR_13)
{
 FUNC_3(VAR_3, ((void*)0));

 VAR_11 = FUNC_5(VAR_11, VAR_12, VAR_13, VAR_8,
        VAR_9, 0);

 if (VAR_0)
  return FUNC_1(VAR_1);

 VAR_4 = VAR_12;
 if (!*VAR_4)
  VAR_4 = ((void*)0);

 if (VAR_10) {
  if (!VAR_4)
   FUNC_0("--verify requires a reference");
  while (*VAR_4) {
   struct object_id VAR_14;

   if ((FUNC_8(*VAR_4, "refs/") || !FUNC_9(*VAR_4, "HEAD")) &&
       !FUNC_6(*VAR_4, &VAR_14)) {
    FUNC_7(*VAR_4, &VAR_14);
   }
   else if (!VAR_5)
    FUNC_0("'%s' - not a valid ref", *VAR_4);
   else
    return 1;
   VAR_4++;
  }
  return 0;
 }

 if (VAR_6)
  FUNC_4(VAR_7, ((void*)0));
 FUNC_2(VAR_7, ((void*)0));
 if (!VAR_2) {
  if (VAR_10 && !VAR_5)
   FUNC_0("No match");
  return 1;
 }
 return 0;
}
