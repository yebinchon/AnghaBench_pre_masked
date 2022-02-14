
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_portal_group {int dummy; } ;
struct se_wwn {struct srpt_port* priv; } ;
struct srpt_port {struct se_portal_group port_gid_tpg; struct se_portal_group port_guid_tpg; struct se_wwn port_guid_wwn; struct se_wwn port_gid_wwn; } ;


 struct se_portal_group* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct se_wwn*,struct se_portal_group*,int ) ;

__attribute__((used)) static struct se_portal_group *FUNC_3(struct se_wwn *VAR_1,
          const char *VAR_2)
{
 struct srpt_port *VAR_3 = VAR_1->priv;
 struct se_portal_group *VAR_4;
 int VAR_5;

 FUNC_1(VAR_1 != &VAR_3->port_guid_wwn &&
       VAR_1 != &VAR_3->port_gid_wwn);
 VAR_4 = VAR_1 == &VAR_3->port_guid_wwn ? &VAR_3->port_guid_tpg :
  &VAR_3->port_gid_tpg;
 VAR_5 = FUNC_2(VAR_1, VAR_4, VAR_0);
 if (VAR_5)
  return FUNC_0(VAR_5);

 return VAR_4;
}
