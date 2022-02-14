
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvebu_sei {int dummy; } ;
struct irq_fwspec {int * param; } ;
struct irq_domain {struct mvebu_sei* host_data; } ;


 int FUNC_0 (struct irq_domain*,unsigned int,int ,int *,struct mvebu_sei*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct irq_domain *VAR_1, unsigned int VAR_2,
      unsigned int VAR_3, void *VAR_4)
{
 struct mvebu_sei *VAR_5 = VAR_1->host_data;
 struct irq_fwspec *VAR_6 = VAR_4;


 FUNC_0(VAR_1, VAR_2, VAR_6->param[0],
          &VAR_0, VAR_5);

 return 0;
}
