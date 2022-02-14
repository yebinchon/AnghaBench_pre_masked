
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct msi_msg {int data; int address_hi; int address_lo; } ;
struct its_node {int (* get_msi_base ) (struct its_device*) ;} ;
struct its_device {struct its_node* its; } ;
struct irq_data {int dummy; } ;


 int FUNC_0 (int ,struct msi_msg*) ;
 struct its_device* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct irq_data*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct its_device*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct irq_data *VAR_0, struct msi_msg *VAR_1)
{
 struct its_device *VAR_2 = FUNC_1(VAR_0);
 struct its_node *VAR_3;
 u64 VAR_4;

 VAR_3 = VAR_2->its;
 VAR_4 = VAR_3->get_msi_base(VAR_2);

 VAR_1->address_lo = FUNC_4(VAR_4);
 VAR_1->address_hi = FUNC_6(VAR_4);
 VAR_1->data = FUNC_3(VAR_0);

 FUNC_0(FUNC_2(VAR_0), VAR_1);
}
