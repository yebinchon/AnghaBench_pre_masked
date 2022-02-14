
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dwapb_gpio {unsigned int nr_ports; TYPE_1__* ports; } ;
struct TYPE_2__ {int gc; scalar_t__ is_registered; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct dwapb_gpio *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr_ports; ++VAR_1)
  if (VAR_0->ports[VAR_1].is_registered)
   FUNC_0(&VAR_0->ports[VAR_1].gc);
}
