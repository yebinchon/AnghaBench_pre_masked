
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef int this ;
struct TYPE_6__ {int sb_ccc; } ;
struct TYPE_5__ {int sb_ccc; } ;
struct socket {int so_options; TYPE_2__ so_snd; TYPE_1__ so_rcv; } ;
typedef int so ;
typedef int remote ;
typedef int pcb ;
struct TYPE_7__ {int state; int cid; int dst; int psm; int src; scalar_t__ so; } ;
typedef TYPE_3__ ng_btsocket_l2cap_pcb_t ;
typedef int * ng_btsocket_l2cap_pcb_p ;
typedef int local ;
typedef int kvm_t ;


 int * FUNC_0 (TYPE_3__*,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (int *,scalar_t__,char*,int) ;
 char* FUNC_4 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(kvm_t *VAR_2, u_long VAR_3)
{
 static char const * const VAR_4[] = {
                                 "CLOSED",
                                    "CON",
                                     "CONFIG",
                               "OPEN",
                                       "DISCON"
 };

 ng_btsocket_l2cap_pcb_p VAR_5 = ((void*)0), VAR_6 = ((void*)0);
 ng_btsocket_l2cap_pcb_t VAR_7;
 struct socket VAR_8;
 int VAR_9 = 1;
 char VAR_10[24], VAR_11[24];

 if (VAR_3 == 0)
  return;

        if (FUNC_3(VAR_2, VAR_3, (char *) &VAR_5, sizeof(VAR_5)) < 0)
  return;

 for ( ; VAR_5 != ((void*)0); VAR_5 = VAR_6) {
  if (FUNC_3(VAR_2, (u_long) VAR_5, (char *) &VAR_7, sizeof(VAR_7)) < 0)
   return;
  if (FUNC_3(VAR_2, (u_long) VAR_7.so, (char *) &VAR_8, sizeof(VAR_8)) < 0)
   return;

  VAR_6 = FUNC_0(&VAR_7, VAR_6);

  if (VAR_9) {
   VAR_9 = 0;
   FUNC_2(VAR_1,
"Active L2CAP sockets\n" "%-8.8s %-6.6s %-6.6s %-23.23s %-17.17s %-5.5s %s\n",

    "PCB",
    "Recv-Q",
    "Send-Q",
    "Local address/PSM",
    "Foreign address",
    "CID",
    "State");
  }

  FUNC_2(VAR_1,
"%-8lx %6d %6d %-17.17d/%-5d %-17.17d %-5d %s\n",
   (unsigned long) VAR_5,
   VAR_8.so_rcv.sb_ccc,
   VAR_8.so_snd.sb_ccc,
   FUNC_1(&VAR_7.src, VAR_10, sizeof(VAR_10)),
   VAR_7.psm,
   FUNC_1(&VAR_7.dst, VAR_11, sizeof(VAR_11)),
   VAR_7.cid,
   (VAR_8.so_options & VAR_0)?
    "LISTEN" : FUNC_4(VAR_7.state));
 }
}
