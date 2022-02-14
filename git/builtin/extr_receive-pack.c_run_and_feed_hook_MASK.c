
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct receive_hook_feed_state {TYPE_2__* push_options; } ;
struct child_process {char const** argv; int in; int stdout_to_stderr; char const* trace2_hook_name; int err; int env_array; } ;
struct async {int in; int proc; } ;
typedef int muxer ;
typedef scalar_t__ (* feed_fn ) (struct receive_hook_feed_state*,char const**,size_t*) ;
struct TYPE_4__ {int nr; TYPE_1__* items; } ;
struct TYPE_3__ {int string; } ;


 struct child_process VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (struct async*) ;
 int FUNC_5 (struct child_process*) ;
 int FUNC_6 (struct async*,int ,int) ;
 int FUNC_7 (struct child_process*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct async*) ;
 int FUNC_11 (struct child_process*) ;
 scalar_t__ VAR_4 ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_13 (int,char const*,size_t) ;

__attribute__((used)) static int FUNC_14(const char *VAR_6, feed_fn VAR_7,
        struct receive_hook_feed_state *VAR_8)
{
 struct child_process VAR_9 = VAR_0;
 struct async VAR_10;
 const char *VAR_11[2];
 int VAR_12;

 VAR_11[0] = FUNC_3(VAR_6);
 if (!VAR_11[0])
  return 0;

 VAR_11[1] = ((void*)0);

 VAR_9.argv = VAR_11;
 VAR_9.in = -1;
 VAR_9.stdout_to_stderr = 1;
 VAR_9.trace2_hook_name = VAR_6;

 if (VAR_8->push_options) {
  int VAR_13;
  for (VAR_13 = 0; VAR_13 < VAR_8->push_options->nr; VAR_13++)
   FUNC_0(&VAR_9.env_array,
    "GIT_PUSH_OPTION_%d=%s", VAR_13,
    VAR_8->push_options->items[VAR_13].string);
  FUNC_0(&VAR_9.env_array, "GIT_PUSH_OPTION_COUNT=%d",
     VAR_8->push_options->nr);
 } else
  FUNC_0(&VAR_9.env_array, "GIT_PUSH_OPTION_COUNT");

 if (VAR_4)
  FUNC_1(&VAR_9.env_array, FUNC_12(VAR_4));

 if (VAR_5) {
  FUNC_6(&VAR_10, 0, sizeof(VAR_10));
  VAR_10.proc = VAR_3;
  VAR_10.in = -1;
  VAR_12 = FUNC_10(&VAR_10);
  if (VAR_12)
   return VAR_12;
  VAR_9.err = VAR_10.in;
 }

 FUNC_7(&VAR_9);

 VAR_12 = FUNC_11(&VAR_9);
 if (VAR_12) {
  if (VAR_5)
   FUNC_4(&VAR_10);
  return VAR_12;
 }

 FUNC_9(VAR_1, VAR_2);

 while (1) {
  const char *VAR_14;
  size_t VAR_15;
  if (VAR_7(VAR_8, &VAR_14, &VAR_15))
   break;
  if (FUNC_13(VAR_9.in, VAR_14, VAR_15) < 0)
   break;
 }
 FUNC_2(VAR_9.in);
 if (VAR_5)
  FUNC_4(&VAR_10);

 FUNC_8(VAR_1);

 return FUNC_5(&VAR_9);
}
