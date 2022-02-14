
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ng_btsocket_hci_raw_node_role_switch {int role_switch; } ;
typedef int r ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (int,int ,struct ng_btsocket_hci_raw_node_role_switch*,int) ;
 int FUNC_2 (struct ng_btsocket_hci_raw_node_role_switch*,int ,int) ;
 int VAR_3 ;

int
FUNC_3(int VAR_4, int VAR_5, char **VAR_6)
{
 struct ng_btsocket_hci_raw_node_role_switch VAR_7;

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));
 if (FUNC_1(VAR_4, VAR_2, &VAR_7, sizeof(VAR_7)) < 0)
  return (VAR_0);

 FUNC_0(VAR_3, "Role switch: %d\n", VAR_7.role_switch);

 return (VAR_1);
}
