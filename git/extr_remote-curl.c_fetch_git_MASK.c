
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct strbuf {scalar_t__ len; int buf; } ;
struct rpc_state {char* service_name; int gzip_request; } ;
struct ref {int * name; int old_oid; } ;
struct discovery {int dummy; } ;
struct argv_array {int argv; } ;
typedef int rpc ;
struct TYPE_6__ {int nr; TYPE_1__* items; } ;
struct TYPE_8__ {int verbosity; scalar_t__ filter; scalar_t__ no_dependents; scalar_t__ from_promisor; scalar_t__ depth; scalar_t__ deepen_relative; TYPE_2__ deepen_not; scalar_t__ deepen_since; int progress; scalar_t__ update_shallow; scalar_t__ cloning; scalar_t__ check_self_contained_and_connected; scalar_t__ thin; scalar_t__ followtags; } ;
struct TYPE_7__ {char* buf; } ;
struct TYPE_5__ {scalar_t__ string; } ;


 struct argv_array VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct argv_array*) ;
 int FUNC_2 (struct argv_array*,char*) ;
 int FUNC_3 (struct argv_array*,char*,scalar_t__) ;
 int FUNC_4 (struct argv_array*,char*,char*,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct rpc_state*,int ,int) ;
 int FUNC_7 (int *) ;
 TYPE_4__ VAR_2 ;
 int FUNC_8 (struct strbuf*) ;
 int FUNC_9 (struct strbuf*,char*,int ,int *) ;
 int FUNC_10 (struct rpc_state*,struct discovery*,int ,struct strbuf*,struct strbuf*) ;
 int FUNC_11 (struct strbuf*) ;
 TYPE_3__ VAR_3 ;
 int FUNC_12 (int,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct discovery *VAR_4,
 int VAR_5, struct ref **VAR_6)
{
 struct rpc_state VAR_7;
 struct strbuf VAR_8 = VAR_1;
 int VAR_9, VAR_10;
 struct argv_array VAR_11 = VAR_0;
 struct strbuf VAR_12 = VAR_1;

 FUNC_4(&VAR_11, "fetch-pack", "--stateless-rpc",
    "--stdin", "--lock-pack", ((void*)0));
 if (VAR_2.followtags)
  FUNC_2(&VAR_11, "--include-tag");
 if (VAR_2.thin)
  FUNC_2(&VAR_11, "--thin");
 if (VAR_2.verbosity >= 3)
  FUNC_4(&VAR_11, "-v", "-v", ((void*)0));
 if (VAR_2.check_self_contained_and_connected)
  FUNC_2(&VAR_11, "--check-self-contained-and-connected");
 if (VAR_2.cloning)
  FUNC_2(&VAR_11, "--cloning");
 if (VAR_2.update_shallow)
  FUNC_2(&VAR_11, "--update-shallow");
 if (!VAR_2.progress)
  FUNC_2(&VAR_11, "--no-progress");
 if (VAR_2.depth)
  FUNC_3(&VAR_11, "--depth=%lu", VAR_2.depth);
 if (VAR_2.deepen_since)
  FUNC_3(&VAR_11, "--shallow-since=%s", VAR_2.deepen_since);
 for (VAR_9 = 0; VAR_9 < VAR_2.deepen_not.nr; VAR_9++)
  FUNC_3(&VAR_11, "--shallow-exclude=%s",
     VAR_2.deepen_not.items[VAR_9].string);
 if (VAR_2.deepen_relative && VAR_2.depth)
  FUNC_2(&VAR_11, "--deepen-relative");
 if (VAR_2.from_promisor)
  FUNC_2(&VAR_11, "--from-promisor");
 if (VAR_2.no_dependents)
  FUNC_2(&VAR_11, "--no-dependents");
 if (VAR_2.filter)
  FUNC_3(&VAR_11, "--filter=%s", VAR_2.filter);
 FUNC_2(&VAR_11, VAR_3.buf);

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  struct ref *VAR_13 = VAR_6[VAR_9];
  if (!*VAR_13->name)
   FUNC_5(FUNC_0("cannot fetch by sha1 over smart http"));
  FUNC_9(&VAR_8, "%s %s\n",
     FUNC_7(&VAR_13->old_oid), VAR_13->name);
 }
 FUNC_8(&VAR_8);

 FUNC_6(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.service_name = "git-upload-pack",
 VAR_7.gzip_request = 1;

 VAR_10 = FUNC_10(&VAR_7, VAR_4, VAR_11.argv, &VAR_8, &VAR_12);
 if (VAR_12.len)
  FUNC_12(1, VAR_12.buf, VAR_12.len);
 FUNC_11(&VAR_12);
 FUNC_11(&VAR_8);
 FUNC_1(&VAR_11);
 return VAR_10;
}
