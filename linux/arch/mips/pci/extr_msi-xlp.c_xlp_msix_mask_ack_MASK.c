
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct xlp_msi_data {TYPE_1__* node; int lnkbase; } ;
struct irq_data {int irq; } ;
struct TYPE_2__ {int picbase; } ;


 unsigned int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 () ;
 struct xlp_msi_data* FUNC_3 (struct irq_data*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,unsigned int,unsigned int) ;
 int FUNC_8 (struct irq_data*) ;

__attribute__((used)) static void FUNC_9(struct irq_data *VAR_2)
{
 struct xlp_msi_data *VAR_3;
 int VAR_4, VAR_5;
 uint32_t VAR_6, VAR_7;

 VAR_5 = FUNC_5(VAR_2->irq);
 VAR_4 = FUNC_4(VAR_5);
 FUNC_8(VAR_2);
 VAR_3 = FUNC_3(VAR_2);


 if (FUNC_2()) {
  VAR_6 = FUNC_0(VAR_4);
  VAR_7 = VAR_5 % VAR_1;
 } else {
  VAR_6 = VAR_0;
  VAR_7 = VAR_5;
 }
 FUNC_7(VAR_3->lnkbase, VAR_6, 1u << VAR_7);

 if (!FUNC_2())
  FUNC_6(VAR_3->node->picbase,
    FUNC_1(VAR_5));
}
