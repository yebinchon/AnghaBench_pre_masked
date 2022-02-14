
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {scalar_t__ len; int buf; } ;
struct todo_list {struct strbuf buf; } ;
struct todo_item {scalar_t__ offset_in_buf; scalar_t__ flags; scalar_t__ arg_offset; scalar_t__ arg_len; int * commit; int command; } ;
struct string_list {scalar_t__ nr; } ;
struct repository {int dummy; } ;
struct replay_opts {scalar_t__ allow_ff; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {struct object_id oid; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;
 struct todo_list VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char*) ;
 struct todo_item* FUNC_1 (struct todo_list*) ;
 int FUNC_2 (struct replay_opts*) ;
 scalar_t__ FUNC_3 (struct repository*,struct replay_opts*,char const*,struct object_id*,char const*) ;
 scalar_t__ FUNC_4 (struct todo_list*) ;
 int FUNC_5 (struct repository*,struct todo_list*,struct todo_list*,char const*,char const*,unsigned int) ;
 char* VAR_4 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char const*) ;
 char* FUNC_8 (struct object_id*,int ) ;
 int FUNC_9 (int ,char*) ;
 char* FUNC_10 () ;
 scalar_t__ FUNC_11 (struct repository*,char*,char*,int,int) ;
 int FUNC_12 (struct repository*,struct replay_opts*) ;
 int FUNC_13 (struct replay_opts*) ;
 scalar_t__ FUNC_14 (struct repository*,struct todo_list*,struct object_id*) ;
 int VAR_5 ;
 int FUNC_15 (struct todo_list*,struct string_list*) ;
 scalar_t__ FUNC_16 (struct todo_list*,struct todo_list*) ;
 scalar_t__ FUNC_17 (struct repository*,int ,struct todo_list*) ;
 scalar_t__ FUNC_18 (struct todo_list*) ;
 int FUNC_19 (struct todo_list*) ;
 scalar_t__ FUNC_20 (struct repository*,struct todo_list*,char const*,int *,int *,int,unsigned int) ;

int FUNC_21(struct repository *VAR_6, struct replay_opts *VAR_7, unsigned VAR_8,
      const char *VAR_9, const char *VAR_10,
      struct commit *VAR_11, const char *VAR_12,
      struct string_list *VAR_13, unsigned VAR_14,
      struct todo_list *VAR_15)
{
 const char *VAR_16, *VAR_17 = FUNC_10();
 struct todo_list VAR_18 = VAR_1;
 struct strbuf *VAR_19 = &VAR_15->buf;
 struct object_id VAR_20 = VAR_11->object.oid;
 int VAR_21;

 VAR_16 = FUNC_8(&VAR_20, VAR_0);

 if (VAR_19->len == 0) {
  struct todo_item *VAR_22 = FUNC_1(VAR_15);
  VAR_22->command = VAR_3;
  VAR_22->commit = ((void*)0);
  VAR_22->arg_len = VAR_22->arg_offset = VAR_22->flags = VAR_22->offset_in_buf = 0;
 }

 if (VAR_14 && FUNC_18(VAR_15))
  return -1;

 if (VAR_13->nr)
  FUNC_15(VAR_15, VAR_13);

 if (FUNC_4(VAR_15) == 0) {
  FUNC_2(VAR_7);
  FUNC_13(VAR_7);

  return FUNC_6(FUNC_0("nothing to do"));
 }

 VAR_21 = FUNC_5(VAR_6, VAR_15, &VAR_18, VAR_9,
        VAR_16, VAR_8);
 if (VAR_21 == -1)
  return -1;
 else if (VAR_21 == -2) {
  FUNC_2(VAR_7);
  FUNC_13(VAR_7);

  return -1;
 } else if (VAR_21 == -3) {
  FUNC_2(VAR_7);
  FUNC_13(VAR_7);
  FUNC_19(&VAR_18);

  return FUNC_6(FUNC_0("nothing to do"));
 }

 if (FUNC_17(VAR_6, VAR_18.buf.buf, &VAR_18) ||
     FUNC_16(VAR_15, &VAR_18)) {
  FUNC_9(VAR_5, "%s", FUNC_0(VAR_4));
  FUNC_3(VAR_6, VAR_7, VAR_10, &VAR_11->object.oid, VAR_12);
  FUNC_19(&VAR_18);

  return -1;
 }

 if (VAR_7->allow_ff && FUNC_14(VAR_6, &VAR_18, &VAR_20)) {
  FUNC_19(&VAR_18);
  return FUNC_6(FUNC_0("could not skip unnecessary pick commands"));
 }

 if (FUNC_20(VAR_6, &VAR_18, VAR_17, ((void*)0), ((void*)0), -1,
        VAR_8 & ~(VAR_2))) {
  FUNC_19(&VAR_18);
  return FUNC_7(FUNC_0("could not write '%s'"), VAR_17);
 }

 FUNC_19(&VAR_18);

 if (FUNC_3(VAR_6, VAR_7, VAR_10, &VAR_20, VAR_12))
  return -1;

 if (FUNC_11(VAR_6, "rebase", "", 1, 1))
  return -1;

 return FUNC_12(VAR_6, VAR_7);
}
