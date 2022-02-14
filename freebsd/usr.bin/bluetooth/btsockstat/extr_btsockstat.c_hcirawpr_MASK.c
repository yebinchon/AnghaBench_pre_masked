
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef int this ;
struct TYPE_7__ {int sb_ccc; } ;
struct TYPE_6__ {int sb_ccc; } ;
struct socket {TYPE_2__ so_snd; TYPE_1__ so_rcv; } ;
typedef int so ;
typedef int pcb ;
struct TYPE_8__ {char* hci_node; } ;
struct TYPE_9__ {TYPE_3__ addr; int flags; scalar_t__ so; } ;
typedef TYPE_4__ ng_btsocket_hci_raw_pcb_t ;
typedef int * ng_btsocket_hci_raw_pcb_p ;
typedef int kvm_t ;


 int * FUNC_0 (TYPE_4__*,int *) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(kvm_t *VAR_1, u_long VAR_2)
{
 ng_btsocket_hci_raw_pcb_p VAR_3 = ((void*)0), VAR_4 = ((void*)0);
 ng_btsocket_hci_raw_pcb_t VAR_5;
 struct socket VAR_6;
 int VAR_7 = 1;

 if (VAR_2 == 0)
  return;

        if (FUNC_2(VAR_1, VAR_2, (char *) &VAR_3, sizeof(VAR_3)) < 0)
  return;

 for ( ; VAR_3 != ((void*)0); VAR_3 = VAR_4) {
  if (FUNC_2(VAR_1, (u_long) VAR_3, (char *) &VAR_5, sizeof(VAR_5)) < 0)
   return;
  if (FUNC_2(VAR_1, (u_long) VAR_5.so, (char *) &VAR_6, sizeof(VAR_6)) < 0)
   return;

  VAR_4 = FUNC_0(&VAR_5, VAR_4);

  if (VAR_7) {
   VAR_7 = 0;
   FUNC_1(VAR_0,
"Active raw HCI sockets\n" "%-8.8s %-8.8s %-6.6s %-6.6s %-6.6s %-16.16s\n",

    "Socket",
    "PCB",
    "Flags",
    "Recv-Q",
    "Send-Q",
    "Local address");
  }

  if (VAR_5.addr.hci_node[0] == 0) {
   VAR_5.addr.hci_node[0] = '*';
   VAR_5.addr.hci_node[1] = 0;
  }

  FUNC_1(VAR_0,
"%-8lx %-8lx %-6.6x %6d %6d %-16.16s\n",
   (unsigned long) VAR_5.so,
   (unsigned long) VAR_3,
   VAR_5.flags,
   VAR_6.so_rcv.sb_ccc,
   VAR_6.so_snd.sb_ccc,
   VAR_5.addr.hci_node);
 }
}
