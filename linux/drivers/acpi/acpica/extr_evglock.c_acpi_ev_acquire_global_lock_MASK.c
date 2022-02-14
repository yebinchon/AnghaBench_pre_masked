
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef int u16 ;
typedef int acpi_status ;
typedef int acpi_cpu_flags ;
struct TYPE_3__ {int os_mutex; } ;
struct TYPE_4__ {TYPE_1__ mutex; } ;


 int FUNC_0 (int ,void*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int VAR_13 ;
 int FUNC_9 (int ) ;

acpi_status FUNC_10(u16 VAR_14)
{
 acpi_cpu_flags VAR_15;
 acpi_status VAR_16;
 u8 VAR_17 = VAR_3;

 FUNC_3(VAR_13);





 VAR_16 =
     FUNC_5(VAR_8->mutex.
          os_mutex, VAR_14);
 if (FUNC_2(VAR_16)) {
  FUNC_9(VAR_16);
 }
 VAR_7++;
 if (VAR_7 == 0) {
  VAR_7 = 1;
 }





 if (!VAR_11) {
  VAR_6 = VAR_4;
  FUNC_9(VAR_2);
 }

 VAR_15 = FUNC_7(VAR_10);

 do {



  FUNC_0(VAR_5, VAR_17);
  if (VAR_17) {
   VAR_6 = VAR_4;
   FUNC_1((VAR_0,
       "Acquired hardware Global Lock\n"));
   break;
  }






  VAR_9 = VAR_4;
  FUNC_8(VAR_10, VAR_15);

  FUNC_1((VAR_0,
      "Waiting for hardware Global Lock\n"));





  VAR_16 =
      FUNC_6
      (VAR_12, VAR_1);

  VAR_15 = FUNC_7(VAR_10);

 } while (FUNC_4(VAR_16));

 VAR_9 = VAR_3;
 FUNC_8(VAR_10, VAR_15);

 FUNC_9(VAR_16);
}
