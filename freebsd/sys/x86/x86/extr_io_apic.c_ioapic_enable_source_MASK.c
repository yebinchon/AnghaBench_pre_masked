
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ioapic_intsrc {int io_lowreg; scalar_t__ io_masked; int io_intpin; } ;
struct ioapic {int io_addr; } ;
struct intsrc {scalar_t__ is_pic; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct intsrc *VAR_2)
{
 struct ioapic_intsrc *VAR_3 = (struct ioapic_intsrc *)VAR_2;
 struct ioapic *VAR_4 = (struct ioapic *)VAR_2->is_pic;
 uint32_t VAR_5;

 FUNC_2(&VAR_1);
 if (VAR_3->io_masked) {
  VAR_5 = VAR_3->io_lowreg & ~VAR_0;
  FUNC_1(VAR_4->io_addr, FUNC_0(VAR_3->io_intpin),
      VAR_5);
  VAR_3->io_masked = 0;
 }
 FUNC_3(&VAR_1);
}
