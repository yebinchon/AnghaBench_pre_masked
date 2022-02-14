
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union i2c_smbus_data {int byte; int word; int* block; } ;
struct TYPE_7__ {int length; int pointer; } ;
struct TYPE_6__ {int value; } ;
struct TYPE_5__ {union acpi_object* elements; } ;
union acpi_object {scalar_t__ type; TYPE_3__ buffer; TYPE_2__ integer; TYPE_1__ package; } ;
typedef unsigned char u8 ;
typedef unsigned char u16 ;
struct i2c_adapter {int dev; struct acpi_smbus_cmi* algo_data; } ;
struct acpi_smbus_cmi {int handle; TYPE_4__* methods; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
struct acpi_buffer {union acpi_object* pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;
struct TYPE_8__ {char* mt_sbr; char* mt_sbw; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;




 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

 int VAR_18 ;



 char VAR_19 ;

 char VAR_20 ;
 int FUNC_1 (int ,char*,struct acpi_object_list*,struct acpi_buffer*) ;
 int FUNC_2 (int ,char*,char*,int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int *,char*,int,...) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (union acpi_object*) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_8(struct i2c_adapter *VAR_21, u16 VAR_22, unsigned short VAR_23,
     char VAR_24, u8 VAR_25, int VAR_26,
     union i2c_smbus_data *VAR_27)
{
 int VAR_28 = 0;
 struct acpi_smbus_cmi *VAR_29 = VAR_21->algo_data;
 unsigned char VAR_30;
 acpi_status VAR_31 = 0;
 struct acpi_object_list VAR_32;
 union acpi_object VAR_33[5];
 struct acpi_buffer VAR_34 = { VAR_0, ((void*)0) };
 union acpi_object *VAR_35;
 union acpi_object *VAR_36;
 char *VAR_37;
 int VAR_38 = 0;

 FUNC_4(&VAR_21->dev, "access size: %d %s\n", VAR_26,
  (VAR_24) ? "READ" : "WRITE");
 switch (VAR_26) {
 case 129:
  VAR_30 = VAR_4;
  VAR_25 = 0;
  if (VAR_24 == VAR_20) {
   VAR_33[3].type = VAR_9;
   VAR_33[3].integer.value = 0;
   VAR_33[4].type = VAR_9;
   VAR_33[4].integer.value = 0;
  }
  break;

 case 131:
  VAR_30 = VAR_2;
  if (VAR_24 == VAR_20) {
   VAR_33[3].type = VAR_9;
   VAR_33[3].integer.value = 0;
   VAR_33[4].type = VAR_9;
   VAR_33[4].integer.value = 0;
  } else {
   VAR_25 = 0;
  }
  break;

 case 130:
  VAR_30 = VAR_3;
  if (VAR_24 == VAR_20) {
   VAR_33[3].type = VAR_9;
   VAR_33[3].integer.value = 1;
   VAR_33[4].type = VAR_9;
   VAR_33[4].integer.value = VAR_27->byte;
  }
  break;

 case 128:
  VAR_30 = VAR_6;
  if (VAR_24 == VAR_20) {
   VAR_33[3].type = VAR_9;
   VAR_33[3].integer.value = 2;
   VAR_33[4].type = VAR_9;
   VAR_33[4].integer.value = VAR_27->word;
  }
  break;

 case 132:
  VAR_30 = VAR_1;
  if (VAR_24 == VAR_20) {
   VAR_38 = VAR_27->block[0];
   if (VAR_38 == 0 || VAR_38 > VAR_18)
    return -VAR_12;
   VAR_33[3].type = VAR_9;
   VAR_33[3].integer.value = VAR_38;
   VAR_33[4].type = VAR_8;
   VAR_33[4].buffer.length = VAR_38;
   VAR_33[4].buffer.pointer = *(VAR_27->block + 1);
  }
  break;

 default:
  FUNC_5(&VAR_21->dev, "Unsupported transaction %d\n", VAR_26);
  return -VAR_15;
 }

 if (VAR_24 == VAR_19) {
  VAR_30 |= VAR_5;
  VAR_37 = VAR_29->methods->mt_sbr;
  VAR_32.count = 3;
 } else {
  VAR_30 |= VAR_7;
  VAR_37 = VAR_29->methods->mt_sbw;
  VAR_32.count = 5;
 }

 VAR_32.pointer = VAR_33;
 VAR_33[0].type = VAR_9;
 VAR_33[0].integer.value = VAR_30;
 VAR_33[1].type = VAR_9;
 VAR_33[1].integer.value = VAR_22;
 VAR_33[2].type = VAR_9;
 VAR_33[2].integer.value = VAR_25;

 VAR_31 = FUNC_1(VAR_29->handle, VAR_37, &VAR_32,
          &VAR_34);
 if (FUNC_0(VAR_31)) {
  FUNC_3(VAR_29->handle,
    "Failed to evaluate %s: %i\n", VAR_37, VAR_31);
  return -VAR_13;
 }

 VAR_36 = VAR_34.pointer;
 if (VAR_36 && VAR_36->type == VAR_10)
  VAR_35 = VAR_36->package.elements;
 else {
  FUNC_3(VAR_29->handle, "Invalid argument type\n");
  VAR_28 = -VAR_13;
  goto out;
 }
 if (VAR_35 == ((void*)0) || VAR_35->type != VAR_9) {
  FUNC_3(VAR_29->handle, "Invalid argument type\n");
  VAR_28 = -VAR_13;
  goto out;
 }

 VAR_28 = VAR_35->integer.value;
 FUNC_2(VAR_29->handle, "%s return status: %i\n", VAR_37,
     VAR_28);

 switch (VAR_28) {
 case 134:
  VAR_28 = 0;
  break;
 case 136:
  VAR_28 = -VAR_11;
  goto out;
 case 133:
  VAR_28 = -VAR_17;
  goto out;
 case 135:
  VAR_28 = -VAR_14;
  goto out;
 default:
  VAR_28 = -VAR_13;
  goto out;
 }

 if (VAR_24 == VAR_20 || VAR_26 == 129)
  goto out;

 VAR_35 = VAR_36->package.elements + 1;
 if (VAR_35->type != VAR_9) {
  FUNC_3(VAR_29->handle, "Invalid argument type\n");
  VAR_28 = -VAR_13;
  goto out;
 }

 VAR_38 = VAR_35->integer.value;
 VAR_35 = VAR_36->package.elements + 2;
 switch (VAR_26) {
 case 131:
 case 130:
 case 128:
  if (VAR_35->type != VAR_9) {
   FUNC_3(VAR_29->handle,
     "Invalid argument type\n");
   VAR_28 = -VAR_13;
   goto out;
  }
  if (VAR_38 == 2)
   VAR_27->word = VAR_35->integer.value;
  else
   VAR_27->byte = VAR_35->integer.value;
  break;
 case 132:
  if (VAR_35->type != VAR_8) {
   FUNC_3(VAR_29->handle,
     "Invalid argument type\n");
   VAR_28 = -VAR_13;
   goto out;
  }
  if (VAR_38 == 0 || VAR_38 > VAR_18)
   return -VAR_16;
  VAR_27->block[0] = VAR_38;
  FUNC_7(*(VAR_27->block + 1), VAR_35->buffer.pointer, VAR_38);
  break;
 }

out:
 FUNC_6(VAR_34.pointer);
 FUNC_4(&VAR_21->dev, "Transaction status: %i\n", VAR_28);
 return VAR_28;
}
