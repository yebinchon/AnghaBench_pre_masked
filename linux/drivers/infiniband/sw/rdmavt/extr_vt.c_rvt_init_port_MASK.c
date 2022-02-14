
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rvt_ibport {int * pkey_table; } ;
struct rvt_dev_info {struct rvt_ibport** ports; } ;



int FUNC_0(struct rvt_dev_info *VAR_0, struct rvt_ibport *VAR_1,
    int VAR_2, u16 *VAR_3)
{

 VAR_0->ports[VAR_2] = VAR_1;
 VAR_0->ports[VAR_2]->pkey_table = VAR_3;

 return 0;
}
