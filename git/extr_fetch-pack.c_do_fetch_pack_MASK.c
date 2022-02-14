
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shallow_info {int shallow; scalar_t__ nr_theirs; scalar_t__ nr_ours; } ;
struct repository {int dummy; } ;
struct ref {int dummy; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {scalar_t__ choice; } ;
struct fetch_pack_args {scalar_t__ depth; int deepen; scalar_t__ stateless_rpc; int keep_pack; int no_dependents; scalar_t__ deepen_relative; scalar_t__ deepen_not; scalar_t__ deepen_since; TYPE_1__ filter_options; scalar_t__ include_tag; scalar_t__ no_progress; scalar_t__ use_thin_pack; } ;
struct fetch_negotiator {int (* release ) (struct fetch_negotiator*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ref**,int,int ) ;
 char* FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 struct ref* FUNC_2 (struct ref const*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct fetch_pack_args*,struct ref**) ;
 int FUNC_5 (struct repository*,struct fetch_negotiator*) ;
 int FUNC_6 (struct fetch_pack_args*,struct ref**,struct ref**,int) ;
 scalar_t__ FUNC_7 (struct fetch_negotiator*,struct fetch_pack_args*,int*,struct object_id*,struct ref*) ;
 scalar_t__ FUNC_8 (struct fetch_pack_args*,int*,char**,struct ref**,int) ;
 scalar_t__ FUNC_9 (struct repository*) ;
 int FUNC_10 (struct fetch_negotiator*,struct fetch_pack_args*,struct ref**) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (int) ;
 scalar_t__ VAR_10 ;
 int FUNC_12 (struct fetch_pack_args*,char*,...) ;
 int VAR_11 ;
 char* FUNC_13 (char*,int*) ;
 scalar_t__ FUNC_14 (char*) ;
 int VAR_12 ;
 int FUNC_15 (int *,int **,int *) ;
 int * FUNC_16 (int ) ;
 int VAR_13 ;
 int FUNC_17 (struct ref**,int ) ;
 int FUNC_18 (struct fetch_negotiator*) ;
 struct repository* VAR_14 ;
 int VAR_15 ;
 int FUNC_19 (char*) ;

__attribute__((used)) static struct ref *FUNC_20(struct fetch_pack_args *VAR_16,
     int VAR_17[2],
     const struct ref *VAR_18,
     struct ref **VAR_19, int VAR_20,
     struct shallow_info *VAR_21,
     char **VAR_22)
{
 struct repository *VAR_23 = VAR_14;
 struct ref *VAR_24 = FUNC_2(VAR_18);
 struct object_id VAR_25;
 const char *VAR_26;
 int VAR_27;
 struct fetch_negotiator VAR_28;
 FUNC_5(VAR_23, &VAR_28);

 FUNC_17(&VAR_24, VAR_11);
 FUNC_0(VAR_19, VAR_20, VAR_5);

 if ((VAR_26 = FUNC_13("agent", &VAR_27))) {
  VAR_2 = 1;
  if (VAR_27)
   FUNC_12(VAR_16, FUNC_1("Server version is %.*s"),
          VAR_27, VAR_26);
 }

 if (FUNC_14("shallow"))
  FUNC_12(VAR_16, FUNC_1("Server supports %s"), "shallow");
 else if (VAR_16->depth > 0 || FUNC_9(VAR_23))
  FUNC_3(FUNC_1("Server does not support shallow clients"));
 if (VAR_16->depth > 0 || VAR_16->deepen_since || VAR_16->deepen_not)
  VAR_16->deepen = 1;
 if (FUNC_14("multi_ack_detailed")) {
  FUNC_12(VAR_16, FUNC_1("Server supports %s"), "multi_ack_detailed");
  VAR_8 = 2;
  if (FUNC_14("no-done")) {
   FUNC_12(VAR_16, FUNC_1("Server supports %s"), "no-done");
   if (VAR_16->stateless_rpc)
    VAR_9 = 1;
  }
 }
 else if (FUNC_14("multi_ack")) {
  FUNC_12(VAR_16, FUNC_1("Server supports %s"), "multi_ack");
  VAR_8 = 1;
 }
 if (FUNC_14("side-band-64k")) {
  FUNC_12(VAR_16, FUNC_1("Server supports %s"), "side-band-64k");
  VAR_15 = 2;
 }
 else if (FUNC_14("side-band")) {
  FUNC_12(VAR_16, FUNC_1("Server supports %s"), "side-band");
  VAR_15 = 1;
 }
 if (FUNC_14("allow-tip-sha1-in-want")) {
  FUNC_12(VAR_16, FUNC_1("Server supports %s"), "allow-tip-sha1-in-want");
  VAR_3 |= VAR_1;
 }
 if (FUNC_14("allow-reachable-sha1-in-want")) {
  FUNC_12(VAR_16, FUNC_1("Server supports %s"), "allow-reachable-sha1-in-want");
  VAR_3 |= VAR_0;
 }
 if (FUNC_14("thin-pack"))
  FUNC_12(VAR_16, FUNC_1("Server supports %s"), "thin-pack");
 else
  VAR_16->use_thin_pack = 0;
 if (FUNC_14("no-progress"))
  FUNC_12(VAR_16, FUNC_1("Server supports %s"), "no-progress");
 else
  VAR_16->no_progress = 0;
 if (FUNC_14("include-tag"))
  FUNC_12(VAR_16, FUNC_1("Server supports %s"), "include-tag");
 else
  VAR_16->include_tag = 0;
 if (FUNC_14("ofs-delta"))
  FUNC_12(VAR_16, FUNC_1("Server supports %s"), "ofs-delta");
 else
  VAR_10 = 0;

 if (FUNC_14("filter")) {
  VAR_12 = 1;
  FUNC_12(VAR_16, FUNC_1("Server supports %s"), "filter");
 } else if (VAR_16->filter_options.choice) {
  FUNC_19("filtering not recognized by server, ignoring");
 }

 if (FUNC_14("deepen-since")) {
  FUNC_12(VAR_16, FUNC_1("Server supports %s"), "deepen-since");
  VAR_7 = 1;
 } else if (VAR_16->deepen_since)
  FUNC_3(FUNC_1("Server does not support --shallow-since"));
 if (FUNC_14("deepen-not")) {
  FUNC_12(VAR_16, FUNC_1("Server supports %s"), "deepen-not");
  VAR_6 = 1;
 } else if (VAR_16->deepen_not)
  FUNC_3(FUNC_1("Server does not support --shallow-exclude"));
 if (FUNC_14("deepen-relative"))
  FUNC_12(VAR_16, FUNC_1("Server supports %s"), "deepen-relative");
 else if (VAR_16->deepen_relative)
  FUNC_3(FUNC_1("Server does not support --deepen"));

 if (!VAR_16->no_dependents) {
  FUNC_10(&VAR_28, VAR_16, &VAR_24);
  FUNC_6(VAR_16, &VAR_24, VAR_19, VAR_20);
  if (FUNC_4(VAR_16, &VAR_24)) {
   FUNC_11(VAR_17[1]);
   goto all_done;
  }
 } else {
  FUNC_6(VAR_16, &VAR_24, VAR_19, VAR_20);
 }
 if (FUNC_7(&VAR_28, VAR_16, VAR_17, &VAR_25, VAR_24) < 0)
  if (!VAR_16->keep_pack)



   FUNC_19(FUNC_1("no common commits"));

 if (VAR_16->stateless_rpc)
  FUNC_11(VAR_17[1]);
 if (VAR_16->deepen)
  FUNC_15(&VAR_13, &VAR_4,
     ((void*)0));
 else if (VAR_21->nr_ours || VAR_21->nr_theirs)
  VAR_4 = FUNC_16(VAR_21->shallow);
 else
  VAR_4 = ((void*)0);
 if (FUNC_8(VAR_16, VAR_17, VAR_22, VAR_19, VAR_20))
  FUNC_3(FUNC_1("git fetch-pack: fetch failed."));

 all_done:
 VAR_28.release(&VAR_28);
 return VAR_24;
}
