
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_6__ {TYPE_1__* str_obj; } ;
struct acpi_device {TYPE_3__ pnp; } ;
typedef int ssize_t ;
struct TYPE_5__ {int length; scalar_t__ pointer; } ;
struct TYPE_4__ {TYPE_2__ buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct acpi_device* FUNC_0 (struct device*) ;
 int FUNC_1 (int *,int ,int ,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
    struct device_attribute *VAR_3,
    char *VAR_4) {
 struct acpi_device *VAR_5 = FUNC_0(VAR_2);
 int VAR_6;

 if (VAR_5->pnp.str_obj == ((void*)0))
  return 0;





 VAR_6 = FUNC_1(
  (wchar_t *)VAR_5->pnp.str_obj->buffer.pointer,
  VAR_5->pnp.str_obj->buffer.length,
  VAR_1, VAR_4,
  VAR_0);

 VAR_4[VAR_6++] = '\n';

 return VAR_6;
}
