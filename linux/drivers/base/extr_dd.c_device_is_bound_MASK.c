
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {TYPE_1__* p; } ;
struct TYPE_2__ {int knode_driver; } ;


 scalar_t__ FUNC_0 (int *) ;

bool FUNC_1(struct device *VAR_0)
{
 return VAR_0->p && FUNC_0(&VAR_0->p->knode_driver);
}
