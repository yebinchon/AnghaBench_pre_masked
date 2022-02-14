
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ start; } ;
struct odmi_data {TYPE_1__ res; } ;
struct msi_msg {unsigned int data; int address_lo; int address_hi; } ;
struct irq_data {int hwirq; } ;
typedef scalar_t__ phys_addr_t ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 struct odmi_data* VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_7, struct msi_msg *VAR_8)
{
 struct odmi_data *VAR_9;
 phys_addr_t VAR_10;
 unsigned int VAR_11;

 if (FUNC_0(VAR_7->hwirq >= VAR_6 * VAR_3))
  return;

 VAR_9 = &VAR_5[VAR_7->hwirq >> VAR_4];
 VAR_11 = VAR_7->hwirq & VAR_2;

 VAR_10 = VAR_9->res.start + VAR_0;

 VAR_8->address_hi = FUNC_2(VAR_10);
 VAR_8->address_lo = FUNC_1(VAR_10);
 VAR_8->data = VAR_11 << VAR_1;
}
