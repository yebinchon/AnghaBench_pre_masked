
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct files_ref_store {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct strbuf VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct files_ref_store*,struct strbuf*,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (char*,int ,int*) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (struct strbuf*,char*,char*,...) ;
 char* FUNC_7 (struct strbuf*,int *) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct files_ref_store *VAR_7,
    const char *VAR_8, int VAR_9,
    int *VAR_10, struct strbuf *VAR_11)
{
 struct strbuf VAR_12 = VAR_4;
 char *VAR_13;

 FUNC_1(VAR_7, &VAR_12, VAR_8);
 VAR_13 = FUNC_7(&VAR_12, ((void*)0));

 if (VAR_9 || FUNC_5(VAR_8)) {
  if (FUNC_4(VAR_13, VAR_6, VAR_10)) {
   if (VAR_5 == VAR_1)
    FUNC_6(VAR_11, "unable to create directory for '%s': "
         "%s", VAR_13, FUNC_8(VAR_5));
   else if (VAR_5 == VAR_0)
    FUNC_6(VAR_11, "there are still logs under '%s'",
         VAR_13);
   else
    FUNC_6(VAR_11, "unable to append to '%s': %s",
         VAR_13, FUNC_8(VAR_5));

   goto error;
  }
 } else {
  *VAR_10 = FUNC_3(VAR_13, VAR_2 | VAR_3, 0666);
  if (*VAR_10 < 0) {
   if (VAR_5 == VAR_1 || VAR_5 == VAR_0) {






    ;
   } else {
    FUNC_6(VAR_11, "unable to append to '%s': %s",
         VAR_13, FUNC_8(VAR_5));
    goto error;
   }
  }
 }

 if (*VAR_10 >= 0)
  FUNC_0(VAR_13);

 FUNC_2(VAR_13);
 return 0;

error:
 FUNC_2(VAR_13);
 return -1;
}
