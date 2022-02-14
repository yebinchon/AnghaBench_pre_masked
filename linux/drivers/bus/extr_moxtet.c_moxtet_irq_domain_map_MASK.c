
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exists; int chip; } ;
struct moxtet {TYPE_1__ irq; int dev; } ;
struct irq_domain {struct moxtet* host_data; } ;
typedef scalar_t__ irq_hw_number_t ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int FUNC_2 (unsigned int,int *,int ) ;
 int FUNC_3 (unsigned int,struct moxtet*) ;

__attribute__((used)) static int FUNC_4(struct irq_domain *VAR_3, unsigned int VAR_4,
     irq_hw_number_t VAR_5)
{
 struct moxtet *VAR_6 = VAR_3->host_data;

 if (VAR_5 >= VAR_1 || !(VAR_6->irq.exists & FUNC_0(VAR_5))) {
  FUNC_1(VAR_6->dev, "Invalid hw irq number\n");
  return -VAR_0;
 }

 FUNC_3(VAR_4, VAR_3->host_data);
 FUNC_2(VAR_4, &VAR_6->irq.chip, VAR_2);

 return 0;
}
