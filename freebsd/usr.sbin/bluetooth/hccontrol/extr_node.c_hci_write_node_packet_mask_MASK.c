
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ng_btsocket_hci_raw_node_packet_mask {int packet_mask; } ;
typedef int r ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ,struct ng_btsocket_hci_raw_node_packet_mask*,int) ;
 int FUNC_1 (struct ng_btsocket_hci_raw_node_packet_mask*,int ,int) ;
 int FUNC_2 (char*,char*,int*) ;

int
FUNC_3(int VAR_4, int VAR_5, char **VAR_6)
{
 struct ng_btsocket_hci_raw_node_packet_mask VAR_7;
 int VAR_8;

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));

 switch (VAR_5) {
 case 1:
  if (FUNC_2(VAR_6[0], "%x", &VAR_8) != 1)
   return (VAR_3);

  VAR_7.packet_mask = (VAR_8 & 0xffff);
  break;

 default:
  return (VAR_3);
 }

 if (FUNC_0(VAR_4, VAR_2, &VAR_7, sizeof(VAR_7)) < 0)
  return (VAR_0);

 return (VAR_1);
}
