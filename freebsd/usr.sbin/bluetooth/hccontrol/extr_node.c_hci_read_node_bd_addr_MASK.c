
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ng_btsocket_hci_raw_node_bdaddr {int bdaddr; } ;
typedef int r ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ FUNC_2 (int,int ,struct ng_btsocket_hci_raw_node_bdaddr*,int) ;
 int FUNC_3 (struct ng_btsocket_hci_raw_node_bdaddr*,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4(int VAR_4, int VAR_5, char **VAR_6)
{
 struct ng_btsocket_hci_raw_node_bdaddr VAR_7;

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));
 if (FUNC_2(VAR_4, VAR_2, &VAR_7, sizeof(VAR_7)) < 0)
  return (VAR_0);

 FUNC_1(VAR_3, "BD_ADDR: %s\n", FUNC_0(&VAR_7.bdaddr, ((void*)0)));

 return (VAR_1);
}
