
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct acpi_video_device {TYPE_2__* brightness; } ;
struct TYPE_3__ {scalar_t__ _BCL_reversed; scalar_t__ _BQC_use_index; } ;
struct TYPE_4__ {int count; unsigned long long* levels; TYPE_1__ flags; } ;


 unsigned long long VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static unsigned long long
FUNC_0(struct acpi_video_device *VAR_2,
         unsigned long long VAR_3)
{
 unsigned long long VAR_4;

 if (VAR_2->brightness->flags._BQC_use_index) {





  if (VAR_2->brightness->flags._BCL_reversed)
   VAR_3 = VAR_2->brightness->count -
    VAR_0 - 1 - VAR_3;

  VAR_4 = VAR_2->brightness->levels[VAR_3 +
                                     VAR_0];
 } else {
  VAR_4 = VAR_3;
 }

 VAR_4 += VAR_1;

 return VAR_4;
}
