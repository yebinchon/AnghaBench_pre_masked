
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vic_device {int valid_sources; int base; } ;
struct irq_domain {struct vic_device* host_data; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int *,int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (unsigned int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct irq_domain *VAR_3, unsigned int VAR_4,
        irq_hw_number_t VAR_5)
{
 struct vic_device *VAR_6 = VAR_3->host_data;


 if (!(VAR_6->valid_sources & (1 << VAR_5)))
  return -VAR_0;
 FUNC_0(VAR_4, &VAR_2, VAR_1);
 FUNC_1(VAR_4, VAR_6->base);
 FUNC_2(VAR_4);
 return 0;
}
