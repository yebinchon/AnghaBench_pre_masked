
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int len; } ;
struct todo_list {int nr; TYPE_2__ buf; } ;
struct todo_item {int command; int offset_in_buf; scalar_t__ arg_len; scalar_t__ arg_offset; struct commit* commit; } ;
struct replay_opts {scalar_t__ action; int revs; } ;
struct commit {int dummy; } ;
typedef enum todo_command { ____Placeholder_todo_command } todo_command ;
struct TYPE_3__ {char* str; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 struct todo_item* FUNC_1 (struct todo_list*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*,char const**) ;
 char* FUNC_4 (struct commit*,int *) ;
 struct commit* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct replay_opts*) ;
 int FUNC_7 (struct commit*) ;
 int FUNC_8 (TYPE_2__*,char*,char const*,int ,int,char const*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_9 (struct commit*,char const*) ;

__attribute__((used)) static int FUNC_10(struct todo_list *VAR_4,
    struct replay_opts *VAR_5)
{
 enum todo_command VAR_6 = VAR_5->action == VAR_0 ?
  VAR_1 : VAR_2;
 const char *VAR_7 = VAR_3[VAR_6].str;
 struct commit *VAR_8;

 if (FUNC_6(VAR_5))
  return -1;

 while ((VAR_8 = FUNC_5(VAR_5->revs))) {
  struct todo_item *VAR_9 = FUNC_1(VAR_4);
  const char *VAR_10 = FUNC_4(VAR_8, ((void*)0));
  const char *VAR_11;
  int VAR_12;

  VAR_9->command = VAR_6;
  VAR_9->commit = VAR_8;
  VAR_9->arg_offset = 0;
  VAR_9->arg_len = 0;
  VAR_9->offset_in_buf = VAR_4->buf.len;
  VAR_12 = FUNC_3(VAR_10, &VAR_11);
  FUNC_8(&VAR_4->buf, "%s %s %.*s\n", VAR_7,
   FUNC_7(VAR_8), VAR_12, VAR_11);
  FUNC_9(VAR_8, VAR_10);
 }

 if (!VAR_4->nr)
  return FUNC_2(FUNC_0("empty commit set passed"));

 return 0;
}
