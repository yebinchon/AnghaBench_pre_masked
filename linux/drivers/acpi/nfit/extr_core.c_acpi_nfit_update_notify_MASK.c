
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int pointer; } ;
union acpi_object {scalar_t__ type; TYPE_1__ buffer; } ;
struct device {int driver; } ;
struct acpi_nfit_desc {int dummy; } ;
struct acpi_buffer {union acpi_object* pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int *,struct acpi_buffer*) ;
 int FUNC_2 (struct acpi_nfit_desc*,struct device*) ;
 int FUNC_3 (struct acpi_nfit_desc*,int ,int ) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,char*) ;
 struct acpi_nfit_desc* FUNC_6 (struct device*) ;
 struct acpi_nfit_desc* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (union acpi_object*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_10(struct device *VAR_4, acpi_handle VAR_5)
{
 struct acpi_nfit_desc *VAR_6 = FUNC_6(VAR_4);
 struct acpi_buffer VAR_7 = { VAR_0, ((void*)0) };
 union acpi_object *VAR_8;
 acpi_status VAR_9;
 int VAR_10;

 if (!VAR_4->driver) {

  FUNC_4(VAR_4, "no driver found for dev\n");
  return;
 }

 if (!VAR_6) {
  VAR_6 = FUNC_7(VAR_4, sizeof(*VAR_6), VAR_2);
  if (!VAR_6)
   return;
  FUNC_2(VAR_6, VAR_4);
 } else {




  FUNC_8(VAR_3);
 }


 VAR_9 = FUNC_1(VAR_5, "_FIT", ((void*)0), &VAR_7);
 if (FUNC_0(VAR_9)) {
  FUNC_5(VAR_4, "failed to evaluate _FIT\n");
  return;
 }

 VAR_8 = VAR_7.pointer;
 if (VAR_8->type == VAR_1) {
  VAR_10 = FUNC_3(VAR_6, VAR_8->buffer.pointer,
    VAR_8->buffer.length);
  if (VAR_10)
   FUNC_5(VAR_4, "failed to merge updated NFIT\n");
 } else
  FUNC_5(VAR_4, "Invalid _FIT\n");
 FUNC_9(VAR_7.pointer);
}
