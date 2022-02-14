
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ng_btsocket_hci_raw_con_list {int num_connections; TYPE_1__* connections; } ;
typedef int r ;
typedef int ng_hci_node_con_ep ;
struct TYPE_3__ {int con_handle; scalar_t__ link_type; int mode; scalar_t__ role; int pending; int queue_len; int state; int encryption_mode; int bdaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 (int *) ;
 char* FUNC_4 (int ) ;
 char* FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int,int ,struct ng_btsocket_hci_raw_con_list*,int) ;
 int FUNC_7 (struct ng_btsocket_hci_raw_con_list*,int ,int) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_8(int VAR_9, int VAR_10, char **VAR_11)
{
 struct ng_btsocket_hci_raw_con_list VAR_12;
 int VAR_13, VAR_14 = VAR_5;

 FUNC_7(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.num_connections = VAR_3;
 VAR_12.connections = FUNC_0(VAR_3, sizeof(ng_hci_node_con_ep));
 if (VAR_12.connections == ((void*)0)) {
  VAR_7 = VAR_0;
  return (VAR_1);
 }

 if (FUNC_6(VAR_9, VAR_6, &VAR_12, sizeof(VAR_12)) < 0) {
  VAR_14 = VAR_1;
  goto out;
 }

 FUNC_1(VAR_8,
"Remote BD_ADDR    " "Handle " "Type " "Mode " "Role " "Encrypt " "Pending " "Queue " "State\n");
 for (VAR_13 = 0; VAR_13 < VAR_12.num_connections; VAR_13++) {
  FUNC_1(VAR_8,
"%-17.17s " "%6d " "%4.4s " "%4d " "%4.4s " "%7.7s " "%7d " "%5d " "%s\n",
   FUNC_3(&VAR_12.connections[VAR_13].bdaddr),
   VAR_12.connections[VAR_13].con_handle,
   (VAR_12.connections[VAR_13].link_type == VAR_2)?
    "ACL" : "SCO",
   VAR_12.connections[VAR_13].mode,
   (VAR_12.connections[VAR_13].role == VAR_4)?
    "MAST" : "SLAV",
   FUNC_5(VAR_12.connections[VAR_13].encryption_mode, 1),
   VAR_12.connections[VAR_13].pending,
   VAR_12.connections[VAR_13].queue_len,
   FUNC_4(VAR_12.connections[VAR_13].state));
 }
out:
 FUNC_2(VAR_12.connections);

 return (VAR_14);
}
