
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*) ;

void FUNC_1(u32 *VAR_2, struct device *VAR_3)
{
 if (FUNC_0(VAR_3->of_node, "fsl,qman-portal"))
  *VAR_2 = VAR_0;
 if (FUNC_0(VAR_3->of_node, "fsl,qman"))
  *VAR_2 = VAR_1;
}
