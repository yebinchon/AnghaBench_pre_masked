
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tid_info {int dummy; } ;
struct table_config {int dummy; } ;
struct ip_fw_chain {int dummy; } ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int VAR_0 ;
 struct table_config* FUNC_1 (int ,struct tid_info*) ;
 int FUNC_2 (struct ip_fw_chain*,struct table_config*) ;

int
FUNC_3(struct ip_fw_chain *VAR_1, struct tid_info *VAR_2, uint32_t *VAR_3)
{
 struct table_config *VAR_4;

 if ((VAR_4 = FUNC_1(FUNC_0(VAR_1), VAR_2)) == ((void*)0))
  return (VAR_0);
 *VAR_3 = FUNC_2(VAR_1, VAR_4);
 return (0);
}
