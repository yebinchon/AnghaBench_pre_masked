
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ng_btsocket_l2cap_raw_node_flags {int flags; } ;
typedef int r ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (int,int ,struct ng_btsocket_l2cap_raw_node_flags*,int) ;
 int FUNC_2 (struct ng_btsocket_l2cap_raw_node_flags*,int ,int) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_3(int VAR_7, int VAR_8, char **VAR_9)
{
 struct ng_btsocket_l2cap_raw_node_flags VAR_10;

 FUNC_2(&VAR_10, 0, sizeof(VAR_10));
 if (FUNC_1(VAR_7, VAR_5, &VAR_10, sizeof(VAR_10)) < 0)
  return (VAR_0);

 FUNC_0(VAR_6, "Connectionless traffic flags:\n");
 FUNC_0(VAR_6, "\tSDP: %s\n",
  (VAR_10.flags & VAR_2)? "disabled" : "enabled");
 FUNC_0(VAR_6, "\tRFCOMM: %s\n",
  (VAR_10.flags & VAR_1)? "disabled":"enabled");
 FUNC_0(VAR_6, "\tTCP: %s\n",
  (VAR_10.flags & VAR_3)? "disabled" : "enabled");

 return (VAR_4);
}
