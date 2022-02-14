
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct shallow_info {int dummy; } ;
struct iterate_data {struct shallow_info* si; struct command* cmds; } ;
struct command {char* error_string; struct command* next; } ;
struct check_connected_options {int err_fd; int progress; int env; } ;
struct async {int in; int proc; } ;
typedef int muxer ;


 struct check_connected_options VAR_0 ;
 int FUNC_0 (struct command*) ;
 scalar_t__ FUNC_1 (int ,struct iterate_data*,struct check_connected_options*) ;
 int VAR_1 ;
 int FUNC_2 (struct command*,struct shallow_info*) ;
 int FUNC_3 (struct command*,struct shallow_info*) ;
 int FUNC_4 (struct async*) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct async*,int ,int) ;
 int VAR_5 ;
 int FUNC_7 (struct command*) ;
 int FUNC_8 (char*,int ,int *,int *) ;
 scalar_t__ FUNC_9 (struct command*,char*,int ,struct string_list const*) ;
 int FUNC_10 (struct command*,struct shallow_info*) ;
 scalar_t__ VAR_6 ;
 int FUNC_11 (struct async*) ;
 int * VAR_7 ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_14 (struct command*,struct shallow_info*) ;

__attribute__((used)) static void FUNC_15(struct command *VAR_10,
        const char *VAR_11,
        struct shallow_info *VAR_12,
        const struct string_list *VAR_13)
{
 struct check_connected_options VAR_14 = VAR_0;
 struct command *VAR_15;
 struct iterate_data VAR_16;
 struct async VAR_17;
 int VAR_18 = 0;

 if (VAR_11) {
  for (VAR_15 = VAR_10; VAR_15; VAR_15 = VAR_15->next)
   VAR_15->error_string = "unpacker error";
  return;
 }

 if (VAR_9) {
  FUNC_6(&VAR_17, 0, sizeof(VAR_17));
  VAR_17.proc = VAR_1;
  VAR_17.in = -1;
  if (!FUNC_11(&VAR_17))
   VAR_18 = VAR_17.in;

 }

 VAR_16.cmds = VAR_10;
 VAR_16.si = VAR_12;
 VAR_14.err_fd = VAR_18;
 VAR_14.progress = VAR_18 && !VAR_5;
 VAR_14.env = FUNC_12(VAR_7);
 if (FUNC_1(VAR_4, &VAR_16, &VAR_14))
  FUNC_10(VAR_10, VAR_12);

 if (VAR_9)
  FUNC_4(&VAR_17);

 FUNC_7(VAR_10);

 if (FUNC_9(VAR_10, "pre-receive", 0, VAR_13)) {
  for (VAR_15 = VAR_10; VAR_15; VAR_15 = VAR_15->next) {
   if (!VAR_15->error_string)
    VAR_15->error_string = "pre-receive hook declined";
  }
  return;
 }





 if (FUNC_13(VAR_7) < 0) {
  for (VAR_15 = VAR_10; VAR_15; VAR_15 = VAR_15->next) {
   if (!VAR_15->error_string)
    VAR_15->error_string = "unable to migrate objects to permanent storage";
  }
  return;
 }
 VAR_7 = ((void*)0);

 FUNC_0(VAR_10);

 FUNC_5(VAR_3);
 VAR_2 = VAR_3 = FUNC_8("HEAD", 0, ((void*)0), ((void*)0));

 if (VAR_8)
  FUNC_2(VAR_10, VAR_12);
 else
  FUNC_3(VAR_10, VAR_12);

 if (VAR_6)
  FUNC_14(VAR_10, VAR_12);
}
