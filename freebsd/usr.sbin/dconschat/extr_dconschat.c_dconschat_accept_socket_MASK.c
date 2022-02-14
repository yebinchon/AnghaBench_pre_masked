
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kevent {int dummy; } ;
struct dcons_state {int flags; int zero; int kq; } ;
struct dcons_port {int port; int infd; int outfd; scalar_t__ skip_read; TYPE_1__* res; int s; } ;
typedef int socklen_t ;
typedef int sga ;
typedef int linemode ;
typedef int echo ;
typedef int bin ;
struct TYPE_2__ {int ai_addr; int ai_addrlen; } ;


 int VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kevent*,int,int ,int ,int ,int,void*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char VAR_8 ;
 scalar_t__ FUNC_1 (struct dcons_port*) ;
 scalar_t__ FUNC_2 (struct dcons_port*) ;
 int VAR_9 ;
 int VAR_10 ;
 char VAR_11 ;
 char VAR_12 ;
 char VAR_13 ;
 char VAR_14 ;
 char VAR_15 ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (struct dcons_state*,int ,char*,int) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int,int ,int) ;
 int FUNC_7 (int ,struct kevent*,int,int *,int ,int *) ;
 int FUNC_8 (char*,int) ;
 scalar_t__ VAR_16 ;
 int FUNC_9 (int,char*,int) ;

__attribute__((used)) static int
FUNC_10(struct dcons_state *VAR_17, struct dcons_port *VAR_18)
{
 socklen_t VAR_19;
 int VAR_20, VAR_21;
 struct kevent VAR_22;


 VAR_19 = VAR_18->res->ai_addrlen;
 VAR_20 = FUNC_3(VAR_18->s, VAR_18->res->ai_addr, &VAR_19);
 if (VAR_20 < 0)
  FUNC_5(1, "accept");
 if (VAR_16)
  FUNC_8("port%d accepted\n", VAR_18->port);

 VAR_21 = FUNC_6(VAR_20, VAR_5, 0);
 VAR_21 |= VAR_10;
 FUNC_6(VAR_20, VAR_6, VAR_21);

 if (FUNC_1(VAR_18) && (VAR_17->flags & VAR_7) != 0) {
  char VAR_23[] = {VAR_8, VAR_15, VAR_14};
  char VAR_24[] = {VAR_8, VAR_2, VAR_13};
  char VAR_25[] = {VAR_8, VAR_15, VAR_12};
  char VAR_26[] = {VAR_8, VAR_1, VAR_11};

  FUNC_9(VAR_20, VAR_23, sizeof(VAR_23));
  FUNC_9(VAR_20, VAR_24, sizeof(VAR_24));
  FUNC_9(VAR_20, VAR_25, sizeof(VAR_25));
  FUNC_9(VAR_20, VAR_26, sizeof(VAR_26));
  VAR_18->skip_read = 0;
 }


 if (FUNC_2(VAR_18)) {
  char VAR_27[2048];
  int VAR_28;

  while ((VAR_28 = FUNC_4(VAR_17, VAR_0, &VAR_27[0],
     2048)) > 0)
   if (VAR_16)
    FUNC_8("discard %d chars on GDB port\n", VAR_28);
 }

 VAR_18->infd = VAR_18->outfd = VAR_20;
 FUNC_0(&VAR_22, VAR_20, VAR_3, VAR_4, VAR_9, 1, (void *)VAR_18);
 FUNC_7(VAR_17->kq, &VAR_22, 1, ((void*)0), 0, &VAR_17->zero);
 return(0);
}
