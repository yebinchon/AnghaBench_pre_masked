
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_irq_ciu_domain_data {unsigned int num_sum; } ;
struct irq_domain {struct octeon_irq_ciu_domain_data* host_data; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 scalar_t__ FUNC_0 (unsigned int,unsigned int) ;
 scalar_t__** VAR_7 ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int,int ,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct irq_domain *VAR_8,
         unsigned int VAR_9, irq_hw_number_t VAR_10)
{
 int VAR_11;
 unsigned int VAR_12 = VAR_10 >> 6;
 unsigned int VAR_13 = VAR_10 & 63;
 struct octeon_irq_ciu_domain_data *VAR_14 = VAR_8->host_data;

 if (VAR_12 >= VAR_14->num_sum || VAR_7[VAR_12][VAR_13] != 0)
  return -VAR_0;

 if (VAR_12 == 2) {
  if (FUNC_0(VAR_12, VAR_13))
   VAR_11 = FUNC_1(VAR_9, VAR_12, VAR_13, 0,
    &VAR_4,
    VAR_1);
  else
   VAR_11 = FUNC_1(VAR_9, VAR_12, VAR_13, 0,
    &VAR_3,
    VAR_2);
 } else {
  if (FUNC_0(VAR_12, VAR_13))
   VAR_11 = FUNC_1(VAR_9, VAR_12, VAR_13, 0,
    VAR_6,
    VAR_1);
  else
   VAR_11 = FUNC_1(VAR_9, VAR_12, VAR_13, 0,
    VAR_5,
    VAR_2);
 }
 return VAR_11;
}
