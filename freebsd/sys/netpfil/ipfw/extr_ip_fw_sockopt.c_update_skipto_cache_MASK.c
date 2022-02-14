
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_fw_chain {int* idxmap_back; } ;
struct ip_fw {int rulenum; } ;


 int FUNC_0 (struct ip_fw_chain*) ;

__attribute__((used)) static void
FUNC_1(struct ip_fw_chain *VAR_0, struct ip_fw **VAR_1)
{
 int *VAR_2, VAR_3;
 int VAR_4, VAR_5;

 FUNC_0(VAR_0);

 VAR_5 = 0;
 VAR_3 = VAR_1[VAR_5]->rulenum;
 VAR_2 = VAR_0->idxmap_back;

 if (VAR_2 == ((void*)0))
  return;

 for (VAR_4 = 0; VAR_4 < 65536; VAR_4++) {
  VAR_2[VAR_4] = VAR_5;

  if (VAR_4 != VAR_3 || VAR_4 == 65535)
   continue;

  VAR_3 = VAR_1[++VAR_5]->rulenum;
  while (VAR_3 == VAR_4)
   VAR_3 = VAR_1[++VAR_5]->rulenum;
 }
}
