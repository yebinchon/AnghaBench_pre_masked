
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
 int FUNC_1 (int ,int ,int ,int ,int) ;
 int FUNC_2 (struct ip_fw_chain*,int ,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct ip_fw_chain *VAR_2, uint16_t VAR_3, uint8_t VAR_4,
    enum ipfw_sets_cmd VAR_5)
{

 switch (VAR_5) {
 case 129:
 case 128:






 case 130:
  if (VAR_1 == 0)
   return (0);
  break;
 default:
  return (FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5));
 }

 return (FUNC_1(FUNC_0(VAR_2), VAR_0,
     VAR_3, VAR_4, VAR_5));
}
