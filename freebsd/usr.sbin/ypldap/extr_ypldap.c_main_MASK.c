
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tv ;
struct timeval {int dummy; } ;
struct passwd {int pw_uid; int pw_gid; } ;
struct event {int dummy; } ;
struct env {TYPE_2__* sc_iev; int sc_group_gids; int sc_user_uids; } ;
struct TYPE_3__ {int fd; } ;
struct TYPE_4__ {int ev; int handler; int events; TYPE_1__ ibuf; struct env* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_2__* FUNC_1 (int,int) ;
 int VAR_13 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_14 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int *,int ,int ,int ,struct env*) ;
 int FUNC_11 (struct event*,struct timeval*) ;
 int FUNC_12 (struct event*,int ,struct env*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ,char*) ;
 scalar_t__ FUNC_16 () ;
 int FUNC_17 (int,char**,char*) ;
 struct passwd* FUNC_18 (int ) ;
 int FUNC_19 (TYPE_1__*,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (char*,char*) ;
 int FUNC_22 (int) ;
 int FUNC_23 (char*,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_24 () ;
 int VAR_17 ;
 int FUNC_25 (struct timeval*,int ,int) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_26 (struct env*,int ,int) ;
 int * VAR_21 ;
 scalar_t__ FUNC_27 (int,int *) ;
 int FUNC_28 (char*) ;
 scalar_t__ FUNC_29 (int ,int ,int ) ;
 scalar_t__ FUNC_30 (int ,int ,int ) ;
 int FUNC_31 (struct event*,int *) ;
 int FUNC_32 (struct event*,int ,int ,struct env*) ;
 int FUNC_33 (int ,int,int ,int *) ;
 int VAR_22 ;
 int FUNC_34 () ;
 int FUNC_35 () ;
 int FUNC_36 (struct env*) ;
 int VAR_23 ;

int
FUNC_37(int VAR_24, char *VAR_25[])
{
 int VAR_26;
 int VAR_27;
 struct passwd *VAR_28;
 struct env VAR_29;
 struct event VAR_30;
 struct event VAR_31;
 struct event VAR_32;
 struct event VAR_33;
 struct event VAR_34;
 struct timeval VAR_35;

 VAR_27 = 0;
 VAR_23 = VAR_3;

 FUNC_22(1);

 while ((VAR_26 = FUNC_17(VAR_24, VAR_25, "dD:nf:v")) != -1) {
  switch (VAR_26) {
  case 'd':
   VAR_27 = 2;
   break;
  case 'D':
   if (FUNC_3(VAR_18) < 0)
    FUNC_23("could not parse macro definition %s",
        VAR_18);
   break;
  case 'n':
   VAR_27 = 2;
   VAR_20 |= VAR_10;
   break;
  case 'f':
   VAR_14 = VAR_18;
   break;
  case 'v':
   VAR_20 |= VAR_11;
   break;
  default:
   FUNC_34();
  }
 }

 VAR_24 -= VAR_19;
 VAR_25 += VAR_19;

 if (VAR_24)
  FUNC_34();

 FUNC_0(&VAR_29.sc_user_uids);
 FUNC_0(&VAR_29.sc_group_gids);

 if (FUNC_26(&VAR_29, VAR_14, VAR_20))
  FUNC_13(1);
 if (VAR_20 & VAR_10) {
  FUNC_15(VAR_22, "configuration OK\n");
  FUNC_13(0);
 }

 if (FUNC_16())
  FUNC_6(1, "need root privileges");

 FUNC_22(VAR_27);

 if (!VAR_27) {
  if (FUNC_4(1, 0) == -1)
   FUNC_5(1, "failed to daemonize");
 }

 FUNC_21("startup%s", (VAR_27 > 1)?" [debug mode]":"");

 if (FUNC_33(VAR_0, VAR_9 | VAR_8, VAR_2,
     VAR_21) == -1)
  FUNC_14("socketpair");

 VAR_13 = FUNC_20(VAR_21);

 FUNC_28("parent");
 FUNC_9();

 FUNC_32(&VAR_30, VAR_6, VAR_17, &VAR_29);
 FUNC_32(&VAR_31, VAR_7, VAR_17, &VAR_29);
 FUNC_32(&VAR_33, VAR_5, VAR_17, &VAR_29);
 FUNC_32(&VAR_32, VAR_4, VAR_17, &VAR_29);
 FUNC_31(&VAR_30, ((void*)0));
 FUNC_31(&VAR_31, ((void*)0));
 FUNC_31(&VAR_33, ((void*)0));
 FUNC_31(&VAR_32, ((void*)0));

 FUNC_2(VAR_21[1]);
 if ((VAR_29.sc_iev = FUNC_1(1, sizeof(*VAR_29.sc_iev))) == ((void*)0))
  FUNC_14(((void*)0));
 FUNC_19(&VAR_29.sc_iev->ibuf, VAR_21[0]);
 VAR_29.sc_iev->handler = VAR_15;

 VAR_29.sc_iev->events = VAR_1;
 VAR_29.sc_iev->data = &VAR_29;
 FUNC_10(&VAR_29.sc_iev->ev, VAR_29.sc_iev->ibuf.fd, VAR_29.sc_iev->events,
      VAR_29.sc_iev->handler, &VAR_29);
 FUNC_7(&VAR_29.sc_iev->ev, ((void*)0));

 FUNC_36(&VAR_29);

 if ((VAR_28 = FUNC_18(VAR_12)) == ((void*)0))
  FUNC_14("getpwnam");


 if (FUNC_27(1, &VAR_28->pw_gid) ||
     FUNC_29(VAR_28->pw_gid, VAR_28->pw_gid, VAR_28->pw_gid) ||
     FUNC_30(VAR_28->pw_uid, VAR_28->pw_uid, VAR_28->pw_uid))
  FUNC_14("cannot drop privileges");




 FUNC_25(&VAR_35, 0, sizeof(VAR_35));
 FUNC_12(&VAR_34, VAR_16, &VAR_29);
 FUNC_11(&VAR_34, &VAR_35);

 FUNC_35();
 FUNC_8();
 FUNC_24();

 return (0);
}
