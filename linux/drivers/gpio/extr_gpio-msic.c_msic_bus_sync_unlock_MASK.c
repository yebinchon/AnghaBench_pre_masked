
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct msic_gpio {int trig_type; int buslock; scalar_t__ trig_change_mask; } ;
struct irq_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int ,int ) ;
 struct msic_gpio* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_5)
{
 struct msic_gpio *VAR_6 = FUNC_2(VAR_5);
 int VAR_7;
 int VAR_8;
 u8 VAR_9 = 0;




 if (VAR_6->trig_change_mask) {
  VAR_7 = FUNC_0(VAR_6->trig_change_mask);

  VAR_8 = FUNC_3(VAR_7);
  if (VAR_8 < 0)
   goto out;

  if (VAR_6->trig_type & VAR_1)
   VAR_9 |= VAR_4;
  if (VAR_6->trig_type & VAR_0)
   VAR_9 |= VAR_3;

  FUNC_1(VAR_8, VAR_9, VAR_2);
  VAR_6->trig_change_mask = 0;
 }
out:
 FUNC_4(&VAR_6->buslock);
}
