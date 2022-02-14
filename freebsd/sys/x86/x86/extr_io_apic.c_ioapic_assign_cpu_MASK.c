
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct ioapic_intsrc {scalar_t__ io_vector; scalar_t__ io_irq; scalar_t__ io_cpu; int io_intpin; int io_lowreg; int io_edgetrigger; int io_masked; } ;
struct ioapic {int io_id; int io_addr; } ;
struct intsrc {scalar_t__ is_handlers; scalar_t__ is_pic; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct ioapic_intsrc*) ;
 int FUNC_7 (struct ioapic_intsrc*) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,int,int) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int
FUNC_12(struct intsrc *VAR_8, u_int VAR_9)
{
 struct ioapic_intsrc *VAR_10 = (struct ioapic_intsrc *)VAR_8;
 struct ioapic *VAR_11 = (struct ioapic *)VAR_8->is_pic;
 u_int VAR_12, VAR_13;
 u_int VAR_14;






 if (VAR_7 == VAR_4) {
  if (VAR_10->io_vector)
   return (VAR_0);
  else
   VAR_9 = 0;
 }




 if (VAR_10->io_irq == VAR_3)
  VAR_9 = 0;




 VAR_12 = VAR_10->io_vector;
 VAR_14 = VAR_10->io_cpu;
 if (VAR_12 && VAR_9 == VAR_14)
  return (0);





 VAR_13 = FUNC_2(VAR_9, VAR_10->io_irq);
 if (VAR_13 == 0)
  return (VAR_1);







 FUNC_9(&VAR_6);
 if (!VAR_10->io_masked && !VAR_10->io_edgetrigger) {
  FUNC_8(VAR_11->io_addr, FUNC_1(VAR_10->io_intpin),
      VAR_10->io_lowreg | VAR_2);
  FUNC_10(&VAR_6);
  FUNC_0(100);
  FUNC_9(&VAR_6);
 }

 VAR_10->io_cpu = VAR_9;
 VAR_10->io_vector = VAR_13;
 if (VAR_8->is_handlers > 0)
  FUNC_4(VAR_10->io_cpu, VAR_10->io_vector);
 if (VAR_5) {
  FUNC_11("ioapic%u: routing intpin %u (", VAR_11->io_id,
      VAR_10->io_intpin);
  FUNC_6(VAR_10);
  FUNC_11(") to lapic %u vector %u\n", VAR_10->io_cpu,
      VAR_10->io_vector);
 }
 FUNC_7(VAR_10);
 FUNC_10(&VAR_6);





 if (VAR_12) {
  if (VAR_8->is_handlers > 0)
   FUNC_3(VAR_14, VAR_12);
  FUNC_5(VAR_14, VAR_12, VAR_10->io_irq);
 }
 return (0);
}
