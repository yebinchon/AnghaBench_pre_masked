
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp5_mdss {int dummy; } ;
struct irq_domain {struct mdp5_mdss* host_data; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,int *,int ) ;
 int FUNC_1 (unsigned int,struct mdp5_mdss*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct irq_domain *VAR_4, unsigned int VAR_5,
     irq_hw_number_t VAR_6)
{
 struct mdp5_mdss *VAR_7 = VAR_4->host_data;

 if (!(VAR_1 & (1 << VAR_6)))
  return -VAR_0;

 FUNC_0(VAR_5, &VAR_3, VAR_2);
 FUNC_1(VAR_5, VAR_7);

 return 0;
}
