
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ magic; } ;
struct TYPE_11__ {int s6_addr; } ;
struct TYPE_10__ {scalar_t__ s_addr; } ;
struct TYPE_9__ {int wakeup; } ;
struct TYPE_14__ {scalar_t__ state; } ;
struct sockaddr_in6 {int fd; int flags; int remote_port; struct sockaddr_in6* prev; struct sockaddr_in6* next; int basic_type; TYPE_5__ out_p; TYPE_5__ in_u; TYPE_5__ out; TYPE_5__ in; TYPE_4__* type; int remote_ipv6; void* our_port; int our_ipv6; int sin6_port; TYPE_3__ sin6_addr; void* remote_ip; int sin_port; TYPE_2__ sin_addr; void* our_ip; struct conn_query* last_query; struct conn_query* first_query; int status; int extra; TYPE_1__ timer; int out_buff; TYPE_7__ Out; int in_buff; TYPE_7__ In; scalar_t__ generation; struct conn_target* target; int * ev; } ;
struct sockaddr_in {int fd; int flags; int remote_port; struct sockaddr_in* prev; struct sockaddr_in* next; int basic_type; TYPE_5__ out_p; TYPE_5__ in_u; TYPE_5__ out; TYPE_5__ in; TYPE_4__* type; int remote_ipv6; void* our_port; int our_ipv6; int sin6_port; TYPE_3__ sin6_addr; void* remote_ip; int sin_port; TYPE_2__ sin_addr; void* our_ip; struct conn_query* last_query; struct conn_query* first_query; int status; int extra; TYPE_1__ timer; int out_buff; TYPE_7__ Out; int in_buff; TYPE_7__ In; scalar_t__ generation; struct conn_target* target; int * ev; } ;
struct sockaddr {int dummy; } ;
struct connection {int fd; int flags; int remote_port; struct connection* prev; struct connection* next; int basic_type; TYPE_5__ out_p; TYPE_5__ in_u; TYPE_5__ out; TYPE_5__ in; TYPE_4__* type; int remote_ipv6; void* our_port; int our_ipv6; int sin6_port; TYPE_3__ sin6_addr; void* remote_ip; int sin_port; TYPE_2__ sin_addr; void* our_ip; struct conn_query* last_query; struct conn_query* first_query; int status; int extra; TYPE_1__ timer; int out_buff; TYPE_7__ Out; int in_buff; TYPE_7__ In; scalar_t__ generation; struct conn_target* target; int * ev; } ;
struct TYPE_15__ {scalar_t__ s_addr; } ;
struct conn_target {scalar_t__ refcnt; int ready_outbound_connections; int min_connections; int max_connections; scalar_t__ next_reconnect; int outbound_connections; int port; TYPE_8__ target; int target_ipv6; int extra; TYPE_4__* type; int active_outbound_connections; struct sockaddr_in6* first_conn; } ;
struct conn_query {int dummy; } ;
typedef int self ;
typedef int event_t ;
struct TYPE_12__ {int (* check_ready ) (struct sockaddr_in6*) ;int flags; scalar_t__ (* init_outbound ) (struct sockaddr_in6*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sockaddr_in6* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int,int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct conn_target*) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;





 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int ,int ,struct sockaddr_in6*) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int,struct sockaddr*,unsigned int*) ;
 char* FUNC_9 (TYPE_8__) ;
 int FUNC_10 (TYPE_7__*,int ,int ) ;
 int VAR_18 ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (struct sockaddr_in6*,int ,unsigned int) ;
 void* FUNC_13 (scalar_t__) ;
 void* FUNC_14 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_15 (TYPE_5__*) ;
 int FUNC_16 (TYPE_5__*,int ) ;
 int VAR_22 ;
 char* FUNC_17 (int ) ;
 char* FUNC_18 (struct sockaddr_in6*) ;
 char* FUNC_19 (struct sockaddr_in6*) ;
 int VAR_23 ;
 int FUNC_20 (struct sockaddr_in6*) ;
 scalar_t__ FUNC_21 (struct sockaddr_in6*) ;
 scalar_t__ VAR_24 ;
 int FUNC_22 (int,char*,char*,void*,char*,int) ;

int FUNC_23 (struct conn_target *VAR_25) {
  int VAR_26 = 0, VAR_27 = 0, VAR_28 = 0, VAR_29 = 0, VAR_30;
  struct connection *VAR_31, *VAR_32;
  event_t *VAR_33;

  FUNC_0 (VAR_25->refcnt >= 0);

  for (VAR_31 = VAR_25->first_conn; VAR_31 != (struct connection *) VAR_25; VAR_31 = VAR_31->next) {
    int VAR_34 = VAR_31->type->check_ready (VAR_31);
    switch (VAR_34) {
    case 130:
    case 132:
      break;
    case 129:
      VAR_27++;
      break;
    case 128:
      VAR_29++;
      break;
    case 131:
      VAR_28++;
      break;
    default:
      FUNC_0 (0);
    }
  }

  VAR_25->ready_outbound_connections = VAR_27;
  VAR_30 = VAR_25->min_connections + VAR_28 + ((VAR_29 + 1) >> 1);
  if (VAR_30 > VAR_25->max_connections) {
    VAR_30 = VAR_25->max_connections;
  }

  if (VAR_21 < VAR_25->next_reconnect && !VAR_25->active_outbound_connections) {
    return 0;
  }

  while (VAR_25->outbound_connections < VAR_30) {
    if (VAR_24 > 0) {
      if (VAR_25->target.s_addr) {
 FUNC_7 (VAR_23, "Creating NEW connection to %s:%d\n", FUNC_9 (VAR_25->target), VAR_25->port);
      } else {
 FUNC_7 (VAR_23, "Creating NEW ipv6 connection to [%s]:%d\n", FUNC_17 (VAR_25->target_ipv6), VAR_25->port);
      }
    }
    int VAR_35 = VAR_25->target.s_addr ? FUNC_1 (VAR_25->target.s_addr, VAR_25->port, 0) : FUNC_2 (VAR_25->target_ipv6, VAR_25->port, VAR_12);
    if (VAR_35 < 0 && VAR_24 > 0) {
      FUNC_4 (VAR_25);
      if (VAR_24 > 0) {
 if (VAR_25->target.s_addr) {
   FUNC_7 (VAR_23, "error connecting to %s:%d: %m", FUNC_9 (VAR_25->target), VAR_25->port);
 } else {
   FUNC_7 (VAR_23, "error connecting to [%s]:%d\n", FUNC_17 (VAR_25->target_ipv6), VAR_25->port);
 }
      }
      return VAR_26;
    }
    if (VAR_35 >= VAR_11 || VAR_35 >= VAR_10) {
      FUNC_3 (VAR_35);
      FUNC_4 (VAR_25);
      if (VAR_24 > 0) {
 if (VAR_25->target.s_addr) {
   FUNC_7 (VAR_23, "out of sockets when connecting to %s:%d", FUNC_9(VAR_25->target), VAR_25->port);
 } else {
   FUNC_7 (VAR_23, "out of sockets when connecting to [%s]:%d\n", FUNC_17 (VAR_25->target_ipv6), VAR_25->port);
 }
      }
      return VAR_26;
    }

    if (VAR_35 > VAR_18) {
      VAR_18 = VAR_35;
    }
    VAR_33 = VAR_9 + VAR_35;
    VAR_31 = VAR_5 + VAR_35;
    FUNC_12 (VAR_31, 0, sizeof (struct connection));
    VAR_31->fd = VAR_35;
    VAR_31->ev = VAR_33;
    VAR_31->target = VAR_25;
    VAR_31->generation = ++VAR_14;
    VAR_31->flags = VAR_4;

    if (VAR_25->type->flags & VAR_2) {
      VAR_31->flags |= VAR_2;
      VAR_31->In.state = VAR_31->Out.state = 0;
      FUNC_16 (&VAR_31->in, 0);
      FUNC_16 (&VAR_31->out, 0);
      FUNC_16 (&VAR_31->in_u, 0);
      FUNC_16 (&VAR_31->out_p, 0);
    } else {
      VAR_31->in.magic = VAR_31->out.magic = 0;
      FUNC_10 (&VAR_31->In, VAR_31->in_buff, VAR_0);
      FUNC_10 (&VAR_31->Out, VAR_31->out_buff, VAR_0);
    }

    VAR_31->timer.wakeup = VAR_15;
    VAR_31->type = VAR_25->type;
    VAR_31->extra = VAR_25->extra;
    VAR_31->basic_type = VAR_17;
    VAR_31->status = VAR_13;
    VAR_31->first_query = VAR_31->last_query = (struct conn_query *) VAR_31;

    if (VAR_25->target.s_addr) {
      static struct sockaddr_in VAR_36;
      unsigned VAR_37;
      FUNC_12 (&VAR_36, 0, VAR_37 = sizeof (VAR_36));
      FUNC_8 (VAR_31->fd, (struct sockaddr *) &VAR_36, &VAR_37);
      VAR_31->our_ip = FUNC_13 (VAR_36.sin_addr.s_addr);
      VAR_31->our_port = FUNC_14 (VAR_36.sin_port);
      VAR_31->remote_ip = FUNC_13 (VAR_25->target.s_addr);
      VAR_31->remote_port = VAR_25->port;
      FUNC_22 (2, "Created new outbound connection %s:%d -> %s:%d\n", FUNC_18 (VAR_31), VAR_31->our_port, FUNC_19 (VAR_31), VAR_31->remote_port);
    } else {
      VAR_31->flags |= VAR_1;
      static struct sockaddr_in6 VAR_38;
      unsigned VAR_39;
      FUNC_12 (&VAR_38, 0, VAR_39 = sizeof (VAR_38));
      FUNC_8 (VAR_31->fd, (struct sockaddr *) &VAR_38, &VAR_39);
      FUNC_11 (VAR_31->our_ipv6, VAR_38.sin6_addr.s6_addr, 16);
      FUNC_11 (VAR_31->remote_ipv6, VAR_25->target_ipv6, 16);
      VAR_31->our_port = FUNC_14 (VAR_38.sin6_port);
      VAR_31->remote_port = VAR_25->port;
      FUNC_22 (2, "Created new outbound ipv6 connection [%s]:%d -> [%s]:%d\n", FUNC_17 (VAR_31->our_ipv6), VAR_31->our_port, FUNC_17 (VAR_31->remote_ipv6), VAR_31->remote_port);
    }

    if (VAR_31->type->init_outbound (VAR_31) >= 0) {
      FUNC_6 (VAR_35, 0, VAR_22, VAR_31);
      FUNC_5 (VAR_35, (VAR_31->flags & VAR_3 ? VAR_6 : 0) | (VAR_31->flags & VAR_4 ? VAR_8 : 0) | VAR_7);
      VAR_19++;
      VAR_25->outbound_connections++;
      VAR_20++;
      VAR_26++;
    } else {
      if (VAR_31->flags & VAR_2) {
 FUNC_15 (&VAR_31->in);
 FUNC_15 (&VAR_31->out);
 FUNC_15 (&VAR_31->in_u);
 FUNC_15 (&VAR_31->out_p);
      }
      VAR_31->basic_type = VAR_16;
      FUNC_3 (VAR_35);
      FUNC_4 (VAR_25);
      return VAR_26;
    }

    VAR_32 = (struct connection *)VAR_25;
    VAR_31->next = VAR_32;
    VAR_31->prev = VAR_32->prev;
    VAR_32->prev->next = VAR_31;
    VAR_32->prev = VAR_31;

    if (VAR_24 > 0) {
      if (VAR_31->flags & VAR_1) {
 FUNC_7 (VAR_23, "outbound ipv6 connection: handle %d to [%s]:%d\n", VAR_31->fd, FUNC_17 (VAR_25->target_ipv6), VAR_25->port);
      } else {
 FUNC_7 (VAR_23, "outbound connection: handle %d to %s:%d\n", VAR_31->fd, FUNC_9 (VAR_25->target), VAR_25->port);
      }
    }
  }
  return VAR_26;
}
