
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct irq_chip_generic {struct al_fic* private; } ;
struct al_fic {scalar_t__ state; int name; } ;
typedef enum al_fic_state { ____Placeholder_al_fic_state } al_fic_state ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct al_fic*,struct irq_chip_generic*,int) ;
 struct irq_chip_generic* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_chip_generic*) ;
 int FUNC_3 (struct irq_chip_generic*) ;
 int FUNC_4 (char*,unsigned int,...) ;

__attribute__((used)) static int FUNC_5(struct irq_data *VAR_7, unsigned int VAR_8)
{
 struct irq_chip_generic *VAR_9 = FUNC_1(VAR_7);
 struct al_fic *VAR_10 = VAR_9->private;
 enum al_fic_state VAR_11;
 int VAR_12 = 0;

 FUNC_2(VAR_9);

 if (((VAR_8 & VAR_6) != VAR_5) &&
     ((VAR_8 & VAR_6) != VAR_4)) {
  FUNC_4("fic doesn't support flow type %d\n", VAR_8);
  VAR_12 = -VAR_3;
  goto err;
 }

 VAR_11 = (VAR_8 & VAR_5) ?
  VAR_0 : VAR_1;
 if (VAR_10->state == VAR_2) {
  FUNC_0(VAR_10, VAR_9, VAR_11);
 } else if (VAR_10->state != VAR_11) {
  FUNC_4("fic %s state already configured to %d\n",
    VAR_10->name, VAR_10->state);
  VAR_12 = -VAR_3;
  goto err;
 }

err:
 FUNC_3(VAR_9);

 return VAR_12;
}
