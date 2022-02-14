
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct namedobj_instance {int dummy; } ;
struct ip_fw_chain {struct namedobj_instance* ifcfg; } ;


 int VAR_0 ;
 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 () ;
 struct namedobj_instance* FUNC_3 (int ) ;
 int FUNC_4 (struct namedobj_instance*) ;

__attribute__((used)) static void
FUNC_5(struct ip_fw_chain *VAR_1)
{
 struct namedobj_instance *VAR_2;

 VAR_2 = FUNC_3(VAR_0);
 FUNC_0(VAR_1);
 if (VAR_1->ifcfg == ((void*)0)) {
  VAR_1->ifcfg = VAR_2;
  VAR_2 = ((void*)0);
 }
 FUNC_1(VAR_1);

 if (VAR_2 != ((void*)0)) {

  FUNC_4(VAR_2);
 } else {

  FUNC_2();
 }
}
