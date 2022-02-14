
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_short ;
typedef int u_int32_t ;
struct TYPE_8__ {int ypbind_binding_port; int ypbind_binding_addr; } ;
struct TYPE_9__ {TYPE_2__ ypbind_bindinfo; } ;
struct TYPE_7__ {scalar_t__ s_addr; } ;
struct TYPE_12__ {TYPE_1__ sin_addr; } ;
struct ypbind_resp {char* dom_domain; int dom_alive; int dom_default; int dom_lockfd; int dom_vers; TYPE_3__ ypbind_resp_u; int ypbind_status; scalar_t__ dom_broadcast_pid; TYPE_6__ dom_server_addr; struct ypbind_resp* dom_pnext; } ;
struct TYPE_11__ {long s_addr; } ;
struct sockaddr_in {long sin_port; TYPE_5__ sin_addr; } ;
struct iovec {char* iov_base; int iov_len; } ;
struct _dom_binding {char* dom_domain; int dom_alive; int dom_default; int dom_lockfd; int dom_vers; TYPE_3__ ypbind_resp_u; int ypbind_status; scalar_t__ dom_broadcast_pid; TYPE_6__ dom_server_addr; struct _dom_binding* dom_pnext; } ;
struct TYPE_10__ {int xp_port; } ;


 char* VAR_0 ;
 int FUNC_0 (int,int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct sockaddr_in*,TYPE_6__*,int) ;
 int FUNC_2 (struct ypbind_resp*) ;
 int FUNC_3 (struct ypbind_resp*,int) ;
 int FUNC_4 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct ypbind_resp*) ;
 int FUNC_7 (TYPE_5__) ;
 int FUNC_8 (scalar_t__,int ) ;
 struct ypbind_resp* FUNC_9 (int) ;
 int FUNC_10 (int *,long*,int) ;
 int FUNC_11 (char*,int) ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_12 (long) ;
 int FUNC_13 (char*,int,int) ;
 int FUNC_14 (char*,char*,char*,char*,int) ;
 scalar_t__ FUNC_15 (char*,char*) ;
 int FUNC_16 (char*,char*,int) ;
 scalar_t__ FUNC_17 (char*) ;
 int VAR_19 ;
 int FUNC_18 (int ,char*,...) ;
 TYPE_4__* VAR_20 ;
 int FUNC_19 (char*) ;
 int FUNC_20 (int,struct iovec*,int) ;
 struct ypbind_resp* VAR_21 ;
 scalar_t__ VAR_22 ;

void
FUNC_21(char *VAR_23, struct sockaddr_in *VAR_24, int VAR_25)
{
 struct _dom_binding *VAR_26, *VAR_27 = ((void*)0);
 struct iovec VAR_28[2];
 struct ypbind_resp VAR_29;
 char VAR_30[VAR_4];
 int VAR_31;




 if (VAR_23 == ((void*)0))
  return;

 for (VAR_26 = VAR_21; VAR_26; VAR_26 = VAR_26->dom_pnext) {
  if (FUNC_15(VAR_26->dom_domain, VAR_23) == 0)
   break;
  VAR_27 = VAR_26;
 }

 if (VAR_26 && VAR_25) {
  if (VAR_26->dom_broadcast_pid) {
   FUNC_8(VAR_26->dom_broadcast_pid, VAR_11);
   FUNC_4(VAR_10);
   FUNC_0(VAR_10, &VAR_17);
   FUNC_0(VAR_10, &VAR_19);
   VAR_10 = VAR_12 = -1;
  }
 }


 if ((VAR_22 && (FUNC_12(VAR_24->sin_port) >= VAR_1))) {
     FUNC_18(VAR_3, "Rejected NIS server on [%s/%d] for domain %s.",
     FUNC_7(VAR_24->sin_addr), FUNC_12(VAR_24->sin_port),
     VAR_23);
     if (VAR_26 != ((void*)0)) {
  VAR_26->dom_broadcast_pid = 0;
  VAR_26->dom_alive = 0;
     }
     return;
 }

 if (VAR_24->sin_addr.s_addr == (long)0) {
  switch (VAR_26->dom_default) {
  case 0:
   if (VAR_27 == ((void*)0))
    VAR_21 = VAR_26->dom_pnext;
   else
    VAR_27->dom_pnext = VAR_26->dom_pnext;
   FUNC_14(VAR_30, "%s/%s.%ld", VAR_0,
    VAR_26->dom_domain, VAR_15);
   FUNC_4(VAR_26->dom_lockfd);
   FUNC_19(VAR_30);
   FUNC_6(VAR_26);
   VAR_16--;
   return;
  case 1:
   VAR_26->dom_broadcast_pid = 0;
   VAR_26->dom_alive = 0;
   FUNC_2(VAR_26);
   return;
  default:
   break;
  }
 }

 if (VAR_26 == ((void*)0)) {
  if (VAR_25 == 0)
   return;
  if (FUNC_17(VAR_23) > VAR_14) {
   FUNC_18(VAR_3, "domain %s too long", VAR_23);
   return;
  }
  VAR_26 = FUNC_9(sizeof *VAR_26);
  if (VAR_26 == ((void*)0)) {
   FUNC_18(VAR_3, "malloc: %m");
   return;
  }
  FUNC_3(VAR_26, sizeof *VAR_26);
  FUNC_16(VAR_26->dom_domain, VAR_23, sizeof VAR_26->dom_domain);
  VAR_26->dom_lockfd = -1;
  VAR_26->dom_default = 0;
  VAR_26->dom_pnext = VAR_21;
  VAR_21 = VAR_26;
 }


 if (VAR_26->dom_vers == -1 && VAR_26->dom_server_addr.sin_addr.s_addr) {
  if (VAR_18 >= VAR_5) {
   VAR_18 = 0;
   FUNC_18(VAR_3, "NIS server [%s] for domain \"%s\" OK",
       FUNC_7(VAR_24->sin_addr), VAR_26->dom_domain);
  }
 }

 FUNC_1(VAR_24, &VAR_26->dom_server_addr,
  sizeof VAR_26->dom_server_addr);

 VAR_26->dom_vers = VAR_15;
 VAR_26->dom_alive = 1;
 VAR_26->dom_broadcast_pid = 0;

 if (VAR_26->dom_lockfd != -1)
  FUNC_4(VAR_26->dom_lockfd);

 FUNC_14(VAR_30, "%s/%s.%ld", VAR_0,
  VAR_26->dom_domain, VAR_26->dom_vers);







 if ((VAR_31 = FUNC_13(VAR_30, VAR_6|VAR_7|VAR_9, 0644)) == -1) {
  (void)FUNC_11(VAR_0, 0755);
  if ((VAR_31 = FUNC_13(VAR_30, VAR_6|VAR_7|VAR_9, 0644)) == -1)
   return;
 }
 FUNC_5(VAR_31, VAR_2);






 VAR_26->dom_lockfd = VAR_31;

 VAR_28[0].iov_base = (char *)&(VAR_20->xp_port);
 VAR_28[0].iov_len = sizeof VAR_20->xp_port;
 VAR_28[1].iov_base = (char *)&VAR_29;
 VAR_28[1].iov_len = sizeof VAR_29;

 FUNC_3(&VAR_29, sizeof VAR_29);
 VAR_29.ypbind_status = VAR_13;
 FUNC_10(&VAR_29.ypbind_resp_u.ypbind_bindinfo.ypbind_binding_addr,
     &VAR_24->sin_addr.s_addr, sizeof(u_int32_t));
 FUNC_10(&VAR_29.ypbind_resp_u.ypbind_bindinfo.ypbind_binding_port,
     &VAR_24->sin_port, sizeof(u_short));

 if (FUNC_20(VAR_26->dom_lockfd, VAR_28, 2) != VAR_28[0].iov_len + VAR_28[1].iov_len) {
  FUNC_18(VAR_3, "write: %m");
  FUNC_4(VAR_26->dom_lockfd);
  VAR_26->dom_lockfd = -1;
  return;
 }
}
