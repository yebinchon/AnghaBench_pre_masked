
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct acpi_video_device {TYPE_1__* brightness; } ;
struct TYPE_2__ {int count; int* levels; } ;


 int VAR_0 ;





 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(struct acpi_video_device *VAR_1,
     u32 VAR_2, u32 VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10 = 255;
 VAR_5 = VAR_7 = 0;
 VAR_4 = VAR_6 = 255;

 for (VAR_8 = VAR_0; VAR_8 < VAR_1->brightness->count; VAR_8++) {
  VAR_9 = VAR_1->brightness->levels[VAR_8];
  if (FUNC_0(VAR_9 - VAR_2) < FUNC_0(VAR_10)) {
   VAR_10 = VAR_9 - VAR_2;
   if (!VAR_10)
    break;
  }
 }

 VAR_2 += VAR_10;
 for (VAR_8 = VAR_0; VAR_8 < VAR_1->brightness->count; VAR_8++) {
  VAR_9 = VAR_1->brightness->levels[VAR_8];
  if (VAR_9 < VAR_4)
   VAR_4 = VAR_9;
  if (VAR_9 > VAR_5)
   VAR_5 = VAR_9;
  if (VAR_9 < VAR_6 && VAR_9 > VAR_2)
   VAR_6 = VAR_9;
  if (VAR_9 > VAR_7 && VAR_9 < VAR_2)
   VAR_7 = VAR_9;
 }

 switch (VAR_3) {
 case 132:
  return (VAR_2 < VAR_5) ? VAR_6 : VAR_4;
 case 129:
  return (VAR_2 < VAR_5) ? VAR_6 : VAR_5;
 case 131:
  return (VAR_2 > VAR_4) ? VAR_7 : VAR_4;
 case 128:
 case 130:
  return 0;
 default:
  return VAR_2;
 }
}
