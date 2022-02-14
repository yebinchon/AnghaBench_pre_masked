
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct replay_opts {int dummy; } ;
struct rebase_options {scalar_t__ rebase_cousins; int cmd; int upstream; int onto; scalar_t__ root_with_onto; scalar_t__ rebase_merges; scalar_t__ keep_empty; } ;
struct child_process {int git_cmd; int args; } ;
typedef enum action { ____Placeholder_action } action ;
 int FUNC_0 (char*,int) ;
 struct child_process VAR_0 ;
 struct string_list VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct string_list*) ;
 int FUNC_3 (int *,char*,char*,char*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct rebase_options*,unsigned int) ;
 int FUNC_7 (unsigned int) ;
 struct replay_opts FUNC_8 (struct rebase_options*) ;
 int FUNC_9 (char*,int*) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,struct string_list*) ;
 int FUNC_12 (struct child_process*) ;
 int FUNC_13 (int ,struct replay_opts*) ;
 int FUNC_14 (int ,struct string_list*) ;
 int FUNC_15 (struct string_list*,int ) ;
 int VAR_8 ;
 int FUNC_16 (unsigned int) ;

__attribute__((used)) static int FUNC_17(struct rebase_options *VAR_9,
      enum action VAR_10)
{
 unsigned VAR_11 = 0;
 int VAR_12 = 0, VAR_13 = 0;

 FUNC_9("rebase.abbreviatecommands", &VAR_12);

 VAR_11 |= VAR_9->keep_empty ? VAR_3 : 0;
 VAR_11 |= VAR_12 ? VAR_2 : 0;
 VAR_11 |= VAR_9->rebase_merges ? VAR_5 : 0;
 VAR_11 |= VAR_9->rebase_cousins > 0 ? VAR_4 : 0;
 VAR_11 |= VAR_9->root_with_onto ? VAR_6 : 0;
 VAR_11 |= VAR_10 == 130 ? VAR_7 : 0;

 switch (VAR_10) {
 case 132: {
  if (!VAR_9->onto && !VAR_9->upstream)
   FUNC_5(FUNC_1("a base commit must be provided with --upstream or --onto"));

  VAR_13 = FUNC_6(VAR_9, VAR_11);
  break;
 }
 case 128: {
  struct string_list VAR_14 = VAR_1;

  FUNC_11(VAR_8, &VAR_14);
 }

 case 135: {
  struct replay_opts VAR_15 = FUNC_8(VAR_9);

  VAR_13 = FUNC_13(VAR_8, &VAR_15);
  break;
 }
 case 134:
  VAR_13 = FUNC_7(VAR_11);
  break;
 case 129: {
  struct child_process VAR_16 = VAR_0;

  VAR_16.git_cmd = 1;
  FUNC_3(&VAR_16.args, "show", "REBASE_HEAD", "--", ((void*)0));
  VAR_13 = FUNC_12(&VAR_16);

  break;
 }
 case 130:
 case 133:
  VAR_13 = FUNC_16(VAR_11);
  break;
 case 136:
  VAR_13 = FUNC_4(VAR_8);
  break;
 case 131:
  VAR_13 = FUNC_10();
  break;
 case 137: {
  struct string_list VAR_17 = VAR_1;

  FUNC_14(VAR_9->cmd, &VAR_17);
  VAR_13 = FUNC_2(&VAR_17);
  FUNC_15(&VAR_17, 0);
  break;
 }
 default:
  FUNC_0("invalid command '%d'", VAR_10);
 }

 return VAR_13;
}
