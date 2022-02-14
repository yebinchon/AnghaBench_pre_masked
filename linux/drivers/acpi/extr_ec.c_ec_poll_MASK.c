
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_ec*) ;
 int VAR_1 ;
 int FUNC_1 (struct acpi_ec*) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct acpi_ec*) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct acpi_ec *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5 = 5;

 while (VAR_5--) {
  unsigned long VAR_6 = VAR_2 +
   FUNC_2(VAR_1);
  do {
   if (!FUNC_1(VAR_3))
    return 0;
   FUNC_4(&VAR_3->lock, VAR_4);
   FUNC_0(VAR_3);
   FUNC_5(&VAR_3->lock, VAR_4);
  } while (FUNC_7(VAR_2, VAR_6));
  FUNC_3("controller reset, restart transaction\n");
  FUNC_4(&VAR_3->lock, VAR_4);
  FUNC_6(VAR_3);
  FUNC_5(&VAR_3->lock, VAR_4);
 }
 return -VAR_0;
}
