
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct transport {scalar_t__ pack_lockfile; TYPE_1__* smart_options; } ;
struct strbuf {int len; int buf; } ;
struct packed_git {int dummy; } ;
struct object_id {int hash; } ;
struct child_process {int git_cmd; int in; int no_stdout; int err; int no_stderr; int env; int args; } ;
struct check_connected_options {int err_fd; char* shallow_file; int quiet; int env; scalar_t__ progress; int is_deepening_fetch; scalar_t__ check_refs_only; struct transport* transport; } ;
typedef scalar_t__ (* oid_iterate_fn ) (void*,struct object_id*) ;
struct TYPE_4__ {unsigned int hexsz; } ;
struct TYPE_3__ {scalar_t__ self_contained_and_connected; } ;


 struct check_connected_options VAR_0 ;
 struct child_process VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct strbuf VAR_7 ;
 int FUNC_0 (char*) ;
 struct packed_git* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int ) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,struct packed_git*) ;
 scalar_t__ FUNC_8 (struct child_process*) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (char*,int ,unsigned int const) ;
 int FUNC_11 (struct object_id*) ;
 int FUNC_12 (int ,struct object_id*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 scalar_t__ FUNC_15 (struct child_process*) ;
 int FUNC_16 (struct strbuf*,scalar_t__,size_t) ;
 int FUNC_17 (struct strbuf*,char*) ;
 int FUNC_18 (struct strbuf*) ;
 scalar_t__ FUNC_19 (scalar_t__,char*,size_t*) ;
 TYPE_2__* VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_20 (int,char*,unsigned int const) ;

int FUNC_21(oid_iterate_fn VAR_11, void *VAR_12,
      struct check_connected_options *VAR_13)
{
 struct child_process VAR_14 = VAR_1;
 struct check_connected_options VAR_15 = VAR_0;
 char VAR_16[VAR_4 + 1];
 struct object_id VAR_17;
 int VAR_18 = 0;
 struct packed_git *VAR_19 = ((void*)0);
 struct transport *VAR_20;
 size_t VAR_21;
 const unsigned VAR_22 = VAR_9->hexsz;

 if (!VAR_13)
  VAR_13 = &VAR_15;
 VAR_20 = VAR_13->transport;

 if (VAR_11(VAR_12, &VAR_17)) {
  if (VAR_13->err_fd)
   FUNC_4(VAR_13->err_fd);
  return VAR_18;
 }

 if (VAR_20 && VAR_20->smart_options &&
     VAR_20->smart_options->self_contained_and_connected &&
     VAR_20->pack_lockfile &&
     FUNC_19(VAR_20->pack_lockfile, ".keep", &VAR_21)) {
  struct strbuf VAR_23 = VAR_7;
  FUNC_16(&VAR_23, VAR_20->pack_lockfile, VAR_21);
  FUNC_17(&VAR_23, ".idx");
  VAR_19 = FUNC_1(VAR_23.buf, VAR_23.len, 1);
  FUNC_18(&VAR_23);
 }

 if (VAR_13->check_refs_only) {
  do {
   if (!FUNC_12(VAR_10, &VAR_17))
    return 1;
  } while (!VAR_11(VAR_12, &VAR_17));
  return 0;
 }

 if (VAR_13->shallow_file) {
  FUNC_2(&VAR_14.args, "--shallow-file");
  FUNC_2(&VAR_14.args, VAR_13->shallow_file);
 }
 FUNC_2(&VAR_14.args,"rev-list");
 FUNC_2(&VAR_14.args, "--objects");
 FUNC_2(&VAR_14.args, "--stdin");
 if (FUNC_9())
  FUNC_2(&VAR_14.args, "--exclude-promisor-objects");
 if (!VAR_13->is_deepening_fetch) {
  FUNC_2(&VAR_14.args, "--not");
  FUNC_2(&VAR_14.args, "--all");
 }
 FUNC_2(&VAR_14.args, "--quiet");
 FUNC_2(&VAR_14.args, "--alternate-refs");
 if (VAR_13->progress)
  FUNC_3(&VAR_14.args, "--progress=%s",
     FUNC_0("Checking connectivity"));

 VAR_14.git_cmd = 1;
 VAR_14.env = VAR_13->env;
 VAR_14.in = -1;
 VAR_14.no_stdout = 1;
 if (VAR_13->err_fd)
  VAR_14.err = VAR_13->err_fd;
 else
  VAR_14.no_stderr = VAR_13->quiet;

 if (FUNC_15(&VAR_14))
  return FUNC_5(FUNC_0("Could not run 'git rev-list'"));

 FUNC_14(VAR_5, VAR_6);

 VAR_16[VAR_22] = '\n';
 do {
  if (VAR_19 && FUNC_7(VAR_17.hash, VAR_19))
   continue;

  FUNC_10(VAR_16, FUNC_11(&VAR_17), VAR_22);
  if (FUNC_20(VAR_14.in, VAR_16, VAR_22 + 1) < 0) {
   if (VAR_8 != VAR_3 && VAR_8 != VAR_2)
    FUNC_6(FUNC_0("failed write to rev-list"));
   VAR_18 = -1;
   break;
  }
 } while (!VAR_11(VAR_12, &VAR_17));

 if (FUNC_4(VAR_14.in))
  VAR_18 = FUNC_6(FUNC_0("failed to close rev-list's stdin"));

 FUNC_13(VAR_5);
 return FUNC_8(&VAR_14) || VAR_18;
}
