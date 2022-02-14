
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent {int dummy; } ;
struct dcons_state {int flags; int zero; int kq; } ;
struct dcons_port {int infd; int outfd; int s; int port; } ;
typedef int rbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kevent*,int,int ,int,int ,int ,void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dcons_state*,struct dcons_port*,char*,int,char*,int*) ;
 int FUNC_3 (struct dcons_state*,int ,char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct kevent*,int,int *,int ,int *) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int,char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*,int ) ;

__attribute__((used)) static int
FUNC_10(struct dcons_state *VAR_8, struct dcons_port *VAR_9)
{
 struct kevent VAR_10;
 int VAR_11, VAR_12;
 char VAR_13[VAR_5], VAR_14[VAR_5+2];

 if ((VAR_11 = FUNC_7(VAR_9->infd, VAR_13, sizeof(VAR_13))) > 0) {
  VAR_12 = 0;
  FUNC_2(VAR_8, VAR_9, VAR_13, VAR_11, VAR_14, &VAR_12);

  if (VAR_12 > 0 && (VAR_8->flags & VAR_4) != 0) {
   FUNC_3(VAR_8, VAR_9->port, VAR_14, VAR_12);
   if (VAR_7 > 1) {
    VAR_14[VAR_12] = 0;
    FUNC_6("-> %s\n", VAR_14);
   } else if (VAR_7 == 1) {
    FUNC_6("(%d)", VAR_12);
    FUNC_4(VAR_6);
   }
  }
 } else {
  if (VAR_7) {
   if (VAR_11 == 0)
    FUNC_9("port%d: closed", VAR_9->port);
   else
    FUNC_8("port%d: read", VAR_9->port);
  }
  FUNC_0(&VAR_10, VAR_9->infd, VAR_0,
   VAR_2, 0, 0, ((void*)0));
  FUNC_5(VAR_8->kq, &VAR_10, 1, ((void*)0), 0, &VAR_8->zero);
  FUNC_1(VAR_9->infd);
  FUNC_1(VAR_9->outfd);

  FUNC_0(&VAR_10, VAR_9->s, VAR_0,
    VAR_1 | VAR_3, 0, 0, (void *) VAR_9);
  FUNC_5(VAR_8->kq, &VAR_10, 1, ((void*)0), 0, &VAR_8->zero);
  VAR_9->infd = VAR_9->outfd = -1;
 }
 return(0);
}
