
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmi_smb_xport {int mappingtable_mutex; int mapping_table; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct rmi_smb_xport *VAR_0)
{

 FUNC_1(&VAR_0->mappingtable_mutex);
 FUNC_0(VAR_0->mapping_table, 0, sizeof(VAR_0->mapping_table));
 FUNC_2(&VAR_0->mappingtable_mutex);
}
