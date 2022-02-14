
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_18__ ;
typedef struct TYPE_24__ TYPE_16__ ;
typedef struct TYPE_23__ TYPE_15__ ;
typedef struct TYPE_22__ TYPE_13__ ;
typedef struct TYPE_21__ TYPE_12__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct TYPE_25__ {int fsm; } ;
struct TYPE_32__ {int total; } ;
struct TYPE_23__ {TYPE_18__ ccp; TYPE_7__ stats; int proto_out; int proto_in; int Queue; } ;
struct TYPE_20__ {int sun_path; } ;
struct TYPE_19__ {struct datalink* dl; } ;
struct TYPE_24__ {TYPE_11__ socket; TYPE_10__ send; } ;
struct TYPE_26__ {int len; int address; int class; } ;
struct TYPE_22__ {TYPE_1__ enddisc; int authname; } ;
struct TYPE_34__ {scalar_t__ next_in; scalar_t__ min_in; } ;
struct TYPE_33__ {int af; scalar_t__ link; scalar_t__ seq; } ;
struct TYPE_27__ {int period; } ;
struct TYPE_28__ {TYPE_2__ autoload; } ;
struct mp {int active; scalar_t__ local_mrru; scalar_t__ peer_mrru; scalar_t__ local_is12bit; scalar_t__ peer_is12bit; TYPE_15__ link; TYPE_12__* bundle; TYPE_16__ server; TYPE_13__ peer; TYPE_9__ seq; TYPE_8__ out; TYPE_3__ cfg; } ;
struct lcp {scalar_t__ want_mrru; scalar_t__ his_mrru; scalar_t__ want_shortseq; scalar_t__ his_shortseq; } ;
struct datalink {int name; TYPE_6__* physical; TYPE_13__ peer; } ;
struct TYPE_29__ {int * parent; } ;
struct TYPE_30__ {TYPE_4__ stats; struct lcp lcp; } ;
struct TYPE_31__ {TYPE_5__ link; } ;
struct TYPE_21__ {int ncp; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_18__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int ,...) ;
 int FUNC_4 (int ,char,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_6 (TYPE_16__*,TYPE_13__*) ;
 int FUNC_7 (int *,TYPE_15__*) ;
 int FUNC_8 (TYPE_13__*,TYPE_13__*) ;
 int FUNC_9 (int *,int ,struct mp*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;

int
FUNC_12(struct mp *VAR_7, struct datalink *VAR_8)
{
  struct lcp *VAR_9 = &VAR_8->physical->link.lcp;

  if (VAR_7->active) {

    if (!FUNC_8(&VAR_8->peer, &VAR_7->peer)) {
      FUNC_3(VAR_1, "%s: Inappropriate peer !\n", VAR_8->name);
      FUNC_3(VAR_1, "  Attached to peer %s/%s\n", VAR_7->peer.authname,
                 FUNC_5(VAR_7->peer.enddisc.class, VAR_7->peer.enddisc.address,
                            VAR_7->peer.enddisc.len));
      FUNC_3(VAR_1, "  New link is peer %s/%s\n", VAR_8->peer.authname,
                 FUNC_5(VAR_8->peer.enddisc.class, VAR_8->peer.enddisc.address,
                            VAR_8->peer.enddisc.len));
      return VAR_3;
    }
    if (VAR_7->local_mrru != VAR_9->want_mrru ||
        VAR_7->peer_mrru != VAR_9->his_mrru ||
        VAR_7->local_is12bit != VAR_9->want_shortseq ||
        VAR_7->peer_is12bit != VAR_9->his_shortseq) {
      FUNC_3(VAR_1, "%s: Invalid MRRU/SHORTSEQ MP parameters !\n",
                VAR_8->name);
      return VAR_3;
    }
    return VAR_2;
  } else {


    VAR_7->local_mrru = VAR_9->want_mrru;
    VAR_7->peer_mrru = VAR_9->his_mrru;
    VAR_7->local_is12bit = VAR_9->want_shortseq;
    VAR_7->peer_is12bit = VAR_9->his_shortseq;
    VAR_7->peer = VAR_8->peer;

    FUNC_10(&VAR_7->link.stats.total);
    FUNC_11(&VAR_7->link.stats.total, VAR_7->cfg.autoload.period);
    FUNC_9(&VAR_7->link.stats.total, VAR_6, VAR_7);
    FUNC_4(VAR_7->link.Queue, '\0', sizeof VAR_7->link.Queue);
    FUNC_4(VAR_7->link.proto_in, '\0', sizeof VAR_7->link.proto_in);
    FUNC_4(VAR_7->link.proto_out, '\0', sizeof VAR_7->link.proto_out);


    VAR_8->physical->link.stats.parent = &VAR_7->link.stats.total;

    VAR_7->out.seq = 0;
    VAR_7->out.link = 0;
    VAR_7->out.af = VAR_0;
    VAR_7->seq.min_in = 0;
    VAR_7->seq.next_in = 0;





    switch (FUNC_6(&VAR_7->server, &VAR_7->peer)) {
    case 130:
      FUNC_3(VAR_1, "mp: Transfer link on %s\n",
                VAR_7->server.socket.sun_path);
      VAR_7->server.send.dl = VAR_8;
      return VAR_4;
    case 129:
      return VAR_3;
    case 128:
      FUNC_3(VAR_1, "mp: Listening on %s\n", VAR_7->server.socket.sun_path);
      FUNC_3(VAR_1, "    First link: %s\n", VAR_8->name);


      FUNC_7(&VAR_7->bundle->ncp, &VAR_7->link);


      if (FUNC_0(&VAR_7->link.ccp)) {
        FUNC_2(&VAR_7->link.ccp.fsm);
        FUNC_1(&VAR_7->link.ccp.fsm);
      }

      VAR_7->active = 1;
      break;
    }
  }

  return VAR_5;
}
