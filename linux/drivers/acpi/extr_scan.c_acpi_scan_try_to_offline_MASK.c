
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct acpi_device {int handle; } ;
typedef scalar_t__ acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,void*,void**) ;
 int FUNC_1 (int ,int ,int *,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int ,...) ;
 int FUNC_3 (struct device*,char*) ;

__attribute__((used)) static int FUNC_4(struct acpi_device *VAR_5)
{
 acpi_handle VAR_6 = VAR_5->handle;
 struct device *VAR_7 = ((void*)0);
 acpi_status VAR_8;
 VAR_8 = FUNC_2(VAR_0, VAR_6, VAR_1,
         ((void*)0), FUNC_0, (void *)0,
         (void **)&VAR_7);
 if (VAR_8 == VAR_2) {
  FUNC_3(VAR_7, "Offline disabled.\n");
  FUNC_2(VAR_0, VAR_6, VAR_1,
        FUNC_1, ((void*)0), ((void*)0), ((void*)0));
  return -VAR_4;
 }
 FUNC_0(VAR_6, 0, (void *)0, (void **)&VAR_7);
 if (VAR_7) {
  VAR_7 = ((void*)0);
  FUNC_2(VAR_0, VAR_6, VAR_1,
        ((void*)0), FUNC_0, (void *)1,
        (void **)&VAR_7);
  if (!VAR_7)
   FUNC_0(VAR_6, 0, (void *)1,
      (void **)&VAR_7);

  if (VAR_7) {
   FUNC_3(VAR_7, "Offline failed.\n");
   FUNC_1(VAR_6, 0, ((void*)0), ((void*)0));
   FUNC_2(VAR_0, VAR_6,
         VAR_1, FUNC_1,
         ((void*)0), ((void*)0), ((void*)0));
   return -VAR_3;
  }
 }
 return 0;
}
