
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cmd_free; int acl_size; int acl_free; int acl_pkts; int sco_size; int sco_free; int sco_pkts; } ;
struct ng_btsocket_hci_raw_node_buffer {TYPE_1__ buffer; } ;
typedef int r ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (int,int ,struct ng_btsocket_hci_raw_node_buffer*,int) ;
 int FUNC_2 (struct ng_btsocket_hci_raw_node_buffer*,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(int VAR_4, int VAR_5, char **VAR_6)
{
 struct ng_btsocket_hci_raw_node_buffer VAR_7;

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));
 if (FUNC_1(VAR_4, VAR_2, &VAR_7, sizeof(VAR_7)) < 0)
  return (VAR_0);

 FUNC_0(VAR_3, "Number of free command buffers: %d\n",
  VAR_7.buffer.cmd_free);
 FUNC_0(VAR_3, "Max. ACL packet size: %d\n",
  VAR_7.buffer.acl_size);
 FUNC_0(VAR_3, "Numbef of free ACL buffers: %d\n",
  VAR_7.buffer.acl_free);
 FUNC_0(VAR_3, "Total number of ACL buffers: %d\n",
  VAR_7.buffer.acl_pkts);
 FUNC_0(VAR_3, "Max. SCO packet size: %d\n",
  VAR_7.buffer.sco_size);
 FUNC_0(VAR_3, "Numbef of free SCO buffers: %d\n",
  VAR_7.buffer.sco_free);
 FUNC_0(VAR_3, "Total number of SCO buffers: %d\n",
  VAR_7.buffer.sco_pkts);

 return (VAR_1);
}
