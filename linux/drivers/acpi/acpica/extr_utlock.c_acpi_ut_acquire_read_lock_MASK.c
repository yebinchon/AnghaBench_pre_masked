
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_rw_lock {int num_readers; int reader_mutex; int writer_mutex; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

acpi_status FUNC_3(struct acpi_rw_lock *VAR_1)
{
 acpi_status VAR_2;

 VAR_2 = FUNC_1(VAR_1->reader_mutex, VAR_0);
 if (FUNC_0(VAR_2)) {
  return (VAR_2);
 }



 VAR_1->num_readers++;
 if (VAR_1->num_readers == 1) {
  VAR_2 =
      FUNC_1(VAR_1->writer_mutex,
       VAR_0);
 }

 FUNC_2(VAR_1->reader_mutex);
 return (VAR_2);
}
