
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ng_btsocket_l2cap_raw_node_debug {int debug; } ;
typedef int r ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,int ,struct ng_btsocket_l2cap_raw_node_debug*,int) ;
 int FUNC_2 (struct ng_btsocket_l2cap_raw_node_debug*,int ,int) ;

__attribute__((used)) static int
FUNC_3(int VAR_4, int VAR_5, char **VAR_6)
{
 struct ng_btsocket_l2cap_raw_node_debug VAR_7;

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));
 switch (VAR_5) {
 case 1:
  VAR_7.debug = FUNC_0(VAR_6[0]);
  break;

 default:
  return (VAR_3);
 }

 if (FUNC_1(VAR_4, VAR_2, &VAR_7, sizeof(VAR_7)) < 0)
  return (VAR_0);

 return (VAR_1);
}
