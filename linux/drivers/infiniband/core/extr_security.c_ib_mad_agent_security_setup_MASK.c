
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_mad_agent {int security; int mad_agent_sec_list; int smp_allowed; int port_num; TYPE_1__* device; } ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct ib_mad_agent *VAR_3,
    enum ib_qp_type VAR_4)
{
 int VAR_5;

 if (!FUNC_4(VAR_3->device, VAR_3->port_num))
  return 0;

 FUNC_0(&VAR_3->mad_agent_sec_list);

 VAR_5 = FUNC_5(&VAR_3->security);
 if (VAR_5)
  return VAR_5;

 if (VAR_4 != VAR_0)
  return 0;

 FUNC_8(&VAR_2);
 VAR_5 = FUNC_6(VAR_3->security,
      FUNC_2(&VAR_3->device->dev),
      VAR_3->port_num);
 if (VAR_5)
  goto free_security;

 FUNC_1(VAR_3->smp_allowed, 1);
 FUNC_3(&VAR_3->mad_agent_sec_list, &VAR_1);
 FUNC_9(&VAR_2);
 return 0;

free_security:
 FUNC_9(&VAR_2);
 FUNC_7(VAR_3->security);
 return VAR_5;
}
