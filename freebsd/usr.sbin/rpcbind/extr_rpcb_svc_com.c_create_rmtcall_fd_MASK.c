
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct t_bind {int dummy; } ;
struct rmtcallfd_list {int fd; struct rmtcallfd_list* next; int netid; TYPE_1__* xprt; } ;
struct netconfig {char* nc_device; int nc_netid; } ;
struct TYPE_3__ {int xp_netid; } ;
typedef TYPE_1__ SVCXPRT ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct netconfig*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,...) ;
 struct rmtcallfd_list* FUNC_3 (int) ;
 struct rmtcallfd_list* VAR_3 ;
 struct rmtcallfd_list* VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_5 (int,int ,struct t_bind*,int ,int ) ;
 int FUNC_6 (int ,char*) ;

int
FUNC_7(struct netconfig *VAR_8)
{
 int VAR_9;
 struct rmtcallfd_list *VAR_10;
 SVCXPRT *VAR_11;

 if ((VAR_9 = FUNC_1(VAR_8)) == -1) {
  if (VAR_1)
   FUNC_2(VAR_5,
 "create_rmtcall_fd: couldn't open \"%s\" (errno %d)\n",
   VAR_8->nc_device, VAR_2);
  return (-1);
 }
 VAR_11 = FUNC_5(VAR_9, 0, (struct t_bind *) 0, 0, 0);
 if (VAR_11 == ((void*)0)) {
  if (VAR_1)
   FUNC_2(VAR_5,
    "create_rmtcall_fd: svc_tli_create failed\n");
  return (-1);
 }
 VAR_10 = FUNC_3(sizeof (struct rmtcallfd_list));
 if (VAR_10 == ((void*)0)) {
  FUNC_6(VAR_0, "create_rmtcall_fd: no memory!");
  return (-1);
 }
 VAR_10->xprt = VAR_11;
 VAR_10->netid = FUNC_4(VAR_8->nc_netid);
 VAR_11->xp_netid = VAR_10->netid;
 VAR_10->fd = VAR_9;
 VAR_10->next = ((void*)0);
 if (VAR_3 == ((void*)0)) {
  VAR_3 = VAR_10;
  VAR_4 = VAR_10;
 } else {
  VAR_4->next = VAR_10;
  VAR_4 = VAR_10;
 }

 if (VAR_9 > VAR_7)
  VAR_7 = VAR_9;
 FUNC_0(VAR_9, &VAR_6);
 return (VAR_9);
}
