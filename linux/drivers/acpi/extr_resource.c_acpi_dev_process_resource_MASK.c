
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int win ;
struct resource {int dummy; } ;
struct resource_win {struct resource res; } ;
struct res_proc_context {int (* preproc ) (struct acpi_resource*,int ) ;int error; int preproc_data; } ;
struct acpi_resource {int dummy; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct resource_win*,struct res_proc_context*) ;
 scalar_t__ FUNC_2 (struct acpi_resource*,struct resource_win*) ;
 scalar_t__ FUNC_3 (struct acpi_resource*,struct resource_win*) ;
 scalar_t__ FUNC_4 (struct acpi_resource*,int,struct resource*) ;
 scalar_t__ FUNC_5 (struct acpi_resource*,struct resource*) ;
 scalar_t__ FUNC_6 (struct acpi_resource*,struct resource*) ;
 int FUNC_7 (struct resource_win*,int ,int) ;
 int FUNC_8 (struct acpi_resource*,int ) ;

__attribute__((used)) static acpi_status FUNC_9(struct acpi_resource *VAR_2,
          void *VAR_3)
{
 struct res_proc_context *VAR_4 = VAR_3;
 struct resource_win VAR_5;
 struct resource *VAR_6 = &VAR_5.res;
 int VAR_7;

 if (VAR_4->preproc) {
  int VAR_8;

  VAR_8 = VAR_4->preproc(VAR_2, VAR_4->preproc_data);
  if (VAR_8 < 0) {
   VAR_4->error = VAR_8;
   return VAR_0;
  } else if (VAR_8 > 0) {
   return VAR_1;
  }
 }

 FUNC_7(&VAR_5, 0, sizeof(VAR_5));

 if (FUNC_6(VAR_2, VAR_6)
     || FUNC_5(VAR_2, VAR_6)
     || FUNC_2(VAR_2, &VAR_5)
     || FUNC_3(VAR_2, &VAR_5))
  return FUNC_1(&VAR_5, VAR_4);

 for (VAR_7 = 0; FUNC_4(VAR_2, VAR_7, VAR_6); VAR_7++) {
  acpi_status VAR_9;

  VAR_9 = FUNC_1(&VAR_5, VAR_4);
  if (FUNC_0(VAR_9))
   return VAR_9;
 }

 return VAR_1;
}
