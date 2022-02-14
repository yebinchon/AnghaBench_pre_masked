
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sfe_connection_create {int protocol; int dest_port; int dest_ip; int src_port; int src_ip; int flags; int dest_td_max_end; int dest_td_end; int dest_td_max_window; int dest_td_window_scale; int src_td_max_end; int src_td_end; int src_td_max_window; int src_td_window_scale; } ;
struct TYPE_5__ {int state; TYPE_1__* seen; } ;
struct TYPE_6__ {TYPE_2__ tcp; } ;
struct nf_conn {int lock; TYPE_3__ proto; } ;
struct TYPE_4__ {int flags; int td_maxend; int td_end; int td_maxwin; int td_scale; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct sfe_connection_create *VAR_6, struct nf_conn *VAR_7)
{
 switch (VAR_6->protocol) {
 case 129:
  VAR_6->src_td_window_scale = VAR_7->proto.tcp.seen[0].td_scale;
  VAR_6->src_td_max_window = VAR_7->proto.tcp.seen[0].td_maxwin;
  VAR_6->src_td_end = VAR_7->proto.tcp.seen[0].td_end;
  VAR_6->src_td_max_end = VAR_7->proto.tcp.seen[0].td_maxend;
  VAR_6->dest_td_window_scale = VAR_7->proto.tcp.seen[1].td_scale;
  VAR_6->dest_td_max_window = VAR_7->proto.tcp.seen[1].td_maxwin;
  VAR_6->dest_td_end = VAR_7->proto.tcp.seen[1].td_end;
  VAR_6->dest_td_max_end = VAR_7->proto.tcp.seen[1].td_maxend;

  if (VAR_5
      || (VAR_7->proto.tcp.seen[0].flags & VAR_2)
      || (VAR_7->proto.tcp.seen[1].flags & VAR_2)) {
   VAR_6->flags |= VAR_3;
  }






  FUNC_3(&VAR_7->lock);
  if (VAR_7->proto.tcp.state != VAR_4) {
   FUNC_4(&VAR_7->lock);
   FUNC_1(VAR_0);
   FUNC_0("connection in termination state: %#x, s: %pI4:%u, d: %pI4:%u\n",
        VAR_7->proto.tcp.state, &VAR_6->src_ip, FUNC_2(VAR_6->src_port),
        &VAR_6->dest_ip, FUNC_2(VAR_6->dest_port));
   return 0;
  }
  FUNC_4(&VAR_7->lock);
  break;

 case 128:
  break;

 default:
  FUNC_1(VAR_1);
  FUNC_0("unhandled protocol %d\n", VAR_6->protocol);
  return 0;
 }

 return 1;
}
