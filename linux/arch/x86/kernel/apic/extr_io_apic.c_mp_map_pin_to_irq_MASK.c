
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mp_chip_data {int count; } ;
struct irq_domain {int dummy; } ;
struct irq_alloc_info {int dummy; } ;
struct TYPE_2__ {int srcbusirq; int srcbus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct irq_domain*,int,int ,struct irq_alloc_info*) ;
 int FUNC_1 (struct irq_domain*,int,int,int,struct irq_alloc_info*) ;
 int FUNC_2 (struct irq_alloc_info*,struct irq_alloc_info*,int ,int,int) ;
 int VAR_4 ;
 int FUNC_3 (struct irq_domain*,int) ;
 struct mp_chip_data* FUNC_4 (int) ;
 int VAR_5 ;
 int FUNC_5 (int,struct irq_alloc_info*) ;
 struct irq_domain* FUNC_6 (int) ;
 TYPE_1__* VAR_6 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ,int ) ;

__attribute__((used)) static int FUNC_11(u32 VAR_7, int VAR_8, int VAR_9, int VAR_10,
        unsigned int VAR_11, struct irq_alloc_info *VAR_12)
{
 int VAR_13;
 bool VAR_14 = 0;
 struct irq_alloc_info VAR_15;
 struct mp_chip_data *VAR_16;
 struct irq_domain *VAR_17 = FUNC_6(VAR_9);

 if (!VAR_17)
  return -VAR_2;

 if (VAR_8 >= 0 && FUNC_10(VAR_6[VAR_8].srcbus, VAR_5)) {
  VAR_13 = VAR_6[VAR_8].srcbusirq;
  VAR_14 = FUNC_7(VAR_13);
 }

 FUNC_8(&VAR_4);
 if (!(VAR_11 & VAR_3)) {
  if (!VAR_14) {
   VAR_13 = FUNC_3(VAR_17, VAR_10);
   if (VAR_13 == 0)
    VAR_13 = -VAR_1;
  }
 } else {
  FUNC_2(&VAR_15, VAR_12, VAR_7, VAR_9, VAR_10);
  if (VAR_14)
   VAR_13 = FUNC_1(VAR_17, VAR_13,
       VAR_9, VAR_10, &VAR_15);
  else if ((VAR_13 = FUNC_3(VAR_17, VAR_10)) == 0)
   VAR_13 = FUNC_0(VAR_17, VAR_9, VAR_7, &VAR_15);
  else if (!FUNC_5(VAR_13, &VAR_15))
   VAR_13 = -VAR_0;
  if (VAR_13 >= 0) {
   VAR_16 = FUNC_4(VAR_13);
   VAR_16->count++;
  }
 }
 FUNC_9(&VAR_4);

 return VAR_13;
}
