
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_sbs {int manager_present; int batteries_supported; int hc; struct acpi_device* device; int lock; } ;
struct acpi_device {struct acpi_sbs* driver_data; int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct acpi_sbs*,int) ;
 int FUNC_1 (struct acpi_sbs*) ;
 int FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (struct acpi_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct acpi_sbs*) ;
 int VAR_6 ;
 int FUNC_6 (struct acpi_device*) ;
 int FUNC_7 (int ,int ,struct acpi_sbs*) ;
 struct acpi_sbs* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_11(struct acpi_device *VAR_8)
{
 struct acpi_sbs *VAR_9;
 int VAR_10 = 0;
 int VAR_11;

 VAR_9 = FUNC_8(sizeof(struct acpi_sbs), VAR_4);
 if (!VAR_9) {
  VAR_10 = -VAR_3;
  goto end;
 }

 FUNC_9(&VAR_9->lock);

 VAR_9->hc = FUNC_4(VAR_8->parent);
 VAR_9->device = VAR_8;
 FUNC_10(FUNC_3(VAR_8), VAR_1);
 FUNC_10(FUNC_2(VAR_8), VAR_0);
 VAR_8->driver_data = VAR_9;

 VAR_10 = FUNC_1(VAR_9);
 if (VAR_10 && VAR_10 != -VAR_2)
  goto end;

 VAR_10 = 0;

 if (!VAR_7) {
  VAR_10 = FUNC_5(VAR_9);
  if (!VAR_10) {
   VAR_9->manager_present = 1;
   for (VAR_11 = 0; VAR_11 < VAR_5; ++VAR_11)
    if ((VAR_9->batteries_supported & (1 << VAR_11)))
     FUNC_0(VAR_9, VAR_11);
  }
 }

 if (!VAR_9->manager_present)
  FUNC_0(VAR_9, 0);

 FUNC_7(VAR_9->hc, VAR_6, VAR_9);
      end:
 if (VAR_10)
  FUNC_6(VAR_8);
 return VAR_10;
}
