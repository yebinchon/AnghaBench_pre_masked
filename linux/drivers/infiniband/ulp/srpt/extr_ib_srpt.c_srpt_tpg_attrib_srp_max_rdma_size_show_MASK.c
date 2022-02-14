
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int srp_max_rdma_size; } ;
struct srpt_port {TYPE_1__ port_attrib; } ;
struct se_portal_group {int dummy; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 struct se_portal_group* FUNC_0 (struct config_item*) ;
 int FUNC_1 (char*,char*,int) ;
 struct srpt_port* FUNC_2 (struct se_portal_group*) ;

__attribute__((used)) static ssize_t FUNC_3(struct config_item *VAR_0,
  char *VAR_1)
{
 struct se_portal_group *VAR_2 = FUNC_0(VAR_0);
 struct srpt_port *VAR_3 = FUNC_2(VAR_2);

 return FUNC_1(VAR_1, "%u\n", VAR_3->port_attrib.srp_max_rdma_size);
}
