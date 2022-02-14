
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_domain {struct irq_chip* host_data; } ;
struct irq_chip {int dummy; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int,struct irq_chip*,int ,char*) ;
 int FUNC_2 (unsigned int,int ) ;

int FUNC_3(struct irq_domain *VAR_10, unsigned int VAR_11,
  irq_hw_number_t VAR_12)
{
 struct irq_chip *VAR_13 = VAR_10->host_data;
 u32 VAR_14 = 1 << VAR_12;

 if (VAR_14 & VAR_4) {
  FUNC_1(VAR_11, VAR_13,
    VAR_9, "level");
  FUNC_2(VAR_11, VAR_0);
 } else if (VAR_14 & VAR_1) {
  FUNC_1(VAR_11, VAR_13,
    VAR_6, "edge");
  FUNC_0(VAR_11, VAR_0);
 } else if (VAR_14 & VAR_2) {
  FUNC_1(VAR_11, VAR_13,
    VAR_7, "level");
  FUNC_2(VAR_11, VAR_0);
 } else if (VAR_14 & VAR_5) {
  FUNC_1(VAR_11, VAR_13,
    VAR_8, "timer");
  FUNC_0(VAR_11, VAR_0);






 } else {

  FUNC_1(VAR_11, VAR_13,
    VAR_7, "level");
  FUNC_2(VAR_11, VAR_0);
 }
 return 0;
}
