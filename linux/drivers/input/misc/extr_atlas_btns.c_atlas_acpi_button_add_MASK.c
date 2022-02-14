
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct acpi_device {int handle; } ;
typedef int acpi_status ;
struct TYPE_8__ {int bustype; } ;
struct TYPE_9__ {char* name; char* phys; int keycodesize; int keycodemax; int keybit; int evbit; scalar_t__* keycode; TYPE_1__ id; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,int,int *,int *,struct acpi_device*) ;
 scalar_t__* VAR_10 ;
 TYPE_2__* FUNC_4 () ;
 TYPE_2__* VAR_11 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(struct acpi_device *VAR_12)
{
 acpi_status VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_11 = FUNC_4();
 if (!VAR_11) {
  FUNC_9("unable to allocate input device\n");
  return -VAR_2;
 }

 VAR_11->name = "Atlas ACPI button driver";
 VAR_11->phys = "ASIM0000/atlas/input0";
 VAR_11->id.bustype = VAR_0;
 VAR_11->keycode = VAR_10;
 VAR_11->keycodesize = sizeof(unsigned short);
 VAR_11->keycodemax = FUNC_1(VAR_10);

 FUNC_7(VAR_11, VAR_4, VAR_7);
 FUNC_2(VAR_3, VAR_11->evbit);
 for (VAR_14 = 0; VAR_14 < FUNC_1(VAR_10); VAR_14++) {
  if (VAR_14 < 9) {
   VAR_10[VAR_14] = VAR_5 + VAR_14;
   FUNC_2(VAR_5 + VAR_14, VAR_11->keybit);
  } else
   VAR_10[VAR_14] = VAR_6;
 }

 VAR_15 = FUNC_6(VAR_11);
 if (VAR_15) {
  FUNC_9("couldn't register input device\n");
  FUNC_5(VAR_11);
  return VAR_15;
 }


 VAR_13 = FUNC_3(VAR_12->handle,
    0x81, &VAR_8,
    &VAR_9, VAR_12);
 if (FUNC_0(VAR_13)) {
  FUNC_9("error installing addr spc handler\n");
  FUNC_8(VAR_11);
  VAR_15 = -VAR_1;
 }

 return VAR_15;
}
