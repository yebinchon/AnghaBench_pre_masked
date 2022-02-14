
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct acpi_evaluate_info {int dummy; } ;
struct acpi_device_walk_info {scalar_t__ device_count; scalar_t__ num_STA; scalar_t__ num_INI; TYPE_1__* evaluate_info; } ;
typedef int acpi_status ;
typedef int acpi_handle ;
struct TYPE_5__ {void* flags; int * parameters; void* relative_pathname; int prefix_node; } ;


 TYPE_1__* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int FUNC_8 () ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_9 (int *,char*,int *) ;
 int FUNC_10 (TYPE_1__*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_11 (int ,int ,int ,int ,int ,int *,struct acpi_device_walk_info*,int *) ;
 int FUNC_12 (TYPE_1__*,int ,int) ;
 int VAR_20 ;
 int FUNC_13 (int ) ;

acpi_status FUNC_14(u32 VAR_21)
{
 acpi_status VAR_22 = VAR_11;
 struct acpi_device_walk_info VAR_23;
 acpi_handle VAR_24;

 FUNC_6(VAR_20);

 if (!(VAR_21 & VAR_4)) {
  FUNC_1((VAR_0,
      "[Init] Initializing ACPI Devices\n"));



  VAR_23.device_count = 0;
  VAR_23.num_STA = 0;
  VAR_23.num_INI = 0;

  FUNC_2((VAR_1,
          "Initializing Device/Processor/Thermal objects "
          "and executing _INI/_STA methods:\n"));



  VAR_22 = FUNC_11(VAR_7, VAR_6,
      VAR_8, VAR_12,
      VAR_18, ((void*)0),
      &VAR_23, ((void*)0));
  if (FUNC_4(VAR_22)) {
   goto error_exit;
  }



  VAR_23.evaluate_info =
      FUNC_0(sizeof(struct acpi_evaluate_info));
  if (!VAR_23.evaluate_info) {
   VAR_22 = VAR_10;
   goto error_exit;
  }






  VAR_23.evaluate_info->prefix_node = VAR_16;
  VAR_23.evaluate_info->relative_pathname = VAR_13;
  VAR_23.evaluate_info->parameters = ((void*)0);
  VAR_23.evaluate_info->flags = VAR_2;

  VAR_22 = FUNC_10(VAR_23.evaluate_info);
  if (FUNC_7(VAR_22)) {
   VAR_23.num_INI++;
  }






  VAR_22 = FUNC_9(((void*)0), "\\_SB", &VAR_24);
  if (FUNC_7(VAR_22)) {
   FUNC_12(VAR_23.evaluate_info, 0,
          sizeof(struct acpi_evaluate_info));
   VAR_23.evaluate_info->prefix_node = VAR_24;
   VAR_23.evaluate_info->relative_pathname =
       VAR_13;
   VAR_23.evaluate_info->parameters = ((void*)0);
   VAR_23.evaluate_info->flags = VAR_2;

   VAR_22 = FUNC_10(VAR_23.evaluate_info);
   if (FUNC_7(VAR_22)) {
    VAR_23.num_INI++;
   }
  }
 }
 if (!(VAR_21 & VAR_3)) {
  FUNC_1((VAR_0,
      "[Init] Executing _REG OpRegion methods\n"));

  VAR_22 = FUNC_8();
  if (FUNC_4(VAR_22)) {
   goto error_exit;
  }
 }

 if (!(VAR_21 & VAR_4)) {



  VAR_22 = FUNC_11(VAR_7, VAR_6,
      VAR_8, VAR_12,
      VAR_19, ((void*)0),
      &VAR_23, ((void*)0));






  if (VAR_15 >= VAR_5) {
   VAR_17 = VAR_14;
  }

  FUNC_5(VAR_23.evaluate_info);
  if (FUNC_4(VAR_22)) {
   goto error_exit;
  }

  FUNC_2((VAR_1,
          "    Executed %u _INI methods requiring %u _STA executions "
          "(examined %u objects)\n",
          VAR_23.num_INI, VAR_23.num_STA,
          VAR_23.device_count));
 }

 FUNC_13(VAR_22);

error_exit:
 FUNC_3((VAR_9, VAR_22, "During device initialization"));
 FUNC_13(VAR_22);
}
