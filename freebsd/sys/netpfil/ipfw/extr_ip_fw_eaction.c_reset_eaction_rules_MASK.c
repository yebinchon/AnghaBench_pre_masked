
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct named_object {scalar_t__ kidx; int refcnt; } ;
struct ip_fw_chain {int n_rules; int * map; } ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int FUNC_3 (struct ip_fw_chain*) ;
 int FUNC_4 (struct ip_fw_chain*) ;
 int VAR_1 ;
 int FUNC_5 (struct ip_fw_chain*,scalar_t__,scalar_t__,scalar_t__) ;
 struct named_object* FUNC_6 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_7 (struct ip_fw_chain*,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9(struct ip_fw_chain *VAR_2, uint16_t VAR_3,
    uint16_t VAR_4, bool VAR_5)
{
 struct named_object *VAR_6;
 int VAR_7;

 FUNC_2(VAR_2);

 VAR_6 = FUNC_6(FUNC_0(VAR_2), 0,
     VAR_0, VAR_1);
 if (VAR_6 == ((void*)0))
  FUNC_8("Default external action handler is not found");
 if (VAR_3 == VAR_6->kidx)
  FUNC_8("Wrong eaction_id");

 FUNC_1("Going to replace id %u with %u", VAR_3, VAR_6->kidx);
 FUNC_3(VAR_2);




 if (VAR_5) {
  for (VAR_7 = 0; VAR_7 < VAR_2->n_rules; VAR_7++) {






   if (FUNC_7(VAR_2, VAR_2->map[VAR_7], VAR_3,
       VAR_6->kidx, VAR_4) != 0)
    VAR_6->refcnt++;
  }
 }





 FUNC_5(VAR_2, VAR_3, VAR_6->kidx, VAR_4);
 FUNC_4(VAR_2);
}
