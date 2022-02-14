
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct max8997_muic_info {int irq_work; } ;
struct TYPE_3__ {int virq; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct max8997_muic_info*) ;
 TYPE_1__* VAR_0 ;
 struct max8997_muic_info* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct max8997_muic_info *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
  FUNC_2(VAR_0[VAR_3].virq, VAR_2);
 FUNC_1(&VAR_2->irq_work);

 return 0;
}
