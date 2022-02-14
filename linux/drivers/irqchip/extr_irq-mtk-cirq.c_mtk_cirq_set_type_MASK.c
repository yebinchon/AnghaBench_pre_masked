
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {TYPE_1__* chip; struct irq_data* parent_data; } ;
struct TYPE_2__ {int (* irq_set_type ) (struct irq_data*,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 unsigned int VAR_4 ;
 int FUNC_0 (struct irq_data*,int ) ;
 int FUNC_1 (struct irq_data*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct irq_data *VAR_5, unsigned int VAR_6)
{
 int VAR_7;

 switch (VAR_6 & VAR_4) {
 case 131:
  FUNC_0(VAR_5, VAR_0);
  FUNC_0(VAR_5, VAR_2);
  break;
 case 130:
  FUNC_0(VAR_5, VAR_1);
  FUNC_0(VAR_5, VAR_2);
  break;
 case 128:
  FUNC_0(VAR_5, VAR_0);
  FUNC_0(VAR_5, VAR_3);
  break;
 case 129:
  FUNC_0(VAR_5, VAR_1);
  FUNC_0(VAR_5, VAR_3);
  break;
 default:
  break;
 }

 VAR_5 = VAR_5->parent_data;
 VAR_7 = VAR_5->chip->irq_set_type(VAR_5, VAR_6);
 return VAR_7;
}
