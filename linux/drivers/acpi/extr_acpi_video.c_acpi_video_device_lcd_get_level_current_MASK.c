
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ _BCQ; scalar_t__ _BQC; } ;
struct acpi_video_device {TYPE_3__* brightness; TYPE_2__ cap; TYPE_1__* dev; } ;
typedef int acpi_status ;
struct TYPE_6__ {int count; unsigned long long* levels; unsigned long long curr; } ;
struct TYPE_4__ {int handle; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int *,unsigned long long*) ;
 unsigned long long FUNC_3 (struct acpi_video_device*,unsigned long long) ;

__attribute__((used)) static int
FUNC_4(struct acpi_video_device *VAR_3,
     unsigned long long *VAR_4, bool VAR_5)
{
 acpi_status VAR_6 = VAR_2;
 int VAR_7;

 if (VAR_3->cap._BQC || VAR_3->cap._BCQ) {
  char *VAR_8 = VAR_3->cap._BQC ? "_BQC" : "_BCQ";

  VAR_6 = FUNC_2(VAR_3->dev->handle, VAR_8,
      ((void*)0), VAR_4);
  if (FUNC_0(VAR_6)) {
   if (VAR_5) {





    return 0;
   }

   *VAR_4 = FUNC_3(VAR_3, *VAR_4);

   for (VAR_7 = VAR_0;
        VAR_7 < VAR_3->brightness->count; VAR_7++)
    if (VAR_3->brightness->levels[VAR_7] == *VAR_4) {
     VAR_3->brightness->curr = *VAR_4;
     return 0;
    }




   FUNC_1((VAR_1,
          "%s returned an invalid level",
          VAR_8));
   VAR_3->cap._BQC = VAR_3->cap._BCQ = 0;
  } else {
   FUNC_1((VAR_1, "Evaluating %s failed", VAR_8));
   VAR_3->cap._BQC = VAR_3->cap._BCQ = 0;
  }
 }

 *VAR_4 = VAR_3->brightness->curr;
 return 0;
}
