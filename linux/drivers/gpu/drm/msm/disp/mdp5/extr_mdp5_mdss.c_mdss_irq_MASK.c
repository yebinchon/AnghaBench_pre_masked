
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int domain; } ;
struct mdp5_mdss {TYPE_1__ irqcontroller; } ;
typedef int irqreturn_t ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct mdp5_mdss*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct mdp5_mdss *VAR_4 = VAR_3;
 u32 VAR_5;

 VAR_5 = FUNC_4(VAR_4, VAR_1);

 FUNC_0("intr=%08x", VAR_5);

 while (VAR_5) {
  irq_hw_number_t VAR_6 = FUNC_1(VAR_5) - 1;

  FUNC_2(FUNC_3(
    VAR_4->irqcontroller.domain, VAR_6));
  VAR_5 &= ~(1 << VAR_6);
 }

 return VAR_0;
}
