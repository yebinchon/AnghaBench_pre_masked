
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvebu_pic {int irq_chip; } ;
struct irq_domain {struct mvebu_pic* host_data; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int *,int ) ;
 int FUNC_1 (unsigned int,struct mvebu_pic*) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_5(struct irq_domain *VAR_2, unsigned int VAR_3,
        irq_hw_number_t VAR_4)
{
 struct mvebu_pic *VAR_5 = VAR_2->host_data;

 FUNC_2(VAR_3);
 FUNC_1(VAR_3, VAR_5);
 FUNC_0(VAR_3, &VAR_5->irq_chip,
     VAR_1);
 FUNC_4(VAR_3, VAR_0);
 FUNC_3(VAR_3);

 return 0;
}
