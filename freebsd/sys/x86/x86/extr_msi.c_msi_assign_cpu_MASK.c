
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_2__ {scalar_t__ is_handlers; } ;
struct msi_intsrc {scalar_t__ msi_msix; int msi_vector; scalar_t__ msi_cpu; int msi_count; int* msi_irqs; int msi_irq; TYPE_1__ msi_intsrc; int msi_dev; int msi_maxcount; struct msi_intsrc* msi_first; } ;
struct intsrc {int dummy; } ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__,int*,int,int ) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (scalar_t__,int,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static int
FUNC_10(struct intsrc *VAR_4, u_int VAR_5)
{
 struct msi_intsrc *VAR_6, *VAR_7 = (struct msi_intsrc *)VAR_4;
 int VAR_8;
 u_int VAR_9;
 int VAR_10, VAR_11;





 if (VAR_7->msi_first != VAR_7)
  return (VAR_0);







 VAR_8 = VAR_7->msi_vector;
 VAR_9 = VAR_7->msi_cpu;
 if (VAR_9 == VAR_5)
  return (0);


 if (VAR_7->msi_count > 1) {
  FUNC_1(VAR_7->msi_msix == 0, ("MSI-X message group"));
  VAR_11 = FUNC_3(VAR_5, VAR_7->msi_irqs,
      VAR_7->msi_count, VAR_7->msi_maxcount);
 } else
  VAR_11 = FUNC_2(VAR_5, VAR_7->msi_irq);
 if (VAR_11 == 0)
  return (VAR_1);

 VAR_7->msi_cpu = VAR_5;
 VAR_7->msi_vector = VAR_11;
 if (VAR_7->msi_intsrc.is_handlers > 0)
  FUNC_5(VAR_7->msi_cpu, VAR_7->msi_vector);
 if (VAR_2)
  FUNC_9("msi: Assigning %s IRQ %d to local APIC %u vector %u\n",
      VAR_7->msi_msix ? "MSI-X" : "MSI", VAR_7->msi_irq,
      VAR_7->msi_cpu, VAR_7->msi_vector);
 for (VAR_10 = 1; VAR_10 < VAR_7->msi_count; VAR_10++) {
  VAR_6 = (struct msi_intsrc *)FUNC_8(VAR_7->msi_irqs[VAR_10]);
  VAR_6->msi_cpu = VAR_5;
  VAR_6->msi_vector = VAR_11 + VAR_10;
  if (VAR_6->msi_intsrc.is_handlers > 0)
   FUNC_5(VAR_6->msi_cpu, VAR_6->msi_vector);
  if (VAR_2)
   FUNC_9(
      "msi: Assigning MSI IRQ %d to local APIC %u vector %u\n",
       VAR_6->msi_irq, VAR_6->msi_cpu, VAR_6->msi_vector);
 }
 FUNC_0(FUNC_7(VAR_7->msi_dev), VAR_7->msi_dev,
     VAR_7->msi_irq);





 if (VAR_7->msi_intsrc.is_handlers > 0)
  FUNC_4(VAR_9, VAR_8);
 FUNC_6(VAR_9, VAR_8, VAR_7->msi_irq);
 for (VAR_10 = 1; VAR_10 < VAR_7->msi_count; VAR_10++) {
  VAR_6 = (struct msi_intsrc *)FUNC_8(VAR_7->msi_irqs[VAR_10]);
  if (VAR_6->msi_intsrc.is_handlers > 0)
   FUNC_4(VAR_9, VAR_8 + VAR_10);
  FUNC_6(VAR_9, VAR_8 + VAR_10, VAR_7->msi_irqs[VAR_10]);
 }
 return (0);
}
