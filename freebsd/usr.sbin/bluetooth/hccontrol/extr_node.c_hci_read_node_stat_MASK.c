
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cmd_sent; int evnt_recv; int acl_recv; int acl_sent; int sco_recv; int sco_sent; int bytes_recv; int bytes_sent; } ;
struct ng_btsocket_hci_raw_node_stat {TYPE_1__ stat; } ;
typedef int r ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (int,int ,struct ng_btsocket_hci_raw_node_stat*,int) ;
 int FUNC_2 (struct ng_btsocket_hci_raw_node_stat*,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(int VAR_4, int VAR_5, char **VAR_6)
{
 struct ng_btsocket_hci_raw_node_stat VAR_7;

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));
 if (FUNC_1(VAR_4, VAR_2, &VAR_7, sizeof(VAR_7)) < 0)
  return (VAR_0);

 FUNC_0(VAR_3, "Commands sent: %d\n", VAR_7.stat.cmd_sent);
 FUNC_0(VAR_3, "Events received: %d\n", VAR_7.stat.evnt_recv);
 FUNC_0(VAR_3, "ACL packets received: %d\n", VAR_7.stat.acl_recv);
 FUNC_0(VAR_3, "ACL packets sent: %d\n", VAR_7.stat.acl_sent);
 FUNC_0(VAR_3, "SCO packets received: %d\n", VAR_7.stat.sco_recv);
 FUNC_0(VAR_3, "SCO packets sent: %d\n", VAR_7.stat.sco_sent);
 FUNC_0(VAR_3, "Bytes received: %d\n", VAR_7.stat.bytes_recv);
 FUNC_0(VAR_3, "Bytes sent: %d\n", VAR_7.stat.bytes_sent);

 return (VAR_1);
}
