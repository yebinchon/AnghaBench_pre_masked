
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct transport {struct helper_data* data; } ;
struct string_list {int dummy; } ;
struct strbuf {char* buf; } ;
struct ref {char* name; TYPE_1__* peer_ref; int deletion; int old_oid; struct ref* next; } ;
struct object_id {int dummy; } ;
struct TYPE_4__ {int nr; } ;
struct helper_data {char* export_marks; TYPE_2__ rs; int name; } ;
struct child_process {int in; } ;
struct TYPE_3__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 struct string_list VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct child_process*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (struct transport*,struct child_process*,struct string_list*) ;
 struct child_process* FUNC_6 (struct transport*) ;
 int FUNC_7 (char*,struct object_id*) ;
 int FUNC_8 (int *,struct object_id*) ;
 scalar_t__ FUNC_9 (struct helper_data*,struct ref*,int) ;
 int FUNC_10 (char*,char*) ;
 char* FUNC_11 (char*,int ,struct object_id*,int*) ;
 int FUNC_12 (struct transport*,int ,int) ;
 scalar_t__ FUNC_13 (struct transport*,char*,char*) ;
 int FUNC_14 (struct strbuf*,char*,char const*,...) ;
 int FUNC_15 (struct strbuf*,int *) ;
 int FUNC_16 (struct strbuf*) ;
 scalar_t__ FUNC_17 (char*,char*) ;
 int FUNC_18 (struct string_list*,char*) ;
 int FUNC_19 (struct string_list*,int ) ;
 int FUNC_20 (struct string_list*,int) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,char*) ;

__attribute__((used)) static int FUNC_23(struct transport *VAR_5,
  struct ref *VAR_6, int VAR_7)
{
 struct ref *VAR_8;
 struct child_process *VAR_9, VAR_10;
 struct helper_data *VAR_11 = VAR_5->data;
 struct string_list VAR_12 = VAR_3;
 struct strbuf VAR_13 = VAR_2;

 if (!VAR_11->rs.nr)
  FUNC_2(FUNC_0("remote-helper doesn't support push; refspec needed"));

 FUNC_12(VAR_5, VAR_11->name, VAR_7);
 if (VAR_7 & VAR_4) {
  if (FUNC_13(VAR_5, "force", "true") != 0)
   FUNC_21(FUNC_0("helper %s does not support 'force'"), VAR_11->name);
 }

 VAR_9 = FUNC_6(VAR_5);

 FUNC_22(VAR_9->in, "export\n");

 for (VAR_8 = VAR_6; VAR_8; VAR_8 = VAR_8->next) {
  char *VAR_14;
  struct object_id VAR_15;

  VAR_14 = FUNC_1(&VAR_11->rs, VAR_8->name);
  if (VAR_14 && !FUNC_7(VAR_14, &VAR_15)) {
   FUNC_14(&VAR_13, "^%s", VAR_14);
   FUNC_19(&VAR_12,
       FUNC_15(&VAR_13, ((void*)0)));
   FUNC_8(&VAR_8->old_oid, &VAR_15);
  }
  FUNC_4(VAR_14);

  if (VAR_8->peer_ref) {
   if (FUNC_17(VAR_8->name, VAR_8->peer_ref->name)) {
    if (!VAR_8->deletion) {
     const char *VAR_16;
     int VAR_17;


     VAR_16 = FUNC_11(VAR_8->peer_ref->name,
          VAR_1,
          &VAR_15, &VAR_17);
     if (!VAR_16 || !(VAR_17 & VAR_0))
      VAR_16 = VAR_8->peer_ref->name;

     FUNC_14(&VAR_13, "%s:%s", VAR_16, VAR_8->name);
    } else
     FUNC_14(&VAR_13, ":%s", VAR_8->name);

    FUNC_18(&VAR_12, "--refspec");
    FUNC_18(&VAR_12, VAR_13.buf);
    FUNC_16(&VAR_13);
   }
   if (!VAR_8->deletion)
    FUNC_18(&VAR_12, VAR_8->peer_ref->name);
  }
 }

 if (FUNC_5(VAR_5, &VAR_10, &VAR_12))
  FUNC_2(FUNC_0("couldn't run fast-export"));

 FUNC_20(&VAR_12, 1);

 if (FUNC_3(&VAR_10))
  FUNC_2(FUNC_0("error while running fast-export"));
 if (FUNC_9(VAR_11, VAR_6, VAR_7))
  return 1;

 if (VAR_11->export_marks) {
  FUNC_14(&VAR_13, "%s.tmp", VAR_11->export_marks);
  FUNC_10(VAR_13.buf, VAR_11->export_marks);
  FUNC_16(&VAR_13);
 }

 return 0;
}
