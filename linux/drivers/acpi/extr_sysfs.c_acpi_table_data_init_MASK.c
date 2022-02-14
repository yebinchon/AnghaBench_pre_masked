
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct acpi_table_header {int signature; } ;
struct TYPE_5__ {int mode; } ;
struct TYPE_4__ {TYPE_2__ attr; int read; } ;
struct acpi_data_attr {TYPE_1__ attr; } ;
struct TYPE_6__ {int (* fn ) (struct acpi_table_header*,struct acpi_data_attr*) ;int name; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 struct acpi_data_attr* FUNC_1 (int,int ) ;
 int FUNC_2 (struct acpi_table_header*,struct acpi_data_attr*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(struct acpi_table_header *VAR_5)
{
 struct acpi_data_attr *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  if (FUNC_0(VAR_5->signature, VAR_3[VAR_7].name)) {
   VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
   if (!VAR_6)
    return -VAR_0;
   FUNC_3(&VAR_6->attr.attr);
   VAR_6->attr.read = VAR_4;
   VAR_6->attr.attr.mode = 0400;
   return VAR_3[VAR_7].fn(VAR_5, VAR_6);
  }
 }
 return 0;
}
