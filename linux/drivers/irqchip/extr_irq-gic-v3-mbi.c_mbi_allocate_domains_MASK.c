
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int fwnode; struct irq_domain* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct irq_domain* FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (struct irq_domain*) ;
 int FUNC_2 (struct irq_domain*,int ) ;
 int FUNC_3 (struct irq_domain*,struct irq_domain**) ;
 int VAR_2 ;
 int VAR_3 ;
 struct irq_domain* FUNC_4 (int ,int *,struct irq_domain*) ;

__attribute__((used)) static int FUNC_5(struct irq_domain *VAR_4)
{
 struct irq_domain *VAR_5, *VAR_6, *VAR_7;
 int VAR_8;

 VAR_5 = FUNC_0(VAR_4->fwnode,
           &VAR_2, ((void*)0));
 if (!VAR_5)
  return -VAR_1;

 FUNC_2(VAR_5, VAR_0);
 VAR_5->parent = VAR_4;

 VAR_8 = FUNC_3(VAR_5, &VAR_6);

 VAR_7 = FUNC_4(VAR_4->fwnode,
           &VAR_3,
           VAR_5);

 if (VAR_8 || !VAR_7) {
  if (VAR_7)
   FUNC_1(VAR_7);
  if (VAR_6)
   FUNC_1(VAR_6);
  FUNC_1(VAR_5);
  return -VAR_1;
 }

 return 0;
}
