
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nodeinfo {char* name; int id; int hooks; } ;
struct ng_btsocket_hci_raw_node_list_names {int num_names; struct nodeinfo* names; } ;
typedef int r ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct nodeinfo*) ;
 scalar_t__ FUNC_3 (int,int ,struct ng_btsocket_hci_raw_node_list_names*,int) ;
 int VAR_4 ;

int
FUNC_4(int VAR_5, int VAR_6, char **VAR_7)
{
 struct ng_btsocket_hci_raw_node_list_names VAR_8;
 int VAR_9;

 VAR_8.num_names = VAR_1;
 VAR_8.names = (struct nodeinfo*)FUNC_0(VAR_1, sizeof(struct nodeinfo));
 if (VAR_8.names == ((void*)0))
  return (VAR_0);

 if (FUNC_3(VAR_5, VAR_3, &VAR_8, sizeof(VAR_8)) < 0) {
  FUNC_2(VAR_8.names);
  return (VAR_0);
 }

 FUNC_1(VAR_4, "Name            ID       Num hooks\n");
 for (VAR_9 = 0; VAR_9 < VAR_8.num_names; ++VAR_9)
  FUNC_1(VAR_4, "%-15s %08x %9d\n",
      VAR_8.names[VAR_9].name, VAR_8.names[VAR_9].id, VAR_8.names[VAR_9].hooks);

 FUNC_2(VAR_8.names);

 return (VAR_2);
}
