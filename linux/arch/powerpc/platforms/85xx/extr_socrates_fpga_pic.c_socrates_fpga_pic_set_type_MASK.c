
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct irq_data {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 TYPE_1__* VAR_4 ;
 unsigned int FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct irq_data *VAR_6,
  unsigned int VAR_7)
{
 unsigned long VAR_8;
 unsigned int VAR_9 = FUNC_0(VAR_6);
 int VAR_10;
 u32 VAR_11;

 if (VAR_4[VAR_9].type != VAR_2)
  return -VAR_0;

 switch (VAR_7 & VAR_3) {
 case 129:
  VAR_10 = 1;
  break;
 case 128:
  VAR_10 = 0;
  break;
 default:
  return -VAR_0;
 }
 FUNC_1(&VAR_5, VAR_8);
 VAR_11 = FUNC_3(VAR_1);
 if (VAR_10)
  VAR_11 |= (1 << VAR_9);
 else
  VAR_11 &= ~(1 << VAR_9);
 FUNC_4(VAR_1, VAR_11);
 FUNC_2(&VAR_5, VAR_8);
 return 0;
}
