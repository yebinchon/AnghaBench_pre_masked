
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int of_compatible; } ;
struct TYPE_4__ {int ids; } ;
struct acpi_device {TYPE_1__ data; TYPE_2__ pnp; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_device*,char*,int) ;
 int FUNC_1 (struct acpi_device*,char*,int) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct acpi_device *VAR_1, char *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 if (!VAR_1)
  return -VAR_0;

 if (FUNC_2(&VAR_1->pnp.ids))
  return 0;

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3 - 1);
 if (VAR_4 < 0) {
  return VAR_4;
 } else if (VAR_4 > 0) {
  VAR_2[VAR_4++] = '\n';
  VAR_3 -= VAR_4;
 }
 if (!VAR_1->data.of_compatible)
  return VAR_4;

 VAR_5 = FUNC_0(VAR_1, VAR_2 + VAR_4, VAR_3 - 1);
 if (VAR_5 < 0) {
  return VAR_5;
 } else if (VAR_5 > 0) {
  VAR_4 += VAR_5;
  VAR_2[VAR_4++] = '\n';
 }

 return VAR_4;
}
