
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct acpi_gpe_xrupt_info {struct acpi_gpe_xrupt_info* next; int interrupt_number; struct acpi_gpe_block_info* gpe_block_list_head; } ;
struct TYPE_5__ {int address; } ;
struct TYPE_4__ {int address; } ;
struct acpi_gpe_register_info {TYPE_2__ enable_address; TYPE_1__ status_address; int enable_for_wake; int enable_for_run; int base_gpe_number; } ;
struct acpi_gpe_notify_info {struct acpi_gpe_notify_info* next; } ;
struct TYPE_6__ {struct acpi_gpe_notify_info* notify_list; } ;
struct acpi_gpe_event_info {int flags; TYPE_3__ dispatch; int runtime_count; } ;
struct acpi_gpe_block_info {scalar_t__ node; size_t register_count; int gpe_count; struct acpi_gpe_block_info* next; int block_base_number; struct acpi_gpe_event_info* event_info; struct acpi_gpe_register_info* register_info; } ;
struct acpi_buffer {int length; char* pointer; } ;
typedef int buffer ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;





 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct acpi_gpe_xrupt_info* VAR_5 ;
 int FUNC_3 (scalar_t__,int ,struct acpi_buffer*) ;
 int FUNC_4 (char*,...) ;

void FUNC_5(void)
{
 struct acpi_gpe_block_info *VAR_6;
 struct acpi_gpe_xrupt_info *VAR_7;
 struct acpi_gpe_event_info *VAR_8;
 struct acpi_gpe_register_info *VAR_9;
 char *VAR_10;
 struct acpi_gpe_notify_info *VAR_11;
 u32 VAR_12;
 u32 VAR_13 = 0;
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16;
 char VAR_17[80];
 struct acpi_buffer VAR_18;
 acpi_status VAR_19;

 VAR_18.length = sizeof(VAR_17);
 VAR_18.pointer = VAR_17;

 VAR_13 = 0;



 VAR_7 = VAR_5;
 while (VAR_7) {
  VAR_6 = VAR_7->gpe_block_list_head;
  while (VAR_6) {
   VAR_19 = FUNC_3(VAR_6->node,
            VAR_0,
            &VAR_18);
   if (FUNC_0(VAR_19)) {
    FUNC_4
        ("Could not convert name to pathname\n");
   }

   if (VAR_6->node == VAR_4) {
    VAR_10 = "FADT-defined GPE block";
   } else {
    VAR_10 = "GPE Block Device";
   }

   FUNC_4
       ("\nBlock %u - Info %p  DeviceNode %p [%s] - %s\n",
        VAR_13, VAR_6, VAR_6->node, VAR_17,
        VAR_10);

   FUNC_4("    Registers:    %u (%u GPEs)\n",
           VAR_6->register_count,
           VAR_6->gpe_count);

   FUNC_4
       ("    GPE range:    0x%X to 0x%X on interrupt %u\n",
        VAR_6->block_base_number,
        VAR_6->block_base_number +
        (VAR_6->gpe_count - 1),
        VAR_7->interrupt_number);

   FUNC_4
       ("    RegisterInfo: %p  Status %8.8X%8.8X Enable %8.8X%8.8X\n",
        VAR_6->register_info,
        FUNC_1(VAR_6->register_info->
      status_address.address),
        FUNC_1(VAR_6->register_info->
      enable_address.address));

   FUNC_4("  EventInfo:    %p\n",
           VAR_6->event_info);



   for (VAR_14 = 0; VAR_14 < VAR_6->register_count; VAR_14++) {
    VAR_9 =
        &VAR_6->register_info[VAR_14];

    FUNC_4("    Reg %u: (GPE %.2X-%.2X)  "
            "RunEnable %2.2X WakeEnable %2.2X"
            " Status %8.8X%8.8X Enable %8.8X%8.8X\n",
            VAR_14,
            VAR_9->
            base_gpe_number,
            VAR_9->
            base_gpe_number +
            (VAR_3 - 1),
            VAR_9->
            enable_for_run,
            VAR_9->
            enable_for_wake,
            FUNC_1
            (VAR_9->
      status_address.address),
            FUNC_1
            (VAR_9->
      enable_address.address));



    for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
     VAR_12 =
         (VAR_14 * VAR_3) + VAR_15;
     VAR_8 =
         &VAR_6->event_info[VAR_12];

     if (FUNC_2
         (VAR_8->flags) ==
         130) {



      continue;
     }

     FUNC_4
         ("        GPE %.2X: %p  RunRefs %2.2X Flags %2.2X (",
          VAR_6->block_base_number +
          VAR_12, VAR_8,
          VAR_8->runtime_count,
          VAR_8->flags);



     if (VAR_8->
         flags & VAR_2) {
      FUNC_4("Level, ");
     } else {
      FUNC_4("Edge, ");
     }

     if (VAR_8->
         flags & VAR_1) {
      FUNC_4("CanWake, ");
     } else {
      FUNC_4("RunOnly, ");
     }

     switch (FUNC_2
      (VAR_8->flags)) {
     case 130:

      FUNC_4("NotUsed");
      break;

     case 131:

      FUNC_4("Method");
      break;

     case 132:

      FUNC_4("Handler");
      break;

     case 129:

      VAR_16 = 0;
      VAR_11 =
          VAR_8->dispatch.
          notify_list;
      while (VAR_11) {
       VAR_16++;
       VAR_11 = VAR_11->next;
      }

      FUNC_4
          ("Implicit Notify on %u devices",
           VAR_16);
      break;

     case 128:

      FUNC_4("RawHandler");
      break;

     default:

      FUNC_4("UNKNOWN: %X",
              FUNC_2
              (VAR_8->
        flags));
      break;
     }

     FUNC_4(")\n");
    }
   }

   VAR_13++;
   VAR_6 = VAR_6->next;
  }

  VAR_7 = VAR_7->next;
 }
}
