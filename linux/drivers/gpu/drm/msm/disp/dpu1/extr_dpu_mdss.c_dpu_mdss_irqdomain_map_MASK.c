
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {struct dpu_mdss* host_data; } ;
struct dpu_mdss {int dummy; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int,int *,int ) ;
 int FUNC_1 (unsigned int,struct dpu_mdss*) ;
 int FUNC_2 (unsigned int,int *,int *) ;

__attribute__((used)) static int FUNC_3(struct irq_domain *VAR_4,
  unsigned int VAR_5, irq_hw_number_t VAR_6)
{
 struct dpu_mdss *VAR_7 = VAR_4->host_data;

 FUNC_2(VAR_5, &VAR_1, &VAR_2);
 FUNC_0(VAR_5, &VAR_0, VAR_3);
 return FUNC_1(VAR_5, VAR_7);
}
