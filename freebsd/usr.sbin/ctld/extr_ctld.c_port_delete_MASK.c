
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct port {struct port* p_name; TYPE_2__* p_conf; TYPE_1__* p_target; TYPE_4__* p_pport; TYPE_3__* p_portal_group; } ;
struct TYPE_8__ {int pp_ports; } ;
struct TYPE_7__ {int pg_ports; } ;
struct TYPE_6__ {int conf_ports; } ;
struct TYPE_5__ {int t_ports; } ;


 int FUNC_0 (int *,struct port*,int ) ;
 int FUNC_1 (struct port*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_2(struct port *VAR_4)
{

 if (VAR_4->p_portal_group)
  FUNC_0(&VAR_4->p_portal_group->pg_ports, VAR_4, VAR_1);
 if (VAR_4->p_pport)
  FUNC_0(&VAR_4->p_pport->pp_ports, VAR_4, VAR_2);
 if (VAR_4->p_target)
  FUNC_0(&VAR_4->p_target->t_ports, VAR_4, VAR_3);
 FUNC_0(&VAR_4->p_conf->conf_ports, VAR_4, VAR_0);
 FUNC_1(VAR_4->p_name);
 FUNC_1(VAR_4);
}
