
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ acpi_status ;
struct TYPE_4__ {int address; } ;
struct TYPE_5__ {TYPE_1__ sleep_status; TYPE_1__ sleep_control; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 TYPE_3__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_4 (int,int,int ) ;
 scalar_t__ FUNC_5 (scalar_t__*,TYPE_1__*) ;
 scalar_t__ FUNC_6 (scalar_t__,TYPE_1__*) ;
 int VAR_12 ;
 int FUNC_7 (scalar_t__) ;

acpi_status FUNC_8(u8 VAR_13)
{
 acpi_status VAR_14;
 u8 VAR_15;
 u64 VAR_16;

 FUNC_3(VAR_12);



 if (!VAR_9.sleep_control.address ||
     !VAR_9.sleep_status.address) {
  FUNC_7(VAR_6);
 }



 VAR_14 = FUNC_6((u64)VAR_4,
       &VAR_9.sleep_status);
 if (FUNC_1(VAR_14)) {
  FUNC_7(VAR_14);
 }

 VAR_11 = VAR_8;







 FUNC_0((VAR_0,
     "Entering sleep state [S%u]\n", VAR_13));

 VAR_15 = ((VAR_10 << VAR_3) &
    VAR_2) | VAR_1;



 FUNC_2();

 VAR_14 = FUNC_4(VAR_13, VAR_15, 0);
 if (VAR_14 == VAR_5) {
  FUNC_7(VAR_7);
 }
 if (FUNC_1(VAR_14)) {
  FUNC_7(VAR_14);
 }

 VAR_14 = FUNC_6((u64)VAR_15, &VAR_9.sleep_control);
 if (FUNC_1(VAR_14)) {
  FUNC_7(VAR_14);
 }



 do {
  VAR_14 = FUNC_5(&VAR_16, &VAR_9.sleep_status);
  if (FUNC_1(VAR_14)) {
   FUNC_7(VAR_14);
  }

 } while (!(((u8)VAR_16) & VAR_4));

 FUNC_7(VAR_7);
}
