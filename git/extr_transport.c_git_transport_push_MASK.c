
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct transport {scalar_t__ verbose; int url; int push_options; int progress; struct git_transport_data* data; } ;
struct send_pack_args {int send_mirror; int force_update; int verbose; int quiet; int dry_run; int porcelain; int atomic; int push_cert; int url; int push_options; int progress; int use_thin_pack; } ;
struct ref {int dummy; } ;
struct TYPE_2__ {int thin; } ;
struct git_transport_data {int version; scalar_t__ got_remote_heads; int * conn; int * fd; int extra_have; TYPE_1__ options; } ;
typedef int args ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct transport*,int,int *) ;
 int FUNC_6 (struct send_pack_args*,int ,int) ;




 int FUNC_7 (struct send_pack_args*,int *,int *,struct ref*,int *) ;
 scalar_t__ FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct transport *VAR_10, struct ref *VAR_11, int VAR_12)
{
 struct git_transport_data *VAR_13 = VAR_10->data;
 struct send_pack_args VAR_14;
 int VAR_15 = 0;

 if (FUNC_8() < 0)
  return -1;

 if (!VAR_13->got_remote_heads)
  FUNC_5(VAR_10, 1, ((void*)0));

 FUNC_6(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.send_mirror = !!(VAR_12 & VAR_8);
 VAR_14.force_update = !!(VAR_12 & VAR_7);
 VAR_14.use_thin_pack = VAR_13->options.thin;
 VAR_14.verbose = (VAR_10->verbose > 0);
 VAR_14.quiet = (VAR_10->verbose < 0);
 VAR_14.progress = VAR_10->progress;
 VAR_14.dry_run = !!(VAR_12 & VAR_6);
 VAR_14.porcelain = !!(VAR_12 & VAR_9);
 VAR_14.atomic = !!(VAR_12 & VAR_3);
 VAR_14.push_options = VAR_10->push_options;
 VAR_14.url = VAR_10->url;

 if (VAR_12 & VAR_4)
  VAR_14.push_cert = VAR_0;
 else if (VAR_12 & VAR_5)
  VAR_14.push_cert = VAR_1;
 else
  VAR_14.push_cert = VAR_2;

 switch (VAR_13->version) {
 case 128:
  FUNC_3(FUNC_1("support for protocol v2 not implemented yet"));
  break;
 case 129:
 case 130:
  VAR_15 = FUNC_7(&VAR_14, VAR_13->fd, VAR_13->conn, VAR_11,
    &VAR_13->extra_have);
  break;
 case 131:
  FUNC_0("unknown protocol version");
 }

 FUNC_2(VAR_13->fd[1]);
 FUNC_2(VAR_13->fd[0]);
 VAR_15 |= FUNC_4(VAR_13->conn);
 VAR_13->conn = ((void*)0);
 VAR_13->got_remote_heads = 0;

 return VAR_15;
}
