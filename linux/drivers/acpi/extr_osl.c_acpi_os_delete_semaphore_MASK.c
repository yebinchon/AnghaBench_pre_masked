
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct semaphore {int wait_list; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct semaphore*) ;
 int FUNC_3 (int *) ;

acpi_status FUNC_4(acpi_handle VAR_3)
{
 struct semaphore *VAR_4 = (struct semaphore *)VAR_3;

 if (!VAR_4)
  return VAR_1;

 FUNC_0((VAR_0, "Deleting semaphore[%p].\n", VAR_3));

 FUNC_1(!FUNC_3(&VAR_4->wait_list));
 FUNC_2(VAR_4);
 VAR_4 = ((void*)0);

 return VAR_2;
}
