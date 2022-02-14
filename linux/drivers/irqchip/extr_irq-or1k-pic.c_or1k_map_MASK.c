
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct or1k_pic_dev {int flags; int handle; int chip; } ;
struct irq_domain {struct or1k_pic_dev* host_data; } ;
typedef int irq_hw_number_t ;


 int FUNC_0 (unsigned int,int *,int ) ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct irq_domain *VAR_0, unsigned int VAR_1, irq_hw_number_t VAR_2)
{
 struct or1k_pic_dev *VAR_3 = VAR_0->host_data;

 FUNC_0(VAR_1, &VAR_3->chip, VAR_3->handle);
 FUNC_1(VAR_1, VAR_3->flags);

 return 0;
}
