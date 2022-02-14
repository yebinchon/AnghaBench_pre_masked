
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct strbuf {int len; int buf; } ;
struct ref {int dummy; } ;
struct oidset {int dummy; } ;
struct TYPE_6__ {scalar_t__ choice; } ;
struct fetch_pack_args {scalar_t__ no_dependents; TYPE_3__ filter_options; scalar_t__ deepen; scalar_t__ include_tag; scalar_t__ no_progress; scalar_t__ use_thin_pack; TYPE_2__* server_options; } ;
struct fetch_negotiator {int dummy; } ;
struct TYPE_5__ {int nr; TYPE_1__* items; } ;
struct TYPE_4__ {int string; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct strbuf*,struct oidset*) ;
 int FUNC_2 (struct fetch_negotiator*,struct strbuf*,int*,int*) ;
 int FUNC_3 (struct strbuf*,struct fetch_pack_args*) ;
 int FUNC_4 (scalar_t__,struct ref const*,struct strbuf*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct strbuf*) ;
 int FUNC_11 (struct strbuf*) ;
 int FUNC_12 (struct strbuf*,char*,...) ;
 scalar_t__ VAR_1 ;
 int FUNC_13 (struct fetch_pack_args*,int ) ;
 scalar_t__ FUNC_14 (char*,char*,int ) ;
 scalar_t__ FUNC_15 (char*,int) ;
 int FUNC_16 (struct strbuf*) ;
 int VAR_2 ;
 int FUNC_17 (char*) ;
 scalar_t__ FUNC_18 (int,int ,int ) ;

__attribute__((used)) static int FUNC_19(struct fetch_negotiator *VAR_3, int VAR_4,
         struct fetch_pack_args *VAR_5,
         const struct ref *VAR_6, struct oidset *VAR_7,
         int *VAR_8, int *VAR_9,
         int VAR_10)
{
 int VAR_11 = 0;
 struct strbuf VAR_12 = VAR_0;

 if (FUNC_15("fetch", 1))
  FUNC_12(&VAR_12, "command=fetch");
 if (FUNC_15("agent", 0))
  FUNC_12(&VAR_12, "agent=%s", FUNC_8());
 if (VAR_5->server_options && VAR_5->server_options->nr &&
     FUNC_15("server-option", 1)) {
  int VAR_13;
  for (VAR_13 = 0; VAR_13 < VAR_5->server_options->nr; VAR_13++)
   FUNC_12(&VAR_12, "server-option=%s",
      VAR_5->server_options->items[VAR_13].string);
 }

 FUNC_10(&VAR_12);
 if (VAR_5->use_thin_pack)
  FUNC_12(&VAR_12, "thin-pack");
 if (VAR_5->no_progress)
  FUNC_12(&VAR_12, "no-progress");
 if (VAR_5->include_tag)
  FUNC_12(&VAR_12, "include-tag");
 if (VAR_1)
  FUNC_12(&VAR_12, "ofs-delta");
 if (VAR_10)
  FUNC_12(&VAR_12, "sideband-all");


 if (FUNC_14("fetch", "shallow", 0))
  FUNC_3(&VAR_12, VAR_5);
 else if (FUNC_9(VAR_2) || VAR_5->deepen)
  FUNC_5(FUNC_0("Server does not support shallow requests"));


 if (FUNC_14("fetch", "filter", 0) &&
     VAR_5->filter_options.choice) {
  const char *VAR_14 =
   FUNC_7(&VAR_5->filter_options);
  FUNC_13(VAR_5, FUNC_0("Server supports filter"));
  FUNC_12(&VAR_12, "filter %s", VAR_14);
 } else if (VAR_5->filter_options.choice) {
  FUNC_17("filtering not recognized by server, ignoring");
 }


 FUNC_4(VAR_5->no_dependents, VAR_6, &VAR_12);

 if (VAR_5->no_dependents) {
  FUNC_12(&VAR_12, "done");
  VAR_11 = 1;
 } else {

  FUNC_1(&VAR_12, VAR_7);


  VAR_11 = FUNC_2(VAR_3, &VAR_12, VAR_8, VAR_9);
 }


 FUNC_11(&VAR_12);
 if (FUNC_18(VAR_4, VAR_12.buf, VAR_12.len) < 0)
  FUNC_6(FUNC_0("unable to write request to remote"));

 FUNC_16(&VAR_12);
 return VAR_11;
}
