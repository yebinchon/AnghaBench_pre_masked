
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct ref_lock {char* ref_name; int old_oid; } ;
struct object_id {int dummy; } ;
struct files_ref_store {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 int FUNC_0 (struct files_ref_store*) ;
 scalar_t__ FUNC_1 (struct ref_lock*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct files_ref_store*,char*) ;
 scalar_t__ FUNC_4 (struct files_ref_store*,char*,int *,struct object_id const*,char const*,int ,struct strbuf*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int *,char*,int ,int *,int*) ;
 int FUNC_7 (struct strbuf*,char*,char*,...) ;
 char* FUNC_8 (struct strbuf*,int *) ;
 int FUNC_9 (struct strbuf*) ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 int FUNC_11 (struct ref_lock*) ;

__attribute__((used)) static int FUNC_12(struct files_ref_store *VAR_3,
        struct ref_lock *VAR_4,
        const struct object_id *VAR_5, const char *VAR_6,
        struct strbuf *VAR_7)
{
 FUNC_3(VAR_3, "commit_ref_update");

 FUNC_0(VAR_3);
 if (FUNC_4(VAR_3, VAR_4->ref_name,
    &VAR_4->old_oid, VAR_5,
    VAR_6, 0, VAR_7)) {
  char *VAR_8 = FUNC_8(VAR_7, ((void*)0));
  FUNC_7(VAR_7, "cannot update the ref '%s': %s",
       VAR_4->ref_name, VAR_8);
  FUNC_5(VAR_8);
  FUNC_11(VAR_4);
  return -1;
 }

 if (FUNC_10(VAR_4->ref_name, "HEAD") != 0) {
  int VAR_9;
  const char *VAR_10;

  VAR_10 = FUNC_6(&VAR_3->base, "HEAD",
         VAR_1,
         ((void*)0), &VAR_9);
  if (VAR_10 && (VAR_9 & VAR_0) &&
      !FUNC_10(VAR_10, VAR_4->ref_name)) {
   struct strbuf VAR_11 = VAR_2;
   if (FUNC_4(VAR_3, "HEAD",
      &VAR_4->old_oid, VAR_5,
      VAR_6, 0, &VAR_11)) {
    FUNC_2("%s", VAR_11.buf);
    FUNC_9(&VAR_11);
   }
  }
 }

 if (FUNC_1(VAR_4)) {
  FUNC_7(VAR_7, "couldn't set '%s'", VAR_4->ref_name);
  FUNC_11(VAR_4);
  return -1;
 }

 FUNC_11(VAR_4);
 return 0;
}
