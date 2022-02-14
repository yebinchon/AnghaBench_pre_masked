
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tid_info {int dummy; } ;
struct table_config {int dummy; } ;
struct ip_fw_chain {int dummy; } ;
typedef int ipfw_xtable ;
typedef int ipfw_table_xentry ;


 int FUNC_0 (struct ip_fw_chain*) ;
 struct table_config* FUNC_1 (int ,struct tid_info*) ;
 int FUNC_2 (struct ip_fw_chain*,struct table_config*) ;

int
FUNC_3(struct ip_fw_chain *VAR_0, struct tid_info *VAR_1, uint32_t *VAR_2)
{
 struct table_config *VAR_3;
 uint32_t VAR_4;

 if ((VAR_3 = FUNC_1(FUNC_0(VAR_0), VAR_1)) == ((void*)0)) {
  *VAR_2 = 0;
  return (0);
 }

 VAR_4 = FUNC_2(VAR_0, VAR_3);
 *VAR_2 = VAR_4 * sizeof(ipfw_table_xentry);
 if (VAR_4 > 0)
  *VAR_2 += sizeof(ipfw_xtable);
 return (0);
}
