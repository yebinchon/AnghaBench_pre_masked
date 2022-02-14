
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kobj_uevent_env {int buflen; int * buf; } ;
struct TYPE_4__ {int of_compatible; } ;
struct TYPE_3__ {int ids; } ;
struct acpi_device {TYPE_2__ data; TYPE_1__ pnp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kobj_uevent_env*,char*) ;
 int FUNC_1 (struct acpi_device*,int *,int) ;
 int FUNC_2 (struct acpi_device*,int *,int) ;
 scalar_t__ FUNC_3 (int *) ;

int FUNC_4(struct acpi_device *VAR_2,
      struct kobj_uevent_env *VAR_3)
{
 int VAR_4;

 if (!VAR_2)
  return -VAR_0;

 if (FUNC_3(&VAR_2->pnp.ids))
  return 0;

 if (FUNC_0(VAR_3, "MODALIAS="))
  return -VAR_1;

 VAR_4 = FUNC_2(VAR_2, &VAR_3->buf[VAR_3->buflen - 1],
      sizeof(VAR_3->buf) - VAR_3->buflen);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3->buflen += VAR_4;
 if (!VAR_2->data.of_compatible)
  return 0;

 if (VAR_4 > 0 && FUNC_0(VAR_3, "MODALIAS="))
  return -VAR_1;

 VAR_4 = FUNC_1(VAR_2, &VAR_3->buf[VAR_3->buflen - 1],
     sizeof(VAR_3->buf) - VAR_3->buflen);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3->buflen += VAR_4;

 return 0;
}
