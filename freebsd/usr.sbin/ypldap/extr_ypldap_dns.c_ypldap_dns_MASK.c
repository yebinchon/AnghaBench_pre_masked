
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct passwd {int pw_uid; int pw_gid; } ;
struct event {int dummy; } ;
struct env {TYPE_2__* sc_iev; } ;
typedef int pid_t ;
struct TYPE_3__ {int fd; } ;
struct TYPE_4__ {int ev; int handler; int events; TYPE_1__ ibuf; struct env* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 () ;
 int VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int ,int ,int ,struct env*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_1__*,int) ;
 scalar_t__ FUNC_11 (int,int *) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (int ,int ,int ) ;
 scalar_t__ FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (struct event*,int *) ;
 int FUNC_16 (struct event*,int ,int ,int *) ;

pid_t
FUNC_17(int VAR_6[2], struct passwd *VAR_7)
{
 pid_t VAR_8;
 struct event VAR_9;
 struct event VAR_10;
 struct event VAR_11;
 struct env VAR_12;

 switch (VAR_8 = FUNC_9()) {
 case -1:
  FUNC_8("cannot fork");
  break;
 case 0:
  break;
 default:
  return (VAR_8);
 }

 FUNC_12("dns engine");
 FUNC_1(VAR_6[0]);

 if (FUNC_11(1, &VAR_7->pw_gid) ||
     FUNC_13(VAR_7->pw_gid, VAR_7->pw_gid, VAR_7->pw_gid) ||
     FUNC_14(VAR_7->pw_uid, VAR_7->pw_uid, VAR_7->pw_uid))
  FUNC_8("can't drop privileges");
 FUNC_3();

 FUNC_6();
 FUNC_16(&VAR_9, VAR_2, VAR_5, ((void*)0));
 FUNC_16(&VAR_10, VAR_3, VAR_5, ((void*)0));
 FUNC_16(&VAR_11, VAR_1, VAR_5, ((void*)0));
 FUNC_15(&VAR_9, ((void*)0));
 FUNC_15(&VAR_10, ((void*)0));
 FUNC_15(&VAR_11, ((void*)0));

 if ((VAR_12.sc_iev = FUNC_0(1, sizeof(*VAR_12.sc_iev))) == ((void*)0))
  FUNC_8(((void*)0));

 VAR_12.sc_iev->events = VAR_0;
 VAR_12.sc_iev->data = &VAR_12;
 FUNC_10(&VAR_12.sc_iev->ibuf, VAR_6[1]);
 VAR_12.sc_iev->handler = VAR_4;
 FUNC_7(&VAR_12.sc_iev->ev, VAR_12.sc_iev->ibuf.fd, VAR_12.sc_iev->events,
     VAR_12.sc_iev->handler, &VAR_12);
 FUNC_4(&VAR_12.sc_iev->ev, ((void*)0));

 FUNC_5();
 FUNC_2();

 return (0);
}
