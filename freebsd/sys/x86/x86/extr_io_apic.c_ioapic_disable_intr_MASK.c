
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct ioapic_intsrc {scalar_t__ io_vector; int io_masked; int io_irq; int io_cpu; } ;
struct intsrc {int dummy; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct ioapic_intsrc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct intsrc *VAR_1)
{
 struct ioapic_intsrc *VAR_2 = (struct ioapic_intsrc *)VAR_1;
 u_int VAR_3;

 if (VAR_2->io_vector != 0) {

  VAR_3 = VAR_2->io_vector;
  FUNC_0(VAR_2->io_cpu, VAR_3);
  FUNC_3(&VAR_0);
  VAR_2->io_masked = 1;
  VAR_2->io_vector = 0;
  FUNC_2(VAR_2);
  FUNC_4(&VAR_0);
  FUNC_1(VAR_2->io_cpu, VAR_3, VAR_2->io_irq);
 }
}
