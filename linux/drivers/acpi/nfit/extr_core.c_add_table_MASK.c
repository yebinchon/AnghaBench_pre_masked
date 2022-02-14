
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfit_table_prev {int dummy; } ;
struct device {int dummy; } ;
struct acpi_nfit_header {int length; int type; } ;
struct acpi_nfit_desc {struct device* dev; } ;
 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct acpi_nfit_desc*,struct nfit_table_prev*,void*) ;
 int FUNC_2 (struct acpi_nfit_desc*,struct nfit_table_prev*,void*) ;
 int FUNC_3 (struct acpi_nfit_desc*,struct nfit_table_prev*,void*) ;
 int FUNC_4 (struct acpi_nfit_desc*,struct nfit_table_prev*,void*) ;
 int FUNC_5 (struct acpi_nfit_desc*,struct nfit_table_prev*,void*) ;
 int FUNC_6 (struct acpi_nfit_desc*,void*) ;
 int FUNC_7 (struct acpi_nfit_desc*,struct nfit_table_prev*,void*) ;
 int FUNC_8 (struct device*,char*) ;
 int FUNC_9 (struct device*,char*,int) ;
 int FUNC_10 (struct device*,char*,int) ;

__attribute__((used)) static void *FUNC_11(struct acpi_nfit_desc *VAR_1,
  struct nfit_table_prev *VAR_2, void *VAR_3, const void *VAR_4)
{
 struct device *VAR_5 = VAR_1->dev;
 struct acpi_nfit_header *VAR_6;
 void *VAR_7 = FUNC_0(-VAR_0);

 if (VAR_3 >= VAR_4)
  return ((void*)0);

 VAR_6 = VAR_3;
 if (!VAR_6->length) {
  FUNC_10(VAR_5, "found a zero length table '%d' parsing nfit\n",
   VAR_6->type);
  return ((void*)0);
 }

 switch (VAR_6->type) {
 case 128:
  if (!FUNC_7(VAR_1, VAR_2, VAR_3))
   return VAR_7;
  break;
 case 130:
  if (!FUNC_5(VAR_1, VAR_2, VAR_3))
   return VAR_7;
  break;
 case 134:
  if (!FUNC_2(VAR_1, VAR_2, VAR_3))
   return VAR_7;
  break;
 case 133:
  if (!FUNC_1(VAR_1, VAR_2, VAR_3))
   return VAR_7;
  break;
 case 131:
  if (!FUNC_4(VAR_1, VAR_2, VAR_3))
   return VAR_7;
  break;
 case 132:
  if (!FUNC_3(VAR_1, VAR_2, VAR_3))
   return VAR_7;
  break;
 case 129:
  FUNC_8(VAR_5, "smbios\n");
  break;
 case 135:
  if (!FUNC_6(VAR_1, VAR_3))
   return VAR_7;
  break;
 default:
  FUNC_9(VAR_5, "unknown table '%d' parsing nfit\n", VAR_6->type);
  break;
 }

 return VAR_3 + VAR_6->length;
}
