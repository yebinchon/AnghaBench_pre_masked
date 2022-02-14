
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec {int busy_polling; int lock; scalar_t__ polling_guard; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct acpi_ec *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->lock, VAR_1);
 VAR_0->busy_polling = 1;
 VAR_0->polling_guard = 0;
 FUNC_0("interrupt blocked");
 FUNC_2(&VAR_0->lock, VAR_1);
}
