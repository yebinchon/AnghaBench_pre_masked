
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efa_irq {int data; int vector; } ;
struct efa_dev {struct efa_irq admin_irq; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct efa_dev *VAR_0)
{
 struct efa_irq *VAR_1;

 VAR_1 = &VAR_0->admin_irq;
 FUNC_1(VAR_1->vector, ((void*)0));
 FUNC_0(VAR_1->vector, VAR_1->data);
}
