
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_portal_group {int dummy; } ;
struct srpt_port {char* port_guid; char* port_gid; struct se_portal_group port_guid_tpg; struct se_portal_group port_gid_tpg; } ;


 int FUNC_0 (int) ;
 struct srpt_port* FUNC_1 (struct se_portal_group*) ;

__attribute__((used)) static char *FUNC_2(struct se_portal_group *VAR_0)
{
 struct srpt_port *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_0 != &VAR_1->port_guid_tpg &&
       VAR_0 != &VAR_1->port_gid_tpg);
 return VAR_0 == &VAR_1->port_guid_tpg ? VAR_1->port_guid :
  VAR_1->port_gid;
}
