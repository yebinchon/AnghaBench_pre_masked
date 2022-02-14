
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int bit_width; int address; } ;
struct acpi_pcct_hw_reduced_type2 {TYPE_2__ platform_ack_register; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct acpi_pcct_hw_reduced {TYPE_1__ header; int platform_interrupt; scalar_t__ flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int * VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(int VAR_5,
      struct acpi_pcct_hw_reduced *VAR_6)
{
 VAR_4[VAR_5] = FUNC_1(VAR_6->platform_interrupt,
       (u32)VAR_6->flags);
 if (VAR_4[VAR_5] <= 0) {
  FUNC_2("PCC GSI %d not registered\n",
         VAR_6->platform_interrupt);
  return -VAR_1;
 }

 if (VAR_6->header.type
  == VAR_0) {
  struct acpi_pcct_hw_reduced_type2 *VAR_7 = (void *)VAR_6;

  VAR_3[VAR_5] = FUNC_0(
    VAR_7->platform_ack_register.address,
    VAR_7->platform_ack_register.bit_width / 8);
  if (!VAR_3[VAR_5]) {
   FUNC_2("Failed to ioremap PCC ACK register\n");
   return -VAR_2;
  }
 }

 return 0;
}
