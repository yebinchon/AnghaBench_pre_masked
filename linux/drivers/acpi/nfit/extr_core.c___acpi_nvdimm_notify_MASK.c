
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nfit_mem {scalar_t__ flags_attr; } ;
struct device {struct device* parent; } ;
struct acpi_nfit_desc {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*,char*,int ,scalar_t__) ;
 void* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct device *VAR_1, u32 VAR_2)
{
 struct nfit_mem *VAR_3;
 struct acpi_nfit_desc *VAR_4;

 FUNC_0(VAR_1->parent, "%s: event: %d\n", FUNC_2(VAR_1),
   VAR_2);

 if (VAR_2 != VAR_0) {
  FUNC_0(VAR_1->parent, "%s: unknown event: %d\n", FUNC_2(VAR_1),
    VAR_2);
  return;
 }

 VAR_4 = FUNC_1(VAR_1->parent);
 if (!VAR_4)
  return;





 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3 && VAR_3->flags_attr)
  FUNC_3(VAR_3->flags_attr);
}
