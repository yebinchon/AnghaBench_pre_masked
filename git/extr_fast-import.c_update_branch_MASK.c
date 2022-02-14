
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct ref_transaction {int dummy; } ;
struct object_id {int dummy; } ;
struct commit {int dummy; } ;
struct branch {struct object_id oid; int name; scalar_t__ delete; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct commit*,struct commit*) ;
 scalar_t__ FUNC_3 (struct object_id*) ;
 struct commit* FUNC_4 (int ,struct object_id*,int ) ;
 int FUNC_5 (struct object_id*) ;
 int FUNC_6 (struct object_id*) ;
 scalar_t__ FUNC_7 (int ,struct object_id*) ;
 struct ref_transaction* FUNC_8 (struct strbuf*) ;
 scalar_t__ FUNC_9 (struct ref_transaction*,struct strbuf*) ;
 int FUNC_10 (struct ref_transaction*) ;
 scalar_t__ FUNC_11 (struct ref_transaction*,int ,struct object_id*,struct object_id*,int ,char const*,struct strbuf*) ;
 int FUNC_12 (struct strbuf*) ;
 int VAR_2 ;
 int FUNC_13 (char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_14(struct branch *VAR_3)
{
 static const char *VAR_4 = "fast-import";
 struct ref_transaction *VAR_5;
 struct object_id VAR_6;
 struct strbuf VAR_7 = VAR_0;

 if (FUNC_3(&VAR_3->oid)) {
  if (VAR_3->delete)
   FUNC_0(((void*)0), VAR_3->name, ((void*)0), 0);
  return 0;
 }
 if (FUNC_7(VAR_3->name, &VAR_6))
  FUNC_6(&VAR_6);
 if (!VAR_1 && !FUNC_3(&VAR_6)) {
  struct commit *VAR_8, *VAR_9;

  VAR_8 = FUNC_4(VAR_2,
         &VAR_6, 0);
  VAR_9 = FUNC_4(VAR_2,
         &VAR_3->oid, 0);
  if (!VAR_8 || !VAR_9)
   return FUNC_1("Branch %s is missing commits.", VAR_3->name);

  if (!FUNC_2(VAR_8, VAR_9)) {
   FUNC_13("Not updating %s"
    " (new tip %s does not contain %s)",
    VAR_3->name, FUNC_5(&VAR_3->oid),
    FUNC_5(&VAR_6));
   return -1;
  }
 }
 VAR_5 = FUNC_8(&VAR_7);
 if (!VAR_5 ||
     FUNC_11(VAR_5, VAR_3->name, &VAR_3->oid, &VAR_6,
       0, VAR_4, &VAR_7) ||
     FUNC_9(VAR_5, &VAR_7)) {
  FUNC_10(VAR_5);
  FUNC_1("%s", VAR_7.buf);
  FUNC_12(&VAR_7);
  return -1;
 }
 FUNC_10(VAR_5);
 FUNC_12(&VAR_7);
 return 0;
}
