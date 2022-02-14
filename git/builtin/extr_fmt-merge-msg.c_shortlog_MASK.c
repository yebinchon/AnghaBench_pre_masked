
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct string_list {int nr; TYPE_2__* items; } ;
struct strbuf {int len; } ;
struct TYPE_7__ {scalar_t__ nr; } ;
struct rev_info {TYPE_3__ pending; int * commits; } ;
struct pretty_print_context {int member_0; } ;
struct object_id {int dummy; } ;
struct origin_data {scalar_t__ is_local_branch; struct object_id oid; } ;
struct object {scalar_t__ type; int flags; struct object_id const oid; } ;
struct fmt_merge_msg_opts {int shortlog_len; scalar_t__ credit_people; } ;
struct commit {struct object object; TYPE_1__* parents; } ;
struct TYPE_8__ {int hexsz; } ;
struct TYPE_6__ {char const* string; } ;
struct TYPE_5__ {scalar_t__ next; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct strbuf VAR_4 ;
 struct string_list VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct strbuf*,char const*) ;
 int FUNC_1 (struct rev_info*,struct object*,char const*) ;
 int FUNC_2 (struct strbuf*,struct string_list*,struct string_list*) ;
 int FUNC_3 (struct commit*,int) ;
 struct object* FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct commit*,char*,struct strbuf*,struct pretty_print_context*) ;
 int FUNC_7 (int *) ;
 struct commit* FUNC_8 (struct rev_info*) ;
 int FUNC_9 (struct object_id const*) ;
 int FUNC_10 (int ,struct object_id const*) ;
 scalar_t__ FUNC_11 (struct rev_info*) ;
 int FUNC_12 (char,struct string_list*,struct commit*) ;
 int FUNC_13 (int ,int *,struct rev_info*,int *) ;
 int FUNC_14 (struct strbuf*,char*,char const*,...) ;
 int FUNC_15 (struct strbuf*,char*) ;
 int FUNC_16 (struct strbuf*,int *) ;
 int FUNC_17 (struct strbuf*) ;
 int FUNC_18 (struct string_list*,int ) ;
 int FUNC_19 (struct string_list*,int ) ;
 int FUNC_20 (struct string_list*,int ) ;
 TYPE_4__* VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void FUNC_21(const char *VAR_11,
       struct origin_data *VAR_12,
       struct commit *VAR_13,
       struct rev_info *VAR_14,
       struct fmt_merge_msg_opts *VAR_15,
       struct strbuf *VAR_16)
{
 int VAR_17, VAR_18 = 0;
 struct commit *VAR_19;
 struct object *VAR_20;
 struct string_list VAR_21 = VAR_5;
 struct string_list VAR_22 = VAR_5;
 struct string_list VAR_23 = VAR_5;
 int VAR_24 = VAR_7 | VAR_6 | VAR_2 | VAR_3 | VAR_0;
 struct strbuf VAR_25 = VAR_4;
 const struct object_id *VAR_26 = &VAR_12->oid;
 int VAR_27 = VAR_15->shortlog_len;

 VAR_20 = FUNC_4(VAR_9, FUNC_10(VAR_9, VAR_26),
      FUNC_9(VAR_26),
      VAR_8->hexsz);
 if (!VAR_20 || VAR_20->type != VAR_1)
  return;

 FUNC_13(0, ((void*)0), VAR_14, ((void*)0));
 FUNC_1(VAR_14, VAR_20, VAR_11);
 FUNC_1(VAR_14, &VAR_13->object, "^HEAD");
 VAR_13->object.flags |= VAR_7;
 if (FUNC_11(VAR_14))
  FUNC_5("revision walk setup failed");
 while ((VAR_19 = FUNC_8(VAR_14)) != ((void*)0)) {
  struct pretty_print_context VAR_28 = {0};

  if (VAR_19->parents && VAR_19->parents->next) {

   if (VAR_15->credit_people)
    FUNC_12('c', &VAR_23, VAR_19);
   continue;
  }
  if (!VAR_18 && VAR_15->credit_people)

   FUNC_12('c', &VAR_23, VAR_19);
  if (VAR_15->credit_people)
   FUNC_12('a', &VAR_22, VAR_19);
  VAR_18++;
  if (VAR_21.nr > VAR_27)
   continue;

  FUNC_6(VAR_19, "%s", &VAR_25, &VAR_28);
  FUNC_17(&VAR_25);

  if (!VAR_25.len)
   FUNC_18(&VAR_21,
        FUNC_9(&VAR_19->object.oid));
  else
   FUNC_19(&VAR_21,
       FUNC_16(&VAR_25, ((void*)0)));
 }

 if (VAR_15->credit_people)
  FUNC_2(VAR_16, &VAR_22, &VAR_23);
 if (VAR_18 > VAR_27)
  FUNC_14(VAR_16, "\n* %s: (%d commits)\n", VAR_11, VAR_18);
 else
  FUNC_14(VAR_16, "\n* %s:\n", VAR_11);

 if (VAR_12->is_local_branch && VAR_10)
  FUNC_0(VAR_16, VAR_11);

 for (VAR_17 = 0; VAR_17 < VAR_21.nr; VAR_17++)
  if (VAR_17 >= VAR_27)
   FUNC_15(VAR_16, "  ...\n");
  else
   FUNC_14(VAR_16, "  %s\n", VAR_21.items[VAR_17].string);

 FUNC_3((struct commit *)VAR_20, VAR_24);
 FUNC_3(VAR_13, VAR_24);
 FUNC_7(VAR_14->commits);
 VAR_14->commits = ((void*)0);
 VAR_14->pending.nr = 0;

 FUNC_20(&VAR_22, 0);
 FUNC_20(&VAR_23, 0);
 FUNC_20(&VAR_21, 0);
}
