
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expansion_card {int * irq_data; int * ops; scalar_t__ claimed; } ;
struct ecard_driver {int (* remove ) (struct expansion_card*) ;} ;
struct device {int driver; } ;


 struct expansion_card* FUNC_0 (struct device*) ;
 struct ecard_driver* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (struct expansion_card*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1)
{
 struct expansion_card *VAR_2 = FUNC_0(VAR_1);
 struct ecard_driver *VAR_3 = FUNC_1(VAR_1->driver);

 VAR_3->remove(VAR_2);
 VAR_2->claimed = 0;





 VAR_2->ops = &VAR_0;
 FUNC_2();
 VAR_2->irq_data = ((void*)0);

 return 0;
}
