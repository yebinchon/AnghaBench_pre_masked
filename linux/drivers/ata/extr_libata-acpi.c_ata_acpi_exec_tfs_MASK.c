
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_device {int dummy; } ;
struct ata_acpi_gtf {int dummy; } ;


 int FUNC_0 (struct ata_device*) ;
 int FUNC_1 (struct ata_device*,struct ata_acpi_gtf*,struct ata_acpi_gtf*) ;
 int FUNC_2 (struct ata_device*,struct ata_acpi_gtf**) ;

__attribute__((used)) static int FUNC_3(struct ata_device *VAR_0, int *VAR_1)
{
 struct ata_acpi_gtf *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);
 int VAR_4, VAR_5, VAR_6;


 VAR_6 = FUNC_2(VAR_0, &VAR_2);
 if (VAR_6 < 0)
  return VAR_6;
 VAR_4 = VAR_6;


 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++, VAR_2++) {
  VAR_6 = FUNC_1(VAR_0, VAR_2, VAR_3);
  if (VAR_6 < 0)
   break;
  if (VAR_6) {
   (*VAR_1)++;
   VAR_3 = VAR_2;
  }
 }

 FUNC_0(VAR_0);

 if (VAR_6 < 0)
  return VAR_6;
 return 0;
}
