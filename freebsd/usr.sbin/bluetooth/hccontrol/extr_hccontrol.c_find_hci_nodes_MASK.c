
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_hci {int hci_len; int hci_node; int hci_family; } ;
struct sockaddr {int dummy; } ;
struct nodeinfo {int dummy; } ;
struct ng_btsocket_hci_raw_node_list_names {int num_names; struct nodeinfo* names; } ;
typedef int r ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*) ;
 scalar_t__ FUNC_4 (int,int ,struct ng_btsocket_hci_raw_node_list_names*,int) ;
 int FUNC_5 (struct sockaddr_hci*,int ,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,char const*,int) ;

__attribute__((used)) static int
FUNC_8(struct nodeinfo** VAR_6)
{
 struct ng_btsocket_hci_raw_node_list_names VAR_7;
 struct sockaddr_hci VAR_8;
 int VAR_9;
 const char * VAR_10 = "ubt0hci";

 VAR_7.num_names = VAR_2;
 VAR_7.names = (struct nodeinfo*)FUNC_1(VAR_2, sizeof(struct nodeinfo));
 if (VAR_7.names == ((void*)0))
  FUNC_3(8, "Could not allocate memory");

 VAR_9 = FUNC_6(VAR_3, VAR_5, VAR_1);
 if (VAR_9 < 0)
  FUNC_3(9, "Could not create socket");

 FUNC_5(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.hci_len = sizeof(VAR_8);
 VAR_8.hci_family = VAR_0;
 FUNC_7(VAR_8.hci_node, VAR_10, sizeof(VAR_8.hci_node));
 if (FUNC_0(VAR_9, (struct sockaddr *) &VAR_8, sizeof(VAR_8)) < 0)
  FUNC_3(10, "Could not bind socket");

 if (FUNC_4(VAR_9, VAR_4, &VAR_7, sizeof(VAR_7)) < 0)
  FUNC_3(11, "Could not get list of HCI nodes");

 FUNC_2(VAR_9);

 *VAR_6 = VAR_7.names;

 return (VAR_7.num_names);
}
