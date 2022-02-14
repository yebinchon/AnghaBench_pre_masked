
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct ip_fw_chain {int dummy; } ;
typedef enum ipfw_sets_cmd { ____Placeholder_ipfw_sets_cmd } ipfw_sets_cmd ;


 int FUNC_0 (struct ip_fw_chain*) ;

 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct ip_fw_chain *VAR_3, uint16_t VAR_4, uint8_t VAR_5,
    enum ipfw_sets_cmd VAR_6)
{

 switch (VAR_6) {
 case 130:
 case 129:
 case 132:




  return (0);
 case 128:
 case 131:





  if (VAR_2 == 0)
   return (0);
  break;
 case 133:





  if (VAR_2 == 0)
   return (VAR_0);
 }

 return (FUNC_1(FUNC_0(VAR_3), VAR_1,
     VAR_4, VAR_5, VAR_6));
}
