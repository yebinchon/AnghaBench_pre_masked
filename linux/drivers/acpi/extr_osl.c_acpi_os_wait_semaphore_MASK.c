
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct semaphore {int dummy; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int FUNC_3 (struct semaphore*,long) ;
 long FUNC_4 (scalar_t__) ;

acpi_status FUNC_5(acpi_handle VAR_8, u32 VAR_9, u16 VAR_10)
{
 acpi_status VAR_11 = VAR_3;
 struct semaphore *VAR_12 = (struct semaphore *)VAR_8;
 long VAR_13;
 int VAR_14 = 0;

 if (!VAR_7)
  return VAR_3;

 if (!VAR_12 || (VAR_9 < 1))
  return VAR_2;

 if (VAR_9 > 1)
  return VAR_4;

 FUNC_0((VAR_0, "Waiting for semaphore[%p|%d|%d]\n",
     VAR_8, VAR_9, VAR_10));

 if (VAR_10 == VAR_1)
  VAR_13 = VAR_6;
 else
  VAR_13 = FUNC_4(VAR_10);

 VAR_14 = FUNC_3(VAR_12, VAR_13);
 if (VAR_14)
  VAR_11 = VAR_5;

 if (FUNC_1(VAR_11)) {
  FUNC_0((VAR_0,
      "Failed to acquire semaphore[%p|%d|%d], %s",
      VAR_8, VAR_9, VAR_10,
      FUNC_2(VAR_11)));
 } else {
  FUNC_0((VAR_0,
      "Acquired semaphore[%p|%d|%d]", VAR_8,
      VAR_9, VAR_10));
 }

 return VAR_11;
}
