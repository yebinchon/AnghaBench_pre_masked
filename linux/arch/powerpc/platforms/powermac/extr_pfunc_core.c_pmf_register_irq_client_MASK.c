
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pmf_irq_client {struct pmf_function* func; int link; } ;
struct pmf_function {int irq_clients; TYPE_2__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {TYPE_1__* handlers; } ;
struct TYPE_3__ {int (* irq_enable ) (struct pmf_function*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct pmf_function* FUNC_0 (struct device_node*,char const*,int ) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct pmf_function* FUNC_5 (struct pmf_function*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct pmf_function*) ;

int FUNC_9(struct device_node *VAR_4,
       const char *VAR_5,
       struct pmf_irq_client *VAR_6)
{
 struct pmf_function *VAR_7;
 unsigned long VAR_8;

 FUNC_6(&VAR_3, VAR_8);
 VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_1);
 if (VAR_7)
  VAR_7 = FUNC_5(VAR_7);
 FUNC_7(&VAR_3, VAR_8);
 if (VAR_7 == ((void*)0))
  return -VAR_0;


 FUNC_3(&VAR_2);
 if (FUNC_2(&VAR_7->irq_clients))
  VAR_7->dev->handlers->irq_enable(VAR_7);


 FUNC_6(&VAR_3, VAR_8);
 FUNC_1(&VAR_6->link, &VAR_7->irq_clients);
 FUNC_7(&VAR_3, VAR_8);

 VAR_6->func = VAR_7;
 FUNC_4(&VAR_2);

 return 0;
}
