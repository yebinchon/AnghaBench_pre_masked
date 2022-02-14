
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_smb_hc {int lock; void* context; int callback; } ;
typedef int smbus_alarm_callback ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct acpi_smb_hc *VAR_0,
            smbus_alarm_callback VAR_1, void *VAR_2)
{
 FUNC_0(&VAR_0->lock);
 VAR_0->callback = VAR_1;
 VAR_0->context = VAR_2;
 FUNC_1(&VAR_0->lock);
 return 0;
}
