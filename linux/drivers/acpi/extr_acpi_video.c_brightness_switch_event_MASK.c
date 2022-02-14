
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_video_device {int switch_brightness_work; int switch_brightness_event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(struct acpi_video_device *VAR_2,
        u32 VAR_3)
{
 if (!VAR_1)
  return;

 VAR_2->switch_brightness_event = VAR_3;
 FUNC_0(&VAR_2->switch_brightness_work, VAR_0 / 10);
}
