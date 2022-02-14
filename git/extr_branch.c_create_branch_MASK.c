
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {char const* buf; } ;
struct repository {int dummy; } ;
struct ref_transaction {int dummy; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; } ;
typedef enum branch_track { ____Placeholder_branch_track } branch_track ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;
 char* FUNC_0 (char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*,int ,struct object_id*,char**) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char const*,struct object_id*) ;
 int VAR_5 ;
 struct commit* FUNC_8 (struct repository*,struct object_id*) ;
 int VAR_6 ;
 int FUNC_9 (struct object_id*,int *) ;
 struct ref_transaction* FUNC_10 (struct strbuf*) ;
 scalar_t__ FUNC_11 (struct ref_transaction*,struct strbuf*) ;
 int FUNC_12 (struct ref_transaction*) ;
 scalar_t__ FUNC_13 (struct ref_transaction*,char const*,struct object_id*,int *,int ,char*,struct strbuf*) ;
 int FUNC_14 (char const*,char*,int,int) ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 (struct strbuf*) ;
 int FUNC_17 (char const*) ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 scalar_t__ FUNC_18 (char const*,struct strbuf*) ;
 scalar_t__ FUNC_19 (char const*,struct strbuf*,int) ;
 int FUNC_20 (char*) ;
 char* FUNC_21 (char*,char const*) ;

void FUNC_22(struct repository *VAR_10,
     const char *VAR_11, const char *VAR_12,
     int VAR_13, int VAR_14, int VAR_15,
     int VAR_16, enum branch_track VAR_17)
{
 struct commit *VAR_18;
 struct object_id VAR_19;
 char *VAR_20;
 struct strbuf VAR_21 = VAR_3;
 int VAR_22 = 0;
 int VAR_23 = 0;
 int VAR_24 = 0;

 if (VAR_17 == VAR_0 || VAR_17 == VAR_1)
  VAR_24 = 1;

 if ((VAR_17 == VAR_1 || VAR_14)
     ? FUNC_18(VAR_11, &VAR_21)
     : FUNC_19(VAR_11, &VAR_21, VAR_13)) {
  if (!VAR_13)
   VAR_23 = 1;
  else
   VAR_22 = 1;
 }

 VAR_20 = ((void*)0);
 if (FUNC_7(VAR_12, &VAR_19)) {
  if (VAR_24) {
   if (VAR_4) {
    FUNC_4(FUNC_0(VAR_8), VAR_12);
    FUNC_1(FUNC_0(VAR_7));
    FUNC_5(1);
   }
   FUNC_2(FUNC_0(VAR_8), VAR_12);
  }
  FUNC_2(FUNC_0("Not a valid object name: '%s'."), VAR_12);
 }

 switch (FUNC_3(VAR_12, FUNC_17(VAR_12), &VAR_19, &VAR_20)) {
 case 0:

  if (VAR_24)
   FUNC_2(FUNC_0(VAR_9), VAR_12);
  break;
 case 1:

  if (!FUNC_15(VAR_20, "refs/heads/") &&
      FUNC_20(VAR_20)) {
   if (VAR_24)
    FUNC_2(FUNC_0(VAR_9), VAR_12);
   else
    VAR_20 = ((void*)0);
  }
  break;
 default:
  FUNC_2(FUNC_0("Ambiguous object name: '%s'."), VAR_12);
  break;
 }

 if ((VAR_18 = FUNC_8(VAR_10, &VAR_19)) == ((void*)0))
  FUNC_2(FUNC_0("Not a valid branch point: '%s'."), VAR_12);
 FUNC_9(&VAR_19, &VAR_18->object.oid);

 if (VAR_15)
  VAR_5 = VAR_2;

 if (!VAR_23) {
  struct ref_transaction *VAR_25;
  struct strbuf VAR_26 = VAR_3;
  char *VAR_27;

  if (VAR_22)
   VAR_27 = FUNC_21("branch: Reset to %s", VAR_12);
  else
   VAR_27 = FUNC_21("branch: Created from %s", VAR_12);

  VAR_25 = FUNC_10(&VAR_26);
  if (!VAR_25 ||
      FUNC_13(VAR_25, VAR_21.buf,
        &VAR_19, VAR_22 ? ((void*)0) : &VAR_6,
        0, VAR_27, &VAR_26) ||
      FUNC_11(VAR_25, &VAR_26))
   FUNC_2("%s", VAR_26.buf);
  FUNC_12(VAR_25);
  FUNC_16(&VAR_26);
  FUNC_6(VAR_27);
 }

 if (VAR_20 && VAR_17)
  FUNC_14(VAR_21.buf + 11, VAR_20, VAR_17, VAR_16);

 FUNC_16(&VAR_21);
 FUNC_6(VAR_20);
}
