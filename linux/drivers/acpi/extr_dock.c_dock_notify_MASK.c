
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dock_station {int flags; int handle; } ;
struct acpi_device {int handle; } ;
typedef int acpi_handle ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct dock_station*) ;
 int FUNC_5 (struct dock_station*) ;
 int FUNC_6 (struct dock_station*) ;
 int FUNC_7 (struct dock_station*) ;
 int FUNC_8 (struct dock_station*,int,int ) ;
 int FUNC_9 (struct dock_station*) ;
 int FUNC_10 (struct dock_station*) ;
 struct dock_station* FUNC_11 (int ) ;
 int FUNC_12 (struct dock_station*,int) ;
 int FUNC_13 (struct dock_station*,int) ;
 int VAR_5 ;

int FUNC_14(struct acpi_device *VAR_6, u32 VAR_7)
{
 acpi_handle VAR_8 = VAR_6->handle;
 struct dock_station *VAR_9 = FUNC_11(VAR_8);
 int VAR_10 = 0;

 if (!VAR_9)
  return -VAR_3;






 if ((VAR_9->flags & VAR_2) && VAR_7 == 129)
  VAR_7 = 128;
 switch (VAR_7) {
 case 130:
 case 129:
  if (!FUNC_9(VAR_9) && !FUNC_0(VAR_6)) {
   FUNC_4(VAR_9);
   FUNC_7(VAR_9);
   if (!FUNC_10(VAR_9)) {
    FUNC_2(VAR_8, "Unable to dock!\n");
    FUNC_6(VAR_9);
    break;
   }
   FUNC_13(VAR_9, VAR_7);
   FUNC_6(VAR_9);
   FUNC_8(VAR_9, VAR_7, VAR_0);
   FUNC_1(VAR_9->handle, 1);
   FUNC_3();
   break;
  }
  if (FUNC_10(VAR_9) || FUNC_9(VAR_9))
   break;

  VAR_10 = 1;
  VAR_7 = 128;


 case 128:
  FUNC_5(VAR_9);
  if ((VAR_5 && !(VAR_9->flags & VAR_1))
     || VAR_10)
   FUNC_12(VAR_9, VAR_7);
  else
   FUNC_8(VAR_9, VAR_7, VAR_4);
  break;
 }
 return 0;
}
