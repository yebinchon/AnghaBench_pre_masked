
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ioapic_intsrc {int io_vector; int io_lowreg; int io_intpin; scalar_t__ io_edgetrigger; } ;
struct ioapic {scalar_t__ io_addr; scalar_t__ io_haseoi; } ;
struct intsrc {scalar_t__ is_pic; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 () ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct intsrc *VAR_6, int VAR_7)
{
 struct ioapic_intsrc *VAR_8;
 struct ioapic *VAR_9;
 volatile uint32_t *VAR_10;
 uint32_t VAR_11;

 FUNC_2();
 if (!VAR_5)
  return;
 VAR_8 = (struct ioapic_intsrc *)VAR_6;
 if (VAR_8->io_edgetrigger)
  return;
 VAR_9 = (struct ioapic *)VAR_6->is_pic;





 if (VAR_9->io_haseoi) {




  VAR_10 = (volatile uint32_t *)((volatile char *)
      VAR_9->io_addr + VAR_0);
  *VAR_10 = VAR_8->io_vector;
 } else {






  if (!VAR_7)
   FUNC_3(&VAR_4);
  VAR_11 = VAR_8->io_lowreg;
  VAR_11 &= ~VAR_3;
  VAR_11 |= VAR_2 | VAR_1;
  FUNC_1(VAR_9->io_addr, FUNC_0(VAR_8->io_intpin),
      VAR_11);
  FUNC_1(VAR_9->io_addr, FUNC_0(VAR_8->io_intpin),
      VAR_8->io_lowreg);
  if (!VAR_7)
   FUNC_4(&VAR_4);
 }
}
