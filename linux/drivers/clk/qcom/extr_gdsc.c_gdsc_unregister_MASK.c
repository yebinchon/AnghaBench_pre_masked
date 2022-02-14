
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdsc_desc {size_t num; struct gdsc** scs; struct device* dev; } ;
struct gdsc {int pd; scalar_t__ parent; } ;
struct device {int of_node; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int *) ;

void FUNC_2(struct gdsc_desc *VAR_0)
{
 int VAR_1;
 struct device *VAR_2 = VAR_0->dev;
 struct gdsc **VAR_3 = VAR_0->scs;
 size_t VAR_4 = VAR_0->num;


 for (VAR_1 = 0; VAR_1 < VAR_4; VAR_1++) {
  if (!VAR_3[VAR_1])
   continue;
  if (VAR_3[VAR_1]->parent)
   FUNC_1(VAR_3[VAR_1]->parent, &VAR_3[VAR_1]->pd);
 }
 FUNC_0(VAR_2->of_node);
}
