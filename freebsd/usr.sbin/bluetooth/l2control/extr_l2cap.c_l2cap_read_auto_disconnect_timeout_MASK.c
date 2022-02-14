
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ng_btsocket_l2cap_raw_auto_discon_timo {scalar_t__ timeout; } ;
typedef int r ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (int,int ,struct ng_btsocket_l2cap_raw_auto_discon_timo*,int) ;
 int FUNC_2 (struct ng_btsocket_l2cap_raw_auto_discon_timo*,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(int VAR_4, int VAR_5, char **VAR_6)
{
 struct ng_btsocket_l2cap_raw_auto_discon_timo VAR_7;

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));
 if (FUNC_1(VAR_4, VAR_2, &VAR_7, sizeof(VAR_7)) < 0)
  return (VAR_0);

 if (VAR_7.timeout != 0)
  FUNC_0(VAR_3, "Auto disconnect timeout: %ld sec\n", VAR_7.timeout);
 else
  FUNC_0(VAR_3, "Auto disconnect disabled\n");

 return (VAR_1);
}
