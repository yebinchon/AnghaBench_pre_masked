
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int kobj; } ;
struct TYPE_6__ {scalar_t__ valid; } ;
struct TYPE_7__ {TYPE_1__ flags; } ;
struct acpi_device {TYPE_4__ dev; TYPE_2__ wakeup; int handle; } ;
typedef int acpi_status ;
struct TYPE_8__ {int attr; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (int *,unsigned long long) ;
 int FUNC_4 (int ,char*,int *,unsigned long long*) ;
 int FUNC_5 (int *,unsigned long long,int ,int ,struct acpi_device*) ;
 int FUNC_6 (int *,unsigned long long,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*,char*,unsigned long long) ;
 int FUNC_9 (TYPE_4__*,int) ;
 TYPE_3__ VAR_6 ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int VAR_7 ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int *,int *) ;
 unsigned long long VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_14(struct acpi_device *VAR_10)
{
 unsigned long long VAR_11;
 acpi_status VAR_12;
 int VAR_13;

 if (!VAR_10)
  return -VAR_2;

 FUNC_12(FUNC_2(VAR_10), VAR_5);
 FUNC_12(FUNC_1(VAR_10), VAR_4);


 VAR_12 = FUNC_4(VAR_10->handle, "_GPE", ((void*)0), &VAR_11);
 if (FUNC_0(VAR_12))
  return -VAR_2;

 VAR_8 = VAR_11;
 VAR_12 = FUNC_5(((void*)0), VAR_8,
       VAR_0,
       VAR_9, VAR_10);
 if (FUNC_0(VAR_12))
  return -VAR_3;

 FUNC_8(&VAR_10->dev, "Initialized, GPE = 0x%lx\n", VAR_8);

 VAR_13 = FUNC_13(&VAR_10->dev.kobj, &VAR_6.attr);
 if (VAR_13)
  goto err_sysfs;


 FUNC_11();
 FUNC_10(VAR_1);

 FUNC_3(((void*)0), VAR_8);


 if (VAR_10->wakeup.flags.valid)
  FUNC_9(&VAR_10->dev, 1);

 return 0;

err_sysfs:
 FUNC_6(((void*)0), VAR_8, VAR_9);
 FUNC_7(&VAR_7);
 return VAR_13;
}
