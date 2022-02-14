
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct ref_lock {int lk; int ref_name; } ;
struct object_id {int dummy; } ;
struct object {scalar_t__ type; } ;
struct TYPE_2__ {int hexsz; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ref_lock*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 char* FUNC_4 (struct object_id const*) ;
 struct object* FUNC_5 (int ,struct object_id const*) ;
 int FUNC_6 (struct strbuf*,char*,char*,...) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (struct ref_lock*) ;
 scalar_t__ FUNC_8 (int,char*,int) ;

__attribute__((used)) static int FUNC_9(struct ref_lock *VAR_3,
     const struct object_id *VAR_4, struct strbuf *VAR_5)
{
 static char VAR_6 = '\n';
 struct object *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(VAR_2, VAR_4);
 if (!VAR_7) {
  FUNC_6(VAR_5,
       "trying to write ref '%s' with nonexistent object %s",
       VAR_3->ref_name, FUNC_4(VAR_4));
  FUNC_7(VAR_3);
  return -1;
 }
 if (VAR_7->type != VAR_0 && FUNC_3(VAR_3->ref_name)) {
  FUNC_6(VAR_5,
       "trying to write non-commit object %s to branch '%s'",
       FUNC_4(VAR_4), VAR_3->ref_name);
  FUNC_7(VAR_3);
  return -1;
 }
 VAR_8 = FUNC_1(&VAR_3->lk);
 if (FUNC_8(VAR_8, FUNC_4(VAR_4), VAR_1->hexsz) < 0 ||
     FUNC_8(VAR_8, &VAR_6, 1) < 0 ||
     FUNC_0(VAR_3) < 0) {
  FUNC_6(VAR_5,
       "couldn't write '%s'", FUNC_2(&VAR_3->lk));
  FUNC_7(VAR_3);
  return -1;
 }
 return 0;
}
