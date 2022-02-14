
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {TYPE_2__* bus; } ;
struct TYPE_4__ {TYPE_1__* p; } ;
struct TYPE_3__ {int bus_notifier; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;

int FUNC_3(struct device *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (!VAR_2)
  FUNC_1(VAR_1);
 else if (VAR_1->bus)
  FUNC_0(&VAR_1->bus->p->bus_notifier,
          VAR_0, VAR_1);
 return VAR_2;
}
