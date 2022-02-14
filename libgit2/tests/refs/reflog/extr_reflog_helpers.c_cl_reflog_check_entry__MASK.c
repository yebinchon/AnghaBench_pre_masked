
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_reflog_entry ;
typedef int git_reflog ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_buf ;
struct TYPE_2__ {char const* email; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int,char*,int *,int) ;
 int * FUNC_2 (int,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,char const*,char const*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *,char*,int *) ;
 scalar_t__ FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,char const*) ;
 int * FUNC_14 (int *,size_t) ;
 TYPE_1__* FUNC_15 (int const*) ;
 int * FUNC_16 (int const*) ;
 int * FUNC_17 (int const*) ;
 char* FUNC_18 (int const*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int **,int *,char const*) ;
 scalar_t__ FUNC_21 (int **,int *,char const*) ;
 scalar_t__ FUNC_22 (char const*,char const*) ;

void FUNC_23(git_repository *VAR_2, const char *VAR_3, size_t VAR_4,
 const char *VAR_5, const char *VAR_6,
 const char *VAR_7, const char *VAR_8, const char *VAR_9, int VAR_10)
{
 git_reflog *VAR_11;
 const git_reflog_entry *VAR_12;
 git_buf VAR_13 = VAR_0;

 FUNC_0(FUNC_20(&VAR_11, VAR_2, VAR_3));
 VAR_12 = FUNC_14(VAR_11, VAR_4);
 if (VAR_12 == ((void*)0))
  FUNC_1(VAR_9, VAR_10, "Reflog has no such entry", ((void*)0), 1);

 if (VAR_5) {
  git_object *VAR_14 = ((void*)0);
  if (FUNC_21(&VAR_14, VAR_2, VAR_5) == VAR_1) {
   if (FUNC_12(FUNC_10(VAR_14), FUNC_17(VAR_12)) != 0) {
    FUNC_11(&VAR_13, "\tOld OID: \"", FUNC_10(VAR_14));
    FUNC_11(&VAR_13, "\" != \"", FUNC_17(VAR_12));
    FUNC_8(&VAR_13, "\"\n");
   }
   FUNC_9(VAR_14);
  } else {
   git_oid *VAR_15 = FUNC_2(1, sizeof(*VAR_15));
   FUNC_13(VAR_15, VAR_5);
   if (FUNC_12(VAR_15, FUNC_17(VAR_12)) != 0) {
    FUNC_11(&VAR_13, "\tOld OID: \"", VAR_15);
    FUNC_11(&VAR_13, "\" != \"", FUNC_17(VAR_12));
    FUNC_8(&VAR_13, "\"\n");
   }
   FUNC_3(VAR_15);
  }
 }
 if (VAR_6) {
  git_object *VAR_16 = ((void*)0);
  if (FUNC_21(&VAR_16, VAR_2, VAR_6) == VAR_1) {
   if (FUNC_12(FUNC_10(VAR_16), FUNC_16(VAR_12)) != 0) {
    FUNC_11(&VAR_13, "\tNew OID: \"", FUNC_10(VAR_16));
    FUNC_11(&VAR_13, "\" != \"", FUNC_16(VAR_12));
    FUNC_8(&VAR_13, "\"\n");
   }
   FUNC_9(VAR_16);
  } else {
   git_oid *VAR_17 = FUNC_2(1, sizeof(*VAR_17));
   FUNC_13(VAR_17, VAR_6);
   if (FUNC_12(VAR_17, FUNC_16(VAR_12)) != 0) {
    FUNC_11(&VAR_13, "\tNew OID: \"", VAR_17);
    FUNC_11(&VAR_13, "\" != \"", FUNC_16(VAR_12));
    FUNC_8(&VAR_13, "\"\n");
   }
   FUNC_3(VAR_17);
  }
 }

 if (VAR_7 && FUNC_22(VAR_7, FUNC_15(VAR_12)->email) != 0)
  FUNC_7(&VAR_13, "\tEmail: \"%s\" != \"%s\"\n", VAR_7, FUNC_15(VAR_12)->email);

 if (VAR_8) {
  const char *VAR_18 = FUNC_18(VAR_12);
  if (VAR_18 == ((void*)0)) VAR_18 = "";

  if (VAR_18 && FUNC_22(VAR_8, VAR_18) != 0)
   FUNC_7(&VAR_13, "\tMessage: \"%s\" != \"%s\"\n", VAR_8, VAR_18);
 }
 if (FUNC_6(&VAR_13) != 0)
  FUNC_1(VAR_9, VAR_10, "Reflog entry mismatch", FUNC_4(&VAR_13), 1);

 FUNC_5(&VAR_13);
 FUNC_19(VAR_11);
}
