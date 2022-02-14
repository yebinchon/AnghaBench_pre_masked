
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ip_fw_chain {int n_rules; struct ip_fw** map; } ;
struct ip_fw {scalar_t__ rulenum; scalar_t__ id; } ;



int
FUNC_0(struct ip_fw_chain *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 struct ip_fw *VAR_6;

   for (VAR_4 = 0, VAR_5 = VAR_0->n_rules - 1; VAR_4 < VAR_5;) {
  VAR_3 = (VAR_4 + VAR_5) / 2;
  VAR_6 = VAR_0->map[VAR_3];
  if (VAR_6->rulenum < VAR_1)
   VAR_4 = VAR_3 + 1;
  else if (VAR_6->rulenum > VAR_1)
   VAR_5 = VAR_3;
  else if (VAR_6->id < VAR_2)
   VAR_4 = VAR_3 + 1;
  else
   VAR_5 = VAR_3;
 }
 return VAR_5;
}
