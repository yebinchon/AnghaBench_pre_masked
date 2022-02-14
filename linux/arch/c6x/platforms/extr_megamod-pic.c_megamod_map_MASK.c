
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct megamod_pic {scalar_t__* output_to_irq; } ;
struct irq_domain {struct megamod_pic* host_data; } ;
typedef scalar_t__ irq_hw_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,int *,int ) ;
 int FUNC_1 (unsigned int,struct megamod_pic*) ;
 int FUNC_2 (unsigned int,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct irq_domain *VAR_4, unsigned int VAR_5,
         irq_hw_number_t VAR_6)
{
 struct megamod_pic *VAR_7 = VAR_4->host_data;
 int VAR_8;


 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  if (VAR_7->output_to_irq[VAR_8] == VAR_6)
   return -1;

 FUNC_1(VAR_5, VAR_7);
 FUNC_0(VAR_5, &VAR_3, VAR_2);


 FUNC_2(VAR_5, VAR_0);

 return 0;
}
