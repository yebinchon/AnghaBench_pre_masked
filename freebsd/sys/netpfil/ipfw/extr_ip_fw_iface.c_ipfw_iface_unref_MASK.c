
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipfw_ifc {struct ipfw_iface* iface; } ;
struct TYPE_2__ {int refcnt; } ;
struct ipfw_iface {TYPE_1__ no; } ;
struct ip_fw_chain {int dummy; } ;


 int FUNC_0 (struct ip_fw_chain*) ;

void
FUNC_1(struct ip_fw_chain *VAR_0, struct ipfw_ifc *VAR_1)
{
 struct ipfw_iface *VAR_2;

 FUNC_0(VAR_0);

 VAR_2 = VAR_1->iface;
 VAR_1->iface = ((void*)0);

 VAR_2->no.refcnt--;

}
