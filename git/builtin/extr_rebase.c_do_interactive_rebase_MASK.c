
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int buf; } ;
struct todo_list {TYPE_3__ buf; } ;
struct string_list {int dummy; } ;
struct replay_opts {int dummy; } ;
struct rebase_options {char* head_name; int autosquash; int onto; int onto_name; int cmd; TYPE_2__* restrict_revision; int * squash_onto; int upstream; int switch_to; } ;
struct argv_array {int argv; int argc; } ;
struct TYPE_4__ {int oid; } ;
struct TYPE_5__ {TYPE_1__ object; } ;


 struct argv_array VAR_0 ;
 int FUNC_0 (char*) ;
 struct string_list VAR_1 ;
 struct todo_list VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct argv_array*) ;
 int FUNC_3 (struct argv_array*,int ) ;
 int FUNC_4 (struct argv_array*,char*,char*,int *) ;
 int FUNC_5 (int ,struct replay_opts*,unsigned int,char*,int ,int ,char const*,struct string_list*,int ,struct todo_list*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 struct replay_opts FUNC_9 (struct rebase_options*) ;
 scalar_t__ FUNC_10 (int ,int ,char const**,char**,char**) ;
 scalar_t__ FUNC_11 (struct replay_opts*,char*,int ,char const*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (int ,struct replay_opts*,int ) ;
 int FUNC_15 (int ,TYPE_3__*,int ,int ,unsigned int) ;
 int FUNC_16 (int ,struct string_list*) ;
 int FUNC_17 (struct string_list*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_18 (int ,int ,struct todo_list*) ;
 int FUNC_19 (struct todo_list*) ;
 int FUNC_20 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_21(struct rebase_options *VAR_4, unsigned VAR_5)
{
 int VAR_6;
 const char *VAR_7 = ((void*)0);
 char *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 struct argv_array VAR_10 = VAR_0;
 struct todo_list VAR_11 = VAR_2;
 struct replay_opts VAR_12 = FUNC_9(VAR_4);
 struct string_list VAR_13 = VAR_1;

 if (FUNC_14(VAR_3, &VAR_12,
      VAR_4->switch_to))
  return -1;

 if (FUNC_10(VAR_4->upstream, VAR_4->onto, &VAR_7,
    &VAR_8, &VAR_9))
  return -1;

 if (FUNC_11(&VAR_12,
        VAR_4->head_name ? VAR_4->head_name : "detached HEAD",
        VAR_4->onto, VAR_7)) {
  FUNC_8(VAR_8);
  FUNC_8(VAR_9);

  return -1;
 }

 if (!VAR_4->upstream && VAR_4->squash_onto)
  FUNC_20(FUNC_13(), "%s\n",
      FUNC_12(VAR_4->squash_onto));

 FUNC_4(&VAR_10, "", VAR_8, ((void*)0));
 if (VAR_4->restrict_revision)
  FUNC_3(&VAR_10,
    FUNC_12(&VAR_4->restrict_revision->object.oid));

 VAR_6 = FUNC_15(VAR_3, &VAR_11.buf,
        VAR_10.argc, VAR_10.argv,
        VAR_5);

 if (VAR_6)
  FUNC_7(FUNC_1("could not generate todo list"));
 else {
  FUNC_6();
  if (FUNC_18(VAR_3, VAR_11.buf.buf,
      &VAR_11))
   FUNC_0("unusable todo list");

  FUNC_16(VAR_4->cmd, &VAR_13);
  VAR_6 = FUNC_5(VAR_3, &VAR_12, VAR_5,
   VAR_9, VAR_4->onto_name, VAR_4->onto, VAR_7,
   &VAR_13, VAR_4->autosquash, &VAR_11);
 }

 FUNC_17(&VAR_13, 0);
 FUNC_8(VAR_8);
 FUNC_8(VAR_9);
 FUNC_19(&VAR_11);
 FUNC_2(&VAR_10);

 return VAR_6;
}
