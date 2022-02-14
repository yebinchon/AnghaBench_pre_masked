
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_get_devices_info {char const* hid; scalar_t__ user_function; void* context; } ;
typedef scalar_t__ acpi_walk_callback ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int (*) (char const*,scalar_t__,void*,void**)) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int ,int ,int ,int *,struct acpi_get_devices_info*,void**) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

acpi_status
FUNC_6(const char *VAR_7,
   acpi_walk_callback VAR_8,
   void *VAR_9, void **VAR_10)
{
 acpi_status VAR_11;
 struct acpi_get_devices_info VAR_12;

 FUNC_1(FUNC_6);



 if (!VAR_8) {
  FUNC_5(VAR_5);
 }





 VAR_12.hid = VAR_7;
 VAR_12.context = VAR_9;
 VAR_12.user_function = VAR_8;







 VAR_11 = FUNC_3(VAR_0);
 if (FUNC_0(VAR_11)) {
  FUNC_5(VAR_11);
 }

 VAR_11 = FUNC_2(VAR_3, VAR_2,
     VAR_4, VAR_1,
     VAR_6, ((void*)0),
     &VAR_12, VAR_10);

 (void)FUNC_4(VAR_0);
 FUNC_5(VAR_11);
}
