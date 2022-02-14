
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct passwd {int pw_uid; int pw_gid; int pw_dir; } ;
struct event {int dummy; } ;
struct env {TYPE_2__* sc_iev_dns; TYPE_1__* sc_iev; int sc_idms; } ;
typedef int pid_t ;
typedef int env ;
struct TYPE_6__ {int fd; } ;
struct TYPE_5__ {int ev; int handler; void* events; TYPE_3__ ibuf; struct env* data; } ;
struct TYPE_4__ {int ev; int handler; void* events; TYPE_3__ ibuf; struct env* data; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int VAR_9 ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 () ;
 int VAR_12 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int ,void*,int ,struct env*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 () ;
 struct passwd* FUNC_12 (int ) ;
 int FUNC_13 (TYPE_3__*,int) ;
 int FUNC_14 (struct env*,int ,int) ;
 scalar_t__ FUNC_15 (int,int *) ;
 int FUNC_16 (char*) ;
 scalar_t__ FUNC_17 (int ,int ,int ) ;
 scalar_t__ FUNC_18 (int ,int ,int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (struct event*,int *) ;
 int FUNC_21 (struct event*,int ,int ,int *) ;
 int FUNC_22 (int ,int ,int ,int*) ;
 int FUNC_23 (int*,struct passwd*) ;
 int VAR_13 ;

pid_t
FUNC_24(int VAR_14[2])
{
 pid_t VAR_15, VAR_16;
 int VAR_17[2];
 struct passwd *VAR_18;
 struct event VAR_19;
 struct event VAR_20;
 struct env VAR_21;

 switch (VAR_15 = FUNC_11()) {
 case -1:
  FUNC_10("cannot fork");
  break;
 case 0:
  break;
 default:
  return (VAR_15);
 }

 FUNC_14(&VAR_21, 0, sizeof(VAR_21));
 FUNC_0(&VAR_21.sc_idms);

 if ((VAR_18 = FUNC_12(VAR_9)) == ((void*)0))
  FUNC_10("getpwnam");

 if (FUNC_22(VAR_0, VAR_8, VAR_2, VAR_17) == -1)
  FUNC_10("socketpair");
 VAR_16 = FUNC_23(VAR_17, VAR_18);
 FUNC_5(VAR_17[1]);


 if (FUNC_3(VAR_18->pw_dir) == -1)
  FUNC_10("chroot");
 if (FUNC_2("/") == -1)
  FUNC_10("chdir");



 FUNC_16("ldap client");
 VAR_13 = VAR_3;


 if (FUNC_15(1, &VAR_18->pw_gid) ||
     FUNC_17(VAR_18->pw_gid, VAR_18->pw_gid, VAR_18->pw_gid) ||
     FUNC_18(VAR_18->pw_uid, VAR_18->pw_uid, VAR_18->pw_uid))
  FUNC_10("cannot drop privileges");




 FUNC_8();
 FUNC_19(VAR_5, VAR_7);
 FUNC_21(&VAR_19, VAR_4, VAR_12, ((void*)0));
 FUNC_21(&VAR_20, VAR_6, VAR_12, ((void*)0));
 FUNC_20(&VAR_19, ((void*)0));
 FUNC_20(&VAR_20, ((void*)0));

 FUNC_5(VAR_14[0]);
 if ((VAR_21.sc_iev = FUNC_1(1, sizeof(*VAR_21.sc_iev))) == ((void*)0))
  FUNC_10(((void*)0));
 if ((VAR_21.sc_iev_dns = FUNC_1(1, sizeof(*VAR_21.sc_iev_dns))) == ((void*)0))
  FUNC_10(((void*)0));

 VAR_21.sc_iev->events = VAR_1;
 VAR_21.sc_iev->data = &VAR_21;
 FUNC_13(&VAR_21.sc_iev->ibuf, VAR_14[1]);
 VAR_21.sc_iev->handler = VAR_11;
 FUNC_9(&VAR_21.sc_iev->ev, VAR_21.sc_iev->ibuf.fd, VAR_21.sc_iev->events,
     VAR_21.sc_iev->handler, &VAR_21);
 FUNC_6(&VAR_21.sc_iev->ev, ((void*)0));

 VAR_21.sc_iev_dns->events = VAR_1;
 VAR_21.sc_iev_dns->data = &VAR_21;
 FUNC_13(&VAR_21.sc_iev_dns->ibuf, VAR_17[0]);
 VAR_21.sc_iev_dns->handler = VAR_10;
 FUNC_9(&VAR_21.sc_iev_dns->ev, VAR_21.sc_iev_dns->ibuf.fd,
     VAR_21.sc_iev_dns->events, VAR_21.sc_iev_dns->handler, &VAR_21);
 FUNC_6(&VAR_21.sc_iev_dns->ev, ((void*)0));

 FUNC_7();
 FUNC_4();

 return (0);

}
