
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_module {size_t num_interfaces; int dev; int * interfaces; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct gb_module *VAR_0)
{
 size_t VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_interfaces; ++VAR_1)
  FUNC_0(VAR_0->interfaces[VAR_1]);

 FUNC_1(&VAR_0->dev);
}
