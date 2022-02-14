
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ioapic_intsrc {int io_masked; int io_lowreg; int io_intpin; int io_edgetrigger; } ;
struct ioapic {int io_addr; } ;
struct intsrc {scalar_t__ is_pic; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct intsrc*,int) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct intsrc *VAR_3, int VAR_4)
{
 struct ioapic_intsrc *VAR_5 = (struct ioapic_intsrc *)VAR_3;
 struct ioapic *VAR_6 = (struct ioapic *)VAR_3->is_pic;
 uint32_t VAR_7;

 FUNC_3(&VAR_2);
 if (!VAR_5->io_masked && !VAR_5->io_edgetrigger) {
  VAR_7 = VAR_5->io_lowreg | VAR_0;
  FUNC_2(VAR_6->io_addr, FUNC_0(VAR_5->io_intpin),
      VAR_7);
  VAR_5->io_masked = 1;
 }

 if (VAR_4 == VAR_1)
  FUNC_1(VAR_3, 1);

 FUNC_4(&VAR_2);
}
