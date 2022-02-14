
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct device_node* FUNC_0 (struct irq_domain*) ;
 int FUNC_1 (char*,struct device_node*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct irq_domain *VAR_5,
    struct device_node *VAR_6,
    const u32 *VAR_7,
    unsigned int VAR_8,
    unsigned long *VAR_9,
    unsigned int *VAR_10)
{
 unsigned int VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;

 if (FUNC_0(VAR_5) != VAR_6)
  return -VAR_0;

 if (VAR_8 < 2)
  return -VAR_0;

 VAR_12 = VAR_7[0];
 if (VAR_12 >= 16)
  return -VAR_0;

 VAR_13 = VAR_7[1];

 switch (VAR_13) {
 case 1:
  VAR_11 = VAR_2;
  break;
 case 2:
  VAR_11 = VAR_1;
  break;
 case 4:
  VAR_11 = VAR_3;
  break;
 case 8:
  VAR_11 = VAR_4;
  break;
 default:
  FUNC_1("Error: (%pOFn) Invalid irq trigger specification: %x\n",
         VAR_6,
         VAR_13);
  VAR_11 = VAR_4;
  break;
 }
 *VAR_10 = VAR_11;
 *VAR_9 = VAR_12;

 return 0;
}
