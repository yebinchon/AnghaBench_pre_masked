
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent {int dummy; } ;
struct dcons_state {int to; int kq; int zero; int traw; int tsave; struct dcons_port* port; } ;
struct dcons_port {int port; int sport; int infd; int outfd; int s; struct addrinfo* res; } ;
struct addrinfo {int ai_addrlen; int ai_addr; scalar_t__ ai_protocol; int ai_socktype; int ai_family; int ai_flags; } ;
typedef int service ;
typedef int on ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kevent*,int,int ,int,int ,int,void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int,char*,char*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_7 (int ,struct kevent*,int,int *,int ,int *) ;
 scalar_t__ FUNC_8 (int,int) ;
 int FUNC_9 (struct addrinfo*,int ,int) ;
 int FUNC_10 (char*,char*,int,int) ;
 int FUNC_11 (int,int ,int ,int*,int) ;
 int FUNC_12 (char*,int,char*,int) ;
 int FUNC_13 (int ,int ,scalar_t__) ;
 int VAR_13 ;
 scalar_t__ FUNC_14 (int,int *) ;
 int FUNC_15 (int,int ,int *) ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static void
FUNC_16(struct dcons_state *VAR_15, int VAR_16, char *VAR_17, int VAR_18)
{
 struct addrinfo VAR_19, *VAR_20;
 int VAR_21 = 1, VAR_22;
 char VAR_23[10];
 struct kevent VAR_24;
 struct dcons_port *VAR_25;

 VAR_25 = &VAR_15->port[VAR_16];
 VAR_25->port = VAR_16;
 VAR_25->sport = VAR_18;
 VAR_25->infd = VAR_25->outfd = -1;

 if (VAR_18 < 0)
  return;

 if (VAR_18 == 0) {


  VAR_25->infd = VAR_10;
  VAR_25->outfd = VAR_11;
  VAR_25->s = -1;
  if (VAR_13 == 0 &&
      FUNC_14(VAR_10, &VAR_15->tsave) == 0) {
   VAR_15->traw = VAR_15->tsave;
   FUNC_2(&VAR_15->traw);
   FUNC_15(VAR_10, VAR_12, &VAR_15->traw);
   VAR_13 = 1;
  }
  FUNC_0(&VAR_24, VAR_25->infd, VAR_1, VAR_2, VAR_4, 1,
      (void *)VAR_25);
  FUNC_7(VAR_15->kq, &VAR_24, 1, ((void*)0), 0, &VAR_15->zero);
  return;
 }

 FUNC_9(&VAR_19, 0, sizeof(VAR_19));
 VAR_19.ai_flags = VAR_0;

 VAR_19.ai_family = VAR_5;



 VAR_19.ai_socktype = VAR_7;
 VAR_19.ai_protocol = 0;

 if (VAR_14)
  FUNC_10("%s:%d for port %d\n",
   VAR_17 == ((void*)0) ? "*" : VAR_17, VAR_18, VAR_16);
 FUNC_12(VAR_23, sizeof(VAR_23), "%d", VAR_18);
 VAR_22 = FUNC_6(VAR_17, VAR_23, &VAR_19, &VAR_20);
 if (VAR_22)
  FUNC_4(1, "tcp/%s: %s\n", VAR_23, FUNC_5(VAR_22));
 VAR_25->res = VAR_20;
 VAR_25->s = FUNC_13(VAR_20->ai_family, VAR_20->ai_socktype, VAR_20->ai_protocol);
 if (VAR_25->s < 0)
  FUNC_3(1, "socket");
 FUNC_11(VAR_25->s, VAR_8, VAR_9, &VAR_21, sizeof(VAR_21));

 if (FUNC_1(VAR_25->s, VAR_25->res->ai_addr, VAR_25->res->ai_addrlen) < 0) {
  FUNC_3(1, "bind");
 }
 if (FUNC_8(VAR_25->s, 1) < 0)
  FUNC_3(1, "listen");
 FUNC_0(&VAR_24, VAR_25->s, VAR_1, VAR_2 | VAR_3, 0, 0, (void *)VAR_25);
 VAR_22 = FUNC_7(VAR_15->kq, &VAR_24, 1, ((void*)0), 0, &VAR_15->to);
 if (VAR_22 < 0)
  FUNC_3(1, "kevent");
 return;
}
