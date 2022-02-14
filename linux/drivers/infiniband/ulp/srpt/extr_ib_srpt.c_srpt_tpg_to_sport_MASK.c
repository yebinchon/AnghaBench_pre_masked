
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srpt_port {int dummy; } ;
struct se_portal_group {TYPE_1__* se_tpg_wwn; } ;
struct TYPE_2__ {struct srpt_port* priv; } ;



__attribute__((used)) static struct srpt_port *FUNC_0(struct se_portal_group *VAR_0)
{
 return VAR_0->se_tpg_wwn->priv;
}
