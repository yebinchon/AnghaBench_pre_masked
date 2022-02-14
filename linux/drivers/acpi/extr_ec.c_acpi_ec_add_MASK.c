
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec {scalar_t__ command_addr; scalar_t__ data_addr; int handle; } ;
struct acpi_device {struct acpi_ec* driver_data; int handle; } ;
typedef scalar_t__ acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 int FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (struct acpi_device*) ;
 struct acpi_ec* FUNC_4 () ;
 int FUNC_5 (struct acpi_ec*) ;
 int FUNC_6 (struct acpi_ec*,int,int ) ;
 int FUNC_7 (struct acpi_ec*,int) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,char*,char*) ;
 int FUNC_10 (int ) ;
 struct acpi_ec* VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_11 (int ,int ,struct acpi_ec*,int *) ;
 int FUNC_12 (scalar_t__,int,char*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;

__attribute__((used)) static int FUNC_15(struct acpi_device *VAR_8)
{
 struct acpi_ec *VAR_9 = ((void*)0);
 bool VAR_10 = 1;
 acpi_status VAR_11;
 int VAR_12;

 FUNC_14(FUNC_3(VAR_8), VAR_2);
 FUNC_14(FUNC_1(VAR_8), VAR_1);

 if (!FUNC_13(FUNC_2(VAR_8), VAR_0)) {
  VAR_7 = 1;
  VAR_9 = VAR_6;
  VAR_10 = 0;
 } else {
  VAR_9 = FUNC_4();
  if (!VAR_9)
   return -VAR_5;

  VAR_11 = FUNC_11(VAR_8->handle, 0, VAR_9, ((void*)0));
  if (VAR_11 != VAR_3) {
   VAR_12 = -VAR_4;
   goto err_alloc;
  }

  if (VAR_6 && VAR_9->command_addr == VAR_6->command_addr &&
      VAR_9->data_addr == VAR_6->data_addr) {
   VAR_7 = 0;






   VAR_6->handle = VAR_9->handle;
   FUNC_8(VAR_9->handle, "duplicated.\n");
   FUNC_5(VAR_9);
   VAR_9 = VAR_6;
  }
 }

 VAR_12 = FUNC_7(VAR_9, 1);
 if (VAR_12)
  goto err_query;

 if (VAR_9 == VAR_6)
  FUNC_9(VAR_6->handle,
     "Boot %s EC used to handle transactions and events\n",
     VAR_7 ? "ECDT" : "DSDT");

 VAR_8->driver_data = VAR_9;

 VAR_12 = !!FUNC_12(VAR_9->data_addr, 1, "EC data");
 FUNC_0(!VAR_12, "Could not request EC data io port 0x%lx", VAR_9->data_addr);
 VAR_12 = !!FUNC_12(VAR_9->command_addr, 1, "EC cmd");
 FUNC_0(!VAR_12, "Could not request EC cmd io port 0x%lx", VAR_9->command_addr);

 if (VAR_10) {

  FUNC_10(VAR_9->handle);
 }
 FUNC_8(VAR_9->handle, "enumerated.\n");
 return 0;

err_query:
 if (VAR_9 != VAR_6)
  FUNC_6(VAR_9, 1, 0);
err_alloc:
 if (VAR_9 != VAR_6)
  FUNC_5(VAR_9);
 return VAR_12;
}
