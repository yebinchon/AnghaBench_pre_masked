
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec {int lock; int polling_guard; int busy_polling; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct acpi_ec *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_2->lock, VAR_3);
 VAR_2->busy_polling = VAR_0;
 VAR_2->polling_guard = VAR_1;
 FUNC_0("interrupt unblocked");
 FUNC_2(&VAR_2->lock, VAR_3);
}
