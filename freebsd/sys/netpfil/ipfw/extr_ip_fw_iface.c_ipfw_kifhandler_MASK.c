
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct namedobj_instance {int dummy; } ;
struct ipfw_iface {int dummy; } ;
struct ip_fw_chain {int dummy; } ;
struct ifnet {int if_index; } ;


 struct namedobj_instance* FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (struct ip_fw_chain*) ;
 scalar_t__ VAR_0 ;
 struct ip_fw_chain VAR_1 ;
 int FUNC_3 (struct ip_fw_chain*,struct ipfw_iface*,int ) ;
 int FUNC_4 (struct ip_fw_chain*,struct ipfw_iface*,int ) ;
 int FUNC_5 (struct ifnet*) ;
 scalar_t__ FUNC_6 (struct namedobj_instance*,int ,int ) ;

__attribute__((used)) static void
FUNC_7(void *VAR_2, struct ifnet *VAR_3)
{
 struct ip_fw_chain *VAR_4;
 struct ipfw_iface *VAR_5;
 struct namedobj_instance *VAR_6;
 uintptr_t VAR_7;

 if (VAR_0 == 0)
  return;

 VAR_4 = &VAR_1;
 VAR_7 = (uintptr_t)VAR_2;

 FUNC_1(VAR_4);
 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6 == ((void*)0)) {
  FUNC_2(VAR_4);
  return;
 }
 VAR_5 = (struct ipfw_iface*)FUNC_6(VAR_6, 0,
     FUNC_5(VAR_3));
 if (VAR_5 != ((void*)0)) {
  if (VAR_7 == 1)
   FUNC_3(VAR_4, VAR_5, VAR_3->if_index);
  else
   FUNC_4(VAR_4, VAR_5, VAR_3->if_index);
 }
 FUNC_2(VAR_4);
}
