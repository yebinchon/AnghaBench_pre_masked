
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct semaphore {int dummy; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct semaphore*) ;

acpi_status FUNC_2(acpi_handle VAR_5, u32 VAR_6)
{
 struct semaphore *VAR_7 = (struct semaphore *)VAR_5;

 if (!VAR_4)
  return VAR_2;

 if (!VAR_7 || (VAR_6 < 1))
  return VAR_1;

 if (VAR_6 > 1)
  return VAR_3;

 FUNC_0((VAR_0, "Signaling semaphore[%p|%d]\n", VAR_5,
     VAR_6));

 FUNC_1(VAR_7);

 return VAR_2;
}
