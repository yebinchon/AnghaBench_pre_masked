
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int length; } ;
struct acpi_table_bert {int region_length; int address; TYPE_2__ header; } ;
struct acpi_hest_generic_status {int dummy; } ;
struct TYPE_4__ {char* name; } ;
struct TYPE_6__ {int size; TYPE_1__ attr; } ;
struct acpi_data_attr {TYPE_3__ attr; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_data_attr*) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(void *VAR_2, struct acpi_data_attr *VAR_3)
{
 struct acpi_table_bert *VAR_4 = VAR_2;

 if (VAR_4->header.length < sizeof(struct acpi_table_bert) ||
     VAR_4->region_length < sizeof(struct acpi_hest_generic_status)) {
  FUNC_0(VAR_3);
  return -VAR_0;
 }
 VAR_3->addr = VAR_4->address;
 VAR_3->attr.size = VAR_4->region_length;
 VAR_3->attr.attr.name = "BERT";

 return FUNC_1(VAR_1, &VAR_3->attr);
}
