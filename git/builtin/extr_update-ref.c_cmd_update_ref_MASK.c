
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char const* buf; } ;
struct ref_transaction {int dummy; } ;
struct option {int dummy; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (char*) ;
 struct option FUNC_1 (char,char*,int*,int ) ;
 struct option FUNC_2 () ;
 struct option FUNC_3 (char,int *,int **,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,char const*,struct object_id*,int) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (char const*,struct object_id*) ;
 int FUNC_7 (int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (struct object_id*) ;
 char VAR_8 ;
 int * VAR_9 ;
 int FUNC_9 (struct object_id*) ;
 int FUNC_10 (int,char const**,char const*,struct option*,int ,int ) ;
 struct ref_transaction* FUNC_11 (struct strbuf*) ;
 scalar_t__ FUNC_12 (struct ref_transaction*,struct strbuf*) ;
 int FUNC_13 (struct ref_transaction*) ;
 int FUNC_14 (struct strbuf*) ;
 int VAR_10 ;
 int FUNC_15 (int *,char const*,struct object_id*,struct object_id*,int,int ) ;
 int FUNC_16 (struct ref_transaction*) ;
 int FUNC_17 (int ,struct option*) ;

int FUNC_18(int VAR_11, const char **VAR_12, const char *VAR_13)
{
 const char *VAR_14, *VAR_15;
 struct object_id VAR_16, VAR_17;
 int VAR_18 = 0, VAR_19 = 0, VAR_20 = 0, VAR_21 = 0;
 int VAR_22 = 0;
 struct option VAR_23[] = {
  FUNC_3( 'm', ((void*)0), &VAR_9, FUNC_0("reason"), FUNC_0("reason of the update")),
  FUNC_1('d', ((void*)0), &VAR_18, FUNC_0("delete the reference")),
  FUNC_1( 0 , "no-deref", &VAR_19,
     FUNC_0("update <refname> not the one it points to")),
  FUNC_1('z', ((void*)0), &VAR_21, FUNC_0("stdin has NUL-terminated arguments")),
  FUNC_1( 0 , "stdin", &VAR_20, FUNC_0("read updates from stdin")),
  FUNC_1( 0 , "create-reflog", &VAR_22, FUNC_0("create a reflog")),
  FUNC_2(),
 };

 FUNC_7(VAR_6, ((void*)0));
 VAR_11 = FUNC_10(VAR_11, VAR_12, VAR_13, VAR_23, VAR_7,
        0);
 if (VAR_9 && !*VAR_9)
  FUNC_5("Refusing to perform update with empty message.");

 VAR_4 = VAR_22 ? VAR_0 : 0;

 if (VAR_19) {
  VAR_5 = VAR_1;
  VAR_10 = VAR_5;
 }

 if (VAR_20) {
  struct strbuf VAR_24 = VAR_2;
  struct ref_transaction *VAR_25;

  VAR_25 = FUNC_11(&VAR_24);
  if (!VAR_25)
   FUNC_5("%s", VAR_24.buf);
  if (VAR_18 || VAR_11 > 0)
   FUNC_17(VAR_7, VAR_23);
  if (VAR_21)
   VAR_8 = '\0';
  FUNC_16(VAR_25);
  if (FUNC_12(VAR_25, &VAR_24))
   FUNC_5("%s", VAR_24.buf);
  FUNC_13(VAR_25);
  FUNC_14(&VAR_24);
  return 0;
 }

 if (VAR_21)
  FUNC_17(VAR_7, VAR_23);

 if (VAR_18) {
  if (VAR_11 < 1 || VAR_11 > 2)
   FUNC_17(VAR_7, VAR_23);
  VAR_14 = VAR_12[0];
  VAR_15 = VAR_12[1];
 } else {
  const char *VAR_26;
  if (VAR_11 < 2 || VAR_11 > 3)
   FUNC_17(VAR_7, VAR_23);
  VAR_14 = VAR_12[0];
  VAR_26 = VAR_12[1];
  VAR_15 = VAR_12[2];
  if (FUNC_6(VAR_26, &VAR_16))
   FUNC_5("%s: not a valid SHA1", VAR_26);
 }

 if (VAR_15) {
  if (!*VAR_15)




   FUNC_9(&VAR_17);
  else if (FUNC_6(VAR_15, &VAR_17))
   FUNC_5("%s: not a valid old SHA1", VAR_15);
 }

 if (VAR_18)




  return FUNC_4(VAR_9, VAR_14,
      (VAR_15 && !FUNC_8(&VAR_17)) ? &VAR_17 : ((void*)0),
      VAR_5);
 else
  return FUNC_15(VAR_9, VAR_14, &VAR_16, VAR_15 ? &VAR_17 : ((void*)0),
      VAR_5 | VAR_4,
      VAR_3);
}
