
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pic {int dummy; } ;
struct ioapic {int io_numintr; int * io_pins; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct pic *VAR_1, bool VAR_2)
{
 struct ioapic *VAR_3 = (struct ioapic *)VAR_1;
 int VAR_4;

 FUNC_1(&VAR_0);
 for (VAR_4 = 0; VAR_4 < VAR_3->io_numintr; VAR_4++)
  FUNC_0(&VAR_3->io_pins[VAR_4]);
 FUNC_2(&VAR_0);
}
