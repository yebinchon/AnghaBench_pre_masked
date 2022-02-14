
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_fw_chain {int* idxmap; int* idxmap_back; } ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*) ;

__attribute__((used)) static void
FUNC_2(struct ip_fw_chain *VAR_0)
{
 int *VAR_1;

 FUNC_0(VAR_0);
 FUNC_1(VAR_0);

 VAR_1 = VAR_0->idxmap;
 VAR_0->idxmap = VAR_0->idxmap_back;
 VAR_0->idxmap_back = VAR_1;
}
