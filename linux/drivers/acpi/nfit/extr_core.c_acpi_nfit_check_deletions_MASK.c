
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfit_table_prev {int flushes; int idts; int bdws; int dcrs; int memdevs; int spas; } ;
struct device {int dummy; } ;
struct acpi_nfit_desc {struct device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct acpi_nfit_desc *VAR_1,
  struct nfit_table_prev *VAR_2)
{
 struct device *VAR_3 = VAR_1->dev;

 if (!FUNC_1(&VAR_2->spas) ||
   !FUNC_1(&VAR_2->memdevs) ||
   !FUNC_1(&VAR_2->dcrs) ||
   !FUNC_1(&VAR_2->bdws) ||
   !FUNC_1(&VAR_2->idts) ||
   !FUNC_1(&VAR_2->flushes)) {
  FUNC_0(VAR_3, "new nfit deletes entries (unsupported)\n");
  return -VAR_0;
 }
 return 0;
}
