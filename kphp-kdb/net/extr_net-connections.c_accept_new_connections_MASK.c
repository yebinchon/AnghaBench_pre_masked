
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ magic; } ;
struct TYPE_13__ {int s6_addr; } ;
struct TYPE_14__ {scalar_t__ sin6_family; TYPE_4__ sin6_addr; int sin6_port; } ;
struct TYPE_11__ {int s_addr; } ;
struct TYPE_12__ {scalar_t__ sin_family; int sin_port; TYPE_2__ sin_addr; } ;
struct TYPE_10__ {int wakeup; } ;
struct TYPE_17__ {scalar_t__ state; } ;
union sockaddr_in46 {scalar_t__ basic_type; int fd; int flags; int listening; int window_clamp; TYPE_7__ out_p; TYPE_7__ in_u; TYPE_7__ out; TYPE_7__ in; scalar_t__ generation; scalar_t__ listening_generation; TYPE_6__* type; void* our_port; void* remote_port; struct conn_query* last_query; struct conn_query* first_query; TYPE_5__ a6; int remote_ipv6; int our_ipv6; void* remote_ip; void* our_ip; TYPE_3__ a4; int status; int extra; TYPE_1__ timer; int out_buff; TYPE_9__ Out; int in_buff; TYPE_9__ In; int * ev; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct connection {scalar_t__ basic_type; int fd; int flags; int listening; int window_clamp; TYPE_7__ out_p; TYPE_7__ in_u; TYPE_7__ out; TYPE_7__ in; scalar_t__ generation; scalar_t__ listening_generation; TYPE_6__* type; void* our_port; void* remote_port; struct conn_query* last_query; struct conn_query* first_query; TYPE_5__ a6; int remote_ipv6; int our_ipv6; void* remote_ip; void* our_ip; TYPE_3__ a4; int status; int extra; TYPE_1__ timer; int out_buff; TYPE_9__ Out; int in_buff; TYPE_9__ In; int * ev; } ;
struct conn_query {int dummy; } ;
typedef int socklen_t ;
typedef int self ;
typedef int peer ;
typedef int flags ;
typedef int event_t ;
struct TYPE_15__ {int flags; scalar_t__ (* init_accepted ) (union sockaddr_in46*) ;int title; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 union sockaddr_in46* VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int * VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (int,struct sockaddr*,unsigned int*) ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int ,int ,union sockaddr_in46*) ;
 scalar_t__ VAR_35 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int,int ,int) ;
 int FUNC_9 (int,struct sockaddr*,unsigned int*) ;
 int FUNC_10 (int,int ,int ,int*,int*) ;
 int VAR_36 ;
 int FUNC_11 (TYPE_9__*,int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,scalar_t__,...) ;
 int VAR_37 ;
 scalar_t__ VAR_38 ;
 int VAR_39 ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (int,int ) ;
 int FUNC_16 (int ,int ,int) ;
 int FUNC_17 (union sockaddr_in46*,int ,int) ;
 void* FUNC_18 (int ) ;
 void* FUNC_19 (int ) ;
 int FUNC_20 (TYPE_7__*) ;
 int FUNC_21 (TYPE_7__*,int ) ;
 int VAR_40 ;
 scalar_t__ FUNC_22 (int,int ,int ,int*,int) ;
 int FUNC_23 (union sockaddr_in46*) ;
 int FUNC_24 (union sockaddr_in46*) ;
 scalar_t__ FUNC_25 (union sockaddr_in46*) ;
 scalar_t__ VAR_41 ;
 int FUNC_26 (int,char*,int,int,...) ;

int FUNC_27 (struct connection *VAR_42) {
  char VAR_43[64], VAR_44[64];
  union sockaddr_in46 VAR_45, VAR_46;
  unsigned VAR_47, VAR_48;
  int VAR_49, VAR_50 = 0, VAR_51;
  struct connection *VAR_52;
  event_t *VAR_53;

  FUNC_1 (VAR_42->basic_type == VAR_33);
  do {
    VAR_47 = sizeof (VAR_45);
    VAR_48 = sizeof (VAR_46);
    FUNC_17 (&VAR_45, 0, sizeof (VAR_45));
    FUNC_17 (&VAR_46, 0, sizeof (VAR_46));
    VAR_49 = FUNC_0 (VAR_42->fd, (struct sockaddr *) &VAR_45, &VAR_47);
    if (VAR_49 < 0) {
      if (!VAR_50) {
 FUNC_26 (VAR_35 == VAR_10 ? 1 : 0, "accept(%d) unexpectedly returns %d: %m\n", VAR_42->fd, VAR_49);
      }
      break;
    }
    VAR_50++;
    VAR_36++;
    FUNC_9 (VAR_49, (struct sockaddr *) &VAR_46, &VAR_48);
    FUNC_1 (VAR_49 < VAR_21);
    VAR_53 = VAR_16 + VAR_49;
    FUNC_1 (VAR_47 == VAR_48);
    if (VAR_42->flags & VAR_3) {
      FUNC_1 (VAR_47 == sizeof (struct sockaddr_in6));
      FUNC_1 (VAR_45.a6.sin6_family == VAR_1);
      FUNC_1 (VAR_46.a6.sin6_family == VAR_1);
    } else {
      FUNC_1 (VAR_47 == sizeof (struct sockaddr_in));
      FUNC_1 (VAR_45.a4.sin_family == VAR_0);
      FUNC_1 (VAR_46.a4.sin_family == VAR_0);
    }

    if (VAR_45.a4.sin_family == VAR_0) {
      FUNC_26 (1, "accepted incoming connection of type %s at %s:%d -> %s:%d, fd=%d\n", VAR_42->type->title, FUNC_3 (VAR_45.a4.sin_addr.s_addr, VAR_43), FUNC_19 (VAR_45.a4.sin_port), FUNC_3 (VAR_46.a4.sin_addr.s_addr, VAR_44), FUNC_19 (VAR_46.a4.sin_port), VAR_49);
    } else {
      FUNC_26 (1, "accepted incoming ipv6 connection of type %s at [%s]:%d -> [%s]:%d, fd=%d\n", VAR_42->type->title, FUNC_4 (VAR_45.a6.sin6_addr.s6_addr, VAR_43), FUNC_19 (VAR_45.a6.sin6_port), FUNC_4 (VAR_46.a6.sin6_addr.s6_addr, VAR_44), FUNC_19 (VAR_46.a6.sin6_port), VAR_49);
    }
    if ((VAR_51 = FUNC_8 (VAR_49, VAR_17, 0) < 0) || FUNC_8 (VAR_49, VAR_18, VAR_51 | VAR_22) < 0) {
      FUNC_13 ("cannot set O_NONBLOCK on accepted socket %d: %m\n", VAR_49);
      FUNC_2 (VAR_49);
      continue;
    }
    if (VAR_49 >= VAR_20 || (VAR_49 >= VAR_39 && VAR_39)) {
      FUNC_2 (VAR_49);
      continue;
    }
    if (VAR_49 > VAR_37) {
      VAR_37 = VAR_49;
    }
    VAR_51 = 1;
    FUNC_22 (VAR_49, VAR_19, VAR_25, &VAR_51, sizeof (VAR_51));
    if (VAR_41) {
      FUNC_15 (VAR_49, 0);
      FUNC_14 (VAR_49, 0);
    }

    VAR_52 = VAR_9 + VAR_49;
    FUNC_17 (VAR_52, 0, sizeof (struct connection));
    VAR_52->fd = VAR_49;
    VAR_52->ev = VAR_53;
    VAR_52->generation = ++VAR_30;
    VAR_52->flags = VAR_7;
    if ((VAR_42->flags & VAR_5) || (VAR_42->type->flags & VAR_5)) {
      VAR_52->flags |= VAR_5;
      VAR_52->In.state = VAR_52->Out.state = 0;
      FUNC_21 (&VAR_52->in, 0);
      FUNC_21 (&VAR_52->out, 0);
      FUNC_21 (&VAR_52->in_u, 0);
      FUNC_21 (&VAR_52->out_p, 0);
    } else {
      VAR_52->in.magic = VAR_52->out.magic = 0;
      FUNC_11 (&VAR_52->In, VAR_52->in_buff, VAR_2);
      FUNC_11 (&VAR_52->Out, VAR_52->out_buff, VAR_2);
    }
    VAR_52->timer.wakeup = VAR_31;
    VAR_52->type = VAR_42->type;
    VAR_52->extra = VAR_42->extra;
    VAR_52->basic_type = VAR_32;
    VAR_52->status = VAR_29;
    if (VAR_45.a4.sin_family == VAR_0) {
      VAR_52->our_ip = FUNC_18 (VAR_46.a4.sin_addr.s_addr);
      VAR_52->our_port = FUNC_19 (VAR_46.a4.sin_port);
      VAR_52->remote_ip = FUNC_18 (VAR_45.a4.sin_addr.s_addr);
      VAR_52->remote_port = FUNC_19 (VAR_45.a4.sin_port);
    } else if (FUNC_12 (VAR_45.a6.sin6_addr.s6_addr)) {
      FUNC_1 (FUNC_12 (VAR_46.a6.sin6_addr.s6_addr));
      VAR_52->our_ip = FUNC_18 (FUNC_7 (VAR_46.a6.sin6_addr.s6_addr));
      VAR_52->our_port = FUNC_19 (VAR_46.a6.sin6_port);
      VAR_52->remote_ip = FUNC_18 (FUNC_7 (VAR_45.a6.sin6_addr.s6_addr));
      VAR_52->remote_port = FUNC_19 (VAR_45.a6.sin6_port);
    } else {
      VAR_52->our_port = FUNC_19 (VAR_46.a6.sin6_port);
      VAR_52->remote_port = FUNC_19 (VAR_45.a6.sin6_port);
      FUNC_16 (VAR_52->our_ipv6, VAR_46.a6.sin6_addr.s6_addr, 16);
      FUNC_16 (VAR_52->remote_ipv6, VAR_45.a6.sin6_addr.s6_addr, 16);
      VAR_52->flags |= VAR_3;
    }
    VAR_52->first_query = VAR_52->last_query = (struct conn_query *) VAR_52;
    FUNC_26 (2, "accepted incoming connection of type %s at %s:%d -> %s:%d, fd=%d\n", VAR_52->type->title, FUNC_24 (VAR_52), VAR_52->remote_port, FUNC_23 (VAR_52), VAR_52->our_port, VAR_49);
    if (VAR_52->type->init_accepted (VAR_52) >= 0) {
      FUNC_6 (VAR_49, 0, VAR_40, VAR_52);
      FUNC_5 (VAR_49, (VAR_52->flags & VAR_7 ? VAR_13 : 0) | (VAR_52->flags & VAR_8 ? VAR_15 : 0) | VAR_14);
      VAR_27++;
      VAR_52->listening = VAR_42->fd;
      VAR_52->listening_generation = VAR_42->generation;
      if (VAR_42->flags & VAR_6) {
 VAR_52->flags |= VAR_6;
 if (VAR_28 >= VAR_38) {
   FUNC_13 ("ERROR: forced to accept connection when special connections limit was reached (%d of %d)\n", VAR_28, VAR_38);
 }
 if (++VAR_28 >= VAR_38) {
   return VAR_12;
 }
      }
      if ((VAR_42->flags & VAR_4)) {
 VAR_52->flags |= VAR_4;

      }
      VAR_52->window_clamp = VAR_42->window_clamp;
      if (VAR_52->window_clamp) {
 if (FUNC_22 (VAR_49, VAR_19, VAR_26, &VAR_52->window_clamp, 4) < 0) {
   FUNC_26 (0, "error while setting window size for socket %d to %d: %m\n", VAR_49, VAR_52->window_clamp);
 } else {
   int VAR_54 = -1, VAR_55 = -1;
   socklen_t VAR_56 = 4, VAR_57 = 4;
   FUNC_10 (VAR_49, VAR_19, VAR_26, &VAR_54, &VAR_56);
   FUNC_10 (VAR_49, VAR_23, VAR_24, &VAR_55, &VAR_57);
   FUNC_26 (2, "window clamp for socket %d is %d, receive buffer is %d\n", VAR_49, VAR_54, VAR_55);
 }
      }
    } else {
      if (VAR_52->flags & VAR_5) {
 FUNC_20 (&VAR_52->in);
 FUNC_20 (&VAR_52->out);
 FUNC_20 (&VAR_52->in_u);
 FUNC_20 (&VAR_52->out_p);
      }
      VAR_52->basic_type = VAR_34;
      FUNC_2 (VAR_49);
    }
  } while (1);
  return VAR_11;
}
