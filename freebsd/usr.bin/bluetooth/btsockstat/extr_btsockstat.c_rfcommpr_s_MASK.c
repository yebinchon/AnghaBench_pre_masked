
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef int this ;
struct socket {scalar_t__ so_pcb; } ;
typedef int so ;
typedef int s ;
struct TYPE_4__ {int len; } ;
struct TYPE_5__ {int state; int dlcs; TYPE_1__ outq; int mtu; int flags; scalar_t__ l2so; } ;
typedef TYPE_2__ ng_btsocket_rfcomm_session_t ;
typedef int * ng_btsocket_rfcomm_session_p ;
typedef int kvm_t ;


 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (int *,scalar_t__,char*,int) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(kvm_t *VAR_1, u_long VAR_2)
{
 static char const * const VAR_3[] = {
                                                "CLOSED",
                                                "LISTEN",
                                                "CONNECTING",
                                                "CONNECTED",
                                                "OPEN",
                                                "DISCONNECTING"
 };

 ng_btsocket_rfcomm_session_p VAR_4 = ((void*)0), VAR_5 = ((void*)0);
 ng_btsocket_rfcomm_session_t VAR_6;
 struct socket VAR_7;
 int VAR_8 = 1;

 if (VAR_2 == 0)
  return;

        if (FUNC_3(VAR_1, VAR_2, (char *) &VAR_4, sizeof(VAR_4)) < 0)
  return;

 for ( ; VAR_4 != ((void*)0); VAR_4 = VAR_5) {
  if (FUNC_3(VAR_1, (u_long) VAR_4, (char *) &VAR_6, sizeof(VAR_6)) < 0)
   return;
  if (FUNC_3(VAR_1, (u_long) VAR_6.l2so, (char *) &VAR_7, sizeof(VAR_7)) < 0)
   return;

  VAR_5 = FUNC_1(&VAR_6, VAR_5);

  if (VAR_8) {
   VAR_8 = 0;
   FUNC_2(VAR_0,
"Active RFCOMM sessions\n" "%-8.8s %-8.8s %-4.4s %-5.5s %-5.5s %-4.4s %s\n",

    "L2PCB",
    "PCB",
    "Flags",
    "MTU",
    "Out-Q",
    "DLCs",
    "State");
  }

  FUNC_2(VAR_0,
"%-8lx %-8lx %-4x %-5d %-5d %-4s %d\n",
   (unsigned long) VAR_7.so_pcb,
   (unsigned long) VAR_4,
   VAR_6.flags,
   VAR_6.mtu,
   VAR_6.outq.len,
   FUNC_0(&VAR_6.dlcs)? "No" : "Yes",
   FUNC_4(VAR_6.state));
 }
}
