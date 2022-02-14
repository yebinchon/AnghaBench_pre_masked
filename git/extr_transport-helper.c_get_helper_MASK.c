
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct transport {int url; TYPE_1__* remote; struct helper_data* data; } ;
struct strbuf {char* buf; } ;
struct TYPE_7__ {int nr; } ;
struct helper_data {char const* name; int fetch; int option; int push; int import; int bidi_import; int export; int check_connectivity; int connect; int stateless_connect; int signed_tags; int no_private_update; struct child_process* helper; TYPE_2__ rs; void* import_marks; void* export_marks; int out; scalar_t__ no_disconnect_req; } ;
struct TYPE_8__ {int * argv; } ;
struct child_process {int in; int out; int silent_exec_failure; TYPE_4__ args; int trace2_child_class; int env_array; scalar_t__ git_cmd; scalar_t__ err; } ;
struct TYPE_6__ {int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*,char*,char const*,...) ;
 int FUNC_3 (struct child_process*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 (struct helper_data*,struct strbuf*) ;
 int FUNC_12 (TYPE_2__*,char const*) ;
 int FUNC_13 (TYPE_2__*,int ) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (char const*,char*,char const**) ;
 int FUNC_16 (struct transport*) ;
 int FUNC_17 (struct child_process*) ;
 scalar_t__ FUNC_18 (char const*,char*) ;
 int VAR_6 ;
 int FUNC_19 (struct strbuf*) ;
 int FUNC_20 (char const*,char*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int,char*) ;
 int FUNC_23 (int,char*) ;
 struct child_process* FUNC_24 (int) ;
 void* FUNC_25 (char const*) ;

__attribute__((used)) static struct child_process *FUNC_26(struct transport *VAR_7)
{
 struct helper_data *VAR_8 = VAR_7->data;
 struct strbuf VAR_9 = VAR_3;
 struct child_process *VAR_10;
 int VAR_11;
 int VAR_12;

 if (VAR_8->helper)
  return VAR_8->helper;

 VAR_10 = FUNC_24(sizeof(*VAR_10));
 FUNC_3(VAR_10);
 VAR_10->in = -1;
 VAR_10->out = -1;
 VAR_10->err = 0;
 FUNC_2(&VAR_10->args, "git-remote-%s", VAR_8->name);
 FUNC_1(&VAR_10->args, VAR_7->remote->name);
 FUNC_1(&VAR_10->args, FUNC_14(VAR_7->url));
 VAR_10->git_cmd = 0;
 VAR_10->silent_exec_failure = 1;

 if (FUNC_10())
  FUNC_2(&VAR_10->env_array, "%s=%s",
     VAR_1, FUNC_9());

 VAR_10->trace2_child_class = VAR_10->args.argv[0];

 VAR_12 = FUNC_17(VAR_10);
 if (VAR_12 < 0 && VAR_5 == VAR_0)
  FUNC_4(FUNC_0("unable to find remote helper for '%s'"), VAR_8->name);
 else if (VAR_12 != 0)
  FUNC_7(VAR_12);

 VAR_8->helper = VAR_10;
 VAR_8->no_disconnect_req = 0;
 FUNC_13(&VAR_8->rs, VAR_2);







 VAR_11 = FUNC_6(VAR_10->out);
 if (VAR_11 < 0)
  FUNC_5(FUNC_0("can't dup helper output fd"));
 VAR_8->out = FUNC_23(VAR_11, "r");

 FUNC_22(VAR_10->in, "capabilities\n");

 while (1) {
  const char *VAR_13, *VAR_14;
  int VAR_15 = 0;
  if (FUNC_11(VAR_8, &VAR_9))
   FUNC_7(128);

  if (!*VAR_9.buf)
   break;

  if (*VAR_9.buf == '*') {
   VAR_13 = VAR_9.buf + 1;
   VAR_15 = 1;
  } else
   VAR_13 = VAR_9.buf;

  if (VAR_4)
   FUNC_8(VAR_6, "Debug: Got cap %s\n", VAR_13);
  if (!FUNC_20(VAR_13, "fetch"))
   VAR_8->fetch = 1;
  else if (!FUNC_20(VAR_13, "option"))
   VAR_8->option = 1;
  else if (!FUNC_20(VAR_13, "push"))
   VAR_8->push = 1;
  else if (!FUNC_20(VAR_13, "import"))
   VAR_8->import = 1;
  else if (!FUNC_20(VAR_13, "bidi-import"))
   VAR_8->bidi_import = 1;
  else if (!FUNC_20(VAR_13, "export"))
   VAR_8->export = 1;
  else if (!FUNC_20(VAR_13, "check-connectivity"))
   VAR_8->check_connectivity = 1;
  else if (FUNC_15(VAR_13, "refspec ", &VAR_14)) {
   FUNC_12(&VAR_8->rs, VAR_14);
  } else if (!FUNC_20(VAR_13, "connect")) {
   VAR_8->connect = 1;
  } else if (!FUNC_20(VAR_13, "stateless-connect")) {
   VAR_8->stateless_connect = 1;
  } else if (!FUNC_20(VAR_13, "signed-tags")) {
   VAR_8->signed_tags = 1;
  } else if (FUNC_15(VAR_13, "export-marks ", &VAR_14)) {
   VAR_8->export_marks = FUNC_25(VAR_14);
  } else if (FUNC_15(VAR_13, "import-marks ", &VAR_14)) {
   VAR_8->import_marks = FUNC_25(VAR_14);
  } else if (FUNC_18(VAR_13, "no-private-update")) {
   VAR_8->no_private_update = 1;
  } else if (VAR_15) {
   FUNC_4(FUNC_0("unknown mandatory capability %s; this remote "
         "helper probably needs newer version of Git"),
       VAR_13);
  }
 }
 if (!VAR_8->rs.nr && (VAR_8->import || VAR_8->bidi_import || VAR_8->export)) {
  FUNC_21(FUNC_0("this remote helper should implement refspec capability"));
 }
 FUNC_19(&VAR_9);
 if (VAR_4)
  FUNC_8(VAR_6, "Debug: Capabilities complete.\n");
 FUNC_16(VAR_7);
 return VAR_8->helper;
}
