
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ioapic_intsrc {int io_intsrc; } ;
struct ioapic {int io_id; int io_intbase; int io_numintr; struct ioapic_intsrc* io_pins; int io_pic; int * io_addr; } ;
typedef int ioapic_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct ioapic*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int volatile*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int,int,int,int,int) ;

void
FUNC_7(void *VAR_5)
{
 struct ioapic_intsrc *VAR_6;
 struct ioapic *VAR_7;
 volatile ioapic_t *VAR_8;
 uint32_t VAR_9;
 int VAR_10;

 VAR_7 = (struct ioapic *)VAR_5;
 VAR_8 = VAR_7->io_addr;
 FUNC_4(&VAR_2);
 VAR_9 = FUNC_2(VAR_8, VAR_0) & VAR_1;
 FUNC_0(&VAR_4, VAR_7, VAR_3);
 FUNC_5(&VAR_2);
 FUNC_6("ioapic%u <Version %u.%u> irqs %u-%u\n",
     VAR_7->io_id, VAR_9 >> 4, VAR_9 & 0xf, VAR_7->io_intbase,
     VAR_7->io_intbase + VAR_7->io_numintr - 1);





 FUNC_1(&VAR_7->io_pic);
 for (VAR_10 = 0, VAR_6 = VAR_7->io_pins; VAR_10 < VAR_7->io_numintr; VAR_10++, VAR_6++)
  FUNC_3(&VAR_6->io_intsrc);
}
