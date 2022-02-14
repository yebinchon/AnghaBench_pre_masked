
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct ip_fw_chain {int dummy; } ;
typedef int ipfw_eaction_t ;


 int FUNC_0 (char*,char const*,scalar_t__) ;
 int FUNC_1 (struct ip_fw_chain*,int ,char const*,scalar_t__*) ;
 scalar_t__ FUNC_2 (char const*) ;

uint16_t
FUNC_3(struct ip_fw_chain *VAR_0, ipfw_eaction_t VAR_1,
    const char *VAR_2)
{
 uint16_t VAR_3;

 VAR_3 = 0;
 if (FUNC_2(VAR_2) == 0) {
  FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_3);
  FUNC_0("Registered external action '%s' with id %u",
      VAR_2, VAR_3);
 }
 return (VAR_3);
}
