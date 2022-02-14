
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct table_value {int dummy; } ;
struct table_config {int dummy; } ;
struct ip_fw_chain {scalar_t__ valuestate; } ;



__attribute__((used)) static struct table_value *
FUNC_0(struct ip_fw_chain *VAR_0, struct table_config *VAR_1, uint32_t VAR_2)
{
 struct table_value *VAR_3;

 VAR_3 = (struct table_value *)VAR_0->valuestate;

 return (&VAR_3[VAR_2]);
}
