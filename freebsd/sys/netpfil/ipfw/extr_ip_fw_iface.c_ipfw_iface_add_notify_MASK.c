
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipfw_ifc {int cbdata; int (* cb ) (struct ip_fw_chain*,int ,int ) ;struct ipfw_iface* iface; } ;
struct ipfw_iface {scalar_t__ resolved; int ifindex; int consumers; } ;
struct ip_fw_chain {int dummy; } ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (int *,struct ipfw_ifc*,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct ip_fw_chain*,int ,int ) ;

void
FUNC_4(struct ip_fw_chain *VAR_1, struct ipfw_ifc *VAR_2)
{
 struct ipfw_iface *VAR_3;

 FUNC_0(VAR_1);
 FUNC_1(VAR_1);

 VAR_3 = VAR_2->iface;

 FUNC_2(&VAR_3->consumers, VAR_2, VAR_0);
 if (VAR_3->resolved != 0)
  VAR_2->cb(VAR_1, VAR_2->cbdata, VAR_3->ifindex);
}
