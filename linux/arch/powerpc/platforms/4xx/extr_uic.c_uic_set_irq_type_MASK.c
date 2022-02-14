
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uic {int lock; scalar_t__ dcrbase; } ;
struct irq_data {int dummy; } ;


 int VAR_0 ;





 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct uic* FUNC_0 (struct irq_data*) ;
 unsigned int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct irq_data*) ;

__attribute__((used)) static int FUNC_7(struct irq_data *VAR_5, unsigned int VAR_6)
{
 struct uic *VAR_7 = FUNC_0(VAR_5);
 unsigned int VAR_8 = FUNC_1(VAR_5);
 unsigned long VAR_9;
 int VAR_10, VAR_11;
 u32 VAR_12, VAR_13, VAR_14;

 switch (VAR_6 & VAR_1) {
 case 128:
  FUNC_6(VAR_5);
  return 0;

 case 131:
  VAR_10 = 1; VAR_11 = 1;
  break;
 case 132:
  VAR_10 = 1; VAR_11 = 0;
  break;
 case 130:
  VAR_10 = 0; VAR_11 = 1;
  break;
 case 129:
  VAR_10 = 0; VAR_11 = 0;
  break;
 default:
  return -VAR_0;
 }

 VAR_14 = ~(1 << (31 - VAR_8));

 FUNC_4(&VAR_7->lock, VAR_9);
 VAR_12 = FUNC_2(VAR_7->dcrbase + VAR_4);
 VAR_13 = FUNC_2(VAR_7->dcrbase + VAR_2);
 VAR_12 = (VAR_12 & VAR_14) | (VAR_10 << (31-VAR_8));
 VAR_13 = (VAR_13 & VAR_14) | (VAR_11 << (31-VAR_8));

 FUNC_3(VAR_7->dcrbase + VAR_2, VAR_13);
 FUNC_3(VAR_7->dcrbase + VAR_4, VAR_12);
 FUNC_3(VAR_7->dcrbase + VAR_3, ~VAR_14);

 FUNC_5(&VAR_7->lock, VAR_9);

 return 0;
}
