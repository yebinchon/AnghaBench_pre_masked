
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;
typedef int irq_hw_number_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int) ;
 unsigned int* VAR_4 ;
 int FUNC_1 (char*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct irq_domain *VAR_5, struct device_node *VAR_6,
     const u32 *VAR_7, unsigned int VAR_8,
     irq_hw_number_t *VAR_9,
     unsigned int *VAR_10)
{
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;

 if (VAR_8 != 3)
  return -1;

 VAR_11 = (int)VAR_7[0];
 VAR_12 = (int)VAR_7[1];
 VAR_13 = (int)VAR_7[2] & 0x3;

 VAR_14 = (VAR_11 << VAR_2) &
    VAR_1;
 VAR_14 |= VAR_12 & VAR_3;

 *VAR_9 = VAR_14;
 *VAR_10 = VAR_0;
 if (FUNC_0(VAR_11, VAR_12))
  *VAR_10 = VAR_4[VAR_13];

 FUNC_1("return %x, l1=%d, l2=%d\n", VAR_14, VAR_11,
   VAR_12);
 return 0;
}
