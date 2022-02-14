
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned long long proc_id; int pblk_length; scalar_t__ pblk_address; } ;
union acpi_object {TYPE_3__ processor; int member_0; } ;
struct TYPE_6__ {int duty_width; int duty_offset; scalar_t__ address; } ;
struct TYPE_5__ {int bm_control; } ;
struct acpi_processor {unsigned long long acpi_id; int id; int handle; scalar_t__ pblk; TYPE_2__ throttling; int phys_id; TYPE_1__ flags; } ;
struct acpi_device {int dev; } ;
struct acpi_buffer {int member_0; union acpi_object* member_1; } ;
typedef int acpi_status ;
struct TYPE_8__ {int duty_width; int duty_offset; scalar_t__ pm2_control_length; scalar_t__ pm2_control_block; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_3 (struct acpi_device*) ;
 int FUNC_4 (struct acpi_device*) ;
 struct acpi_processor* FUNC_5 (struct acpi_device*) ;
 scalar_t__ FUNC_6 (unsigned long long) ;
 int FUNC_7 (int ,char*,int *,unsigned long long*) ;
 int FUNC_8 (int ,int *,int *,struct acpi_buffer*) ;
 TYPE_4__ VAR_5 ;
 int FUNC_9 (int ,int,int) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 () ;
 int FUNC_14 (struct acpi_processor*) ;
 int FUNC_15 (int,unsigned long long) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int *,char*,int) ;
 int FUNC_18 (int *,char*) ;
 scalar_t__ FUNC_19 (int) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 () ;
 int FUNC_22 (int ,char*,int) ;
 int FUNC_23 (int ,int ) ;

__attribute__((used)) static int FUNC_24(struct acpi_device *VAR_6)
{
 union acpi_object VAR_7 = { 0 };
 struct acpi_buffer VAR_8 = { sizeof(union acpi_object), &VAR_7 };
 struct acpi_processor *VAR_9 = FUNC_5(VAR_6);
 int VAR_10 = 0;
 acpi_status VAR_11 = VAR_2;
 static int VAR_12;
 unsigned long long VAR_13;

 FUNC_13();





 if (VAR_5.pm2_control_block && VAR_5.pm2_control_length) {
  VAR_9->flags.bm_control = 1;
  FUNC_0((VAR_0,
      "Bus mastering arbitration control present\n"));
 } else
  FUNC_0((VAR_0,
      "No bus mastering arbitration control\n"));

 if (!FUNC_23(FUNC_4(VAR_6), VAR_1)) {

  VAR_11 = FUNC_8(VAR_9->handle, ((void*)0), ((void*)0), &VAR_8);
  if (FUNC_1(VAR_11)) {
   FUNC_17(&VAR_6->dev,
    "Failed to evaluate processor object (0x%x)\n",
    VAR_11);
   return -VAR_3;
  }

  VAR_9->acpi_id = VAR_7.processor.proc_id;
 } else {




  VAR_11 = FUNC_7(VAR_9->handle, VAR_4,
      ((void*)0), &VAR_13);
  if (FUNC_1(VAR_11)) {
   FUNC_17(&VAR_6->dev,
    "Failed to evaluate processor _UID (0x%x)\n",
    VAR_11);
   return -VAR_3;
  }
  VAR_10 = 1;
  VAR_9->acpi_id = VAR_13;
 }

 if (FUNC_6(VAR_9->acpi_id)) {
  if (VAR_9->acpi_id == 0xff)
   FUNC_18(&VAR_6->dev,
    "Entry not well-defined, consider updating BIOS\n");
  else
   FUNC_17(&VAR_6->dev,
    "Failed to get unique processor _UID (0x%x)\n",
    VAR_9->acpi_id);
  return -VAR_3;
 }

 VAR_9->phys_id = FUNC_9(VAR_9->handle, VAR_10,
     VAR_9->acpi_id);
 if (FUNC_20(VAR_9->phys_id))
  FUNC_10(VAR_9->handle, "failed to get CPU physical ID.\n");

 VAR_9->id = FUNC_12(VAR_9->phys_id, VAR_9->acpi_id);
 if (!VAR_12 && !FUNC_11()) {
  VAR_12 = 1;




  if (FUNC_19(VAR_9->id) && (FUNC_21() == 1))
   VAR_9->id = 0;
 }
 if (FUNC_19(VAR_9->id) || !FUNC_16(VAR_9->id)) {
  int VAR_14 = FUNC_14(VAR_9);
  if (VAR_14)
   return VAR_14;
 }
 FUNC_22(FUNC_3(VAR_6), "CPU%X", VAR_9->id);
 FUNC_0((VAR_0, "Processor [%d:%d]\n", VAR_9->id,
     VAR_9->acpi_id));

 if (!VAR_7.processor.pblk_address)
  FUNC_0((VAR_0, "No PBLK (NULL address)\n"));
 else if (VAR_7.processor.pblk_length != 6)
  FUNC_17(&VAR_6->dev, "Invalid PBLK length [%d]\n",
       VAR_7.processor.pblk_length);
 else {
  VAR_9->throttling.address = VAR_7.processor.pblk_address;
  VAR_9->throttling.duty_offset = VAR_5.duty_offset;
  VAR_9->throttling.duty_width = VAR_5.duty_width;

  VAR_9->pblk = VAR_7.processor.pblk_address;
 }






 VAR_11 = FUNC_7(VAR_9->handle, "_SUN", ((void*)0), &VAR_13);
 if (FUNC_2(VAR_11))
  FUNC_15(VAR_9->id, VAR_13);

 return 0;
}
