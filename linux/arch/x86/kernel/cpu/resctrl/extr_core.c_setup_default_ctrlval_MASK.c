
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rdt_resource {int num_closid; int default_ctrl; } ;


 int VAR_0 ;

void FUNC_0(struct rdt_resource *VAR_1, u32 *VAR_2, u32 *VAR_3)
{
 int VAR_4;







 for (VAR_4 = 0; VAR_4 < VAR_1->num_closid; VAR_4++, VAR_2++, VAR_3++) {
  *VAR_2 = VAR_1->default_ctrl;
  *VAR_3 = VAR_0;
 }
}
