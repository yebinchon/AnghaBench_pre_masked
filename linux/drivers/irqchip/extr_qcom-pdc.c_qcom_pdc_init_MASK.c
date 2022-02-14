
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct irq_domain* FUNC_1 (struct irq_domain*,int ,int ,int ,int *,int *) ;
 struct irq_domain* FUNC_2 (struct device_node*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (struct device_node*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct device_node*) ;
 int FUNC_7 (char*,struct device_node*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(struct device_node *VAR_6, struct device_node *VAR_7)
{
 struct irq_domain *VAR_8, *VAR_9;
 int VAR_10;

 VAR_3 = FUNC_5(VAR_6, 0);
 if (!VAR_3) {
  FUNC_7("%pOF: unable to map PDC registers\n", VAR_6);
  return -VAR_1;
 }

 VAR_8 = FUNC_2(VAR_7);
 if (!VAR_8) {
  FUNC_7("%pOF: unable to find PDC's parent domain\n", VAR_6);
  VAR_10 = -VAR_1;
  goto fail;
 }

 VAR_10 = FUNC_6(VAR_6);
 if (VAR_10) {
  FUNC_7("%pOF: failed to init PDC pin-hwirq mapping\n", VAR_6);
  goto fail;
 }

 VAR_9 = FUNC_1(VAR_8, 0, VAR_2,
       FUNC_4(VAR_6),
       &VAR_5, ((void*)0));
 if (!VAR_9) {
  FUNC_7("%pOF: GIC domain add failed\n", VAR_6);
  VAR_10 = -VAR_0;
  goto fail;
 }

 return 0;

fail:
 FUNC_3(VAR_4);
 FUNC_0(VAR_3);
 return VAR_10;
}
