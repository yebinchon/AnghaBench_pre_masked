
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct TYPE_5__ {int * clks; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (struct device_node*,int ,TYPE_1__*) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(struct device_node *VAR_5)
{
 int VAR_6;

 VAR_3 = FUNC_2(VAR_0);

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  VAR_3->clks[VAR_6] = FUNC_1(-VAR_1);

 FUNC_3(VAR_4, FUNC_0(VAR_4),
   VAR_3);

 FUNC_4(VAR_5, VAR_2, VAR_3);
}
