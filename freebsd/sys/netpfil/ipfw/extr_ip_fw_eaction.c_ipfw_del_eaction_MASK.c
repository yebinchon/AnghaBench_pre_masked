
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct named_object {scalar_t__ etlv; int refcnt; int name; } ;
struct ip_fw_chain {int dummy; } ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int FUNC_3 (struct ip_fw_chain*) ;
 int FUNC_4 (struct ip_fw_chain*,struct named_object*) ;
 struct named_object* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct ip_fw_chain*,int ,int ,int) ;

int
FUNC_7(struct ip_fw_chain *VAR_2, uint16_t VAR_3)
{
 struct named_object *VAR_4;

 FUNC_2(VAR_2);
 VAR_4 = FUNC_5(FUNC_0(VAR_2), VAR_3);
 if (VAR_4 == ((void*)0) || VAR_4->etlv != VAR_1) {
  FUNC_3(VAR_2);
  return (VAR_0);
 }
 FUNC_6(VAR_2, VAR_3, 0, (VAR_4->refcnt > 1));
 FUNC_1("External action '%s' with id %u unregistered",
     VAR_4->name, VAR_3);
 FUNC_4(VAR_2, VAR_4);
 FUNC_3(VAR_2);
 return (0);
}
