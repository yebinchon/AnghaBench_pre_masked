
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipfw_ifc {struct ipfw_iface* iface; } ;
struct ipfw_iface {int consumers; } ;
struct ip_fw_chain {int dummy; } ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (int *,struct ipfw_ifc*,int ) ;
 int VAR_0 ;

void
FUNC_2(struct ip_fw_chain *VAR_1, struct ipfw_ifc *VAR_2)
{
 struct ipfw_iface *VAR_3;

 FUNC_0(VAR_1);

 VAR_3 = VAR_2->iface;
 FUNC_1(&VAR_3->consumers, VAR_2, VAR_0);
}
