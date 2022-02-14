
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct transport {int verbose; int pack_lockfile; struct ref* remote_refs; int server_options; int stateless_rpc; int cloning; int progress; struct git_transport_data* data; } ;
struct ref {int exact_oid; } ;
struct TYPE_2__ {int connectivity_checked; int self_contained_and_connected; int negotiation_tips; int filter_options; int no_dependents; int from_promisor; int update_shallow; int check_self_contained_and_connected; int deepen_relative; int deepen_not; int deepen_since; int depth; int followtags; int thin; int keep; int uploadpack; } ;
struct git_transport_data {int version; TYPE_1__ options; scalar_t__ got_remote_heads; int * conn; int * fd; int shallow; } ;
struct fetch_pack_args {int lock_pack; int verbose; int quiet; int no_progress; int connectivity_checked; int self_contained_and_connected; int negotiation_tips; int server_options; int stateless_rpc; int filter_options; int no_dependents; int from_promisor; int update_shallow; int cloning; int check_self_contained_and_connected; int deepen_relative; int deepen_not; int deepen_since; int depth; int include_tag; int use_thin_pack; int keep_pack; int uploadpack; } ;
typedef int args ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct transport*) ;
 struct ref* FUNC_3 (struct fetch_pack_args*,int *,struct ref*,struct ref**,int,int *,int *,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct ref*) ;
 struct ref* FUNC_6 (struct transport*,int ,int *,int) ;
 int FUNC_7 (struct fetch_pack_args*,int ,int) ;




 scalar_t__ FUNC_8 (struct ref**,int) ;

__attribute__((used)) static int FUNC_9(struct transport *VAR_0,
          int VAR_1, struct ref **VAR_2)
{
 int VAR_3 = 0;
 struct git_transport_data *VAR_4 = VAR_0->data;
 struct ref *VAR_5 = ((void*)0);
 struct fetch_pack_args VAR_6;
 struct ref *VAR_7 = ((void*)0);

 FUNC_7(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.uploadpack = VAR_4->options.uploadpack;
 VAR_6.keep_pack = VAR_4->options.keep;
 VAR_6.lock_pack = 1;
 VAR_6.use_thin_pack = VAR_4->options.thin;
 VAR_6.include_tag = VAR_4->options.followtags;
 VAR_6.verbose = (VAR_0->verbose > 1);
 VAR_6.quiet = (VAR_0->verbose < 0);
 VAR_6.no_progress = !VAR_0->progress;
 VAR_6.depth = VAR_4->options.depth;
 VAR_6.deepen_since = VAR_4->options.deepen_since;
 VAR_6.deepen_not = VAR_4->options.deepen_not;
 VAR_6.deepen_relative = VAR_4->options.deepen_relative;
 VAR_6.check_self_contained_and_connected =
  VAR_4->options.check_self_contained_and_connected;
 VAR_6.cloning = VAR_0->cloning;
 VAR_6.update_shallow = VAR_4->options.update_shallow;
 VAR_6.from_promisor = VAR_4->options.from_promisor;
 VAR_6.no_dependents = VAR_4->options.no_dependents;
 VAR_6.filter_options = VAR_4->options.filter_options;
 VAR_6.stateless_rpc = VAR_0->stateless_rpc;
 VAR_6.server_options = VAR_0->server_options;
 VAR_6.negotiation_tips = VAR_4->options.negotiation_tips;

 if (!VAR_4->got_remote_heads) {
  int VAR_8;
  int VAR_9 = 0;
  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
   if (!VAR_2[VAR_8]->exact_oid) {
    VAR_9 = 1;
    break;
   }
  }
  VAR_7 = FUNC_6(VAR_0, 0, ((void*)0), VAR_9);
 }

 switch (VAR_4->version) {
 case 128:
  VAR_5 = FUNC_3(&VAR_6, VAR_4->fd,
      VAR_7 ? VAR_7 : VAR_0->remote_refs,
      VAR_2, VAR_1, &VAR_4->shallow,
      &VAR_0->pack_lockfile, VAR_4->version);
  break;
 case 129:
 case 130:
  FUNC_2(VAR_0);
  VAR_5 = FUNC_3(&VAR_6, VAR_4->fd,
      VAR_7 ? VAR_7 : VAR_0->remote_refs,
      VAR_2, VAR_1, &VAR_4->shallow,
      &VAR_0->pack_lockfile, VAR_4->version);
  break;
 case 131:
  FUNC_0("unknown protocol version");
 }

 FUNC_1(VAR_4->fd[0]);
 FUNC_1(VAR_4->fd[1]);
 if (FUNC_4(VAR_4->conn))
  VAR_3 = -1;
 VAR_4->conn = ((void*)0);
 VAR_4->got_remote_heads = 0;
 VAR_4->options.self_contained_and_connected =
  VAR_6.self_contained_and_connected;
 VAR_4->options.connectivity_checked = VAR_6.connectivity_checked;

 if (VAR_5 == ((void*)0))
  VAR_3 = -1;
 if (FUNC_8(VAR_2, VAR_1))
  VAR_3 = -1;

 FUNC_5(VAR_7);
 FUNC_5(VAR_5);
 return VAR_3;
}
