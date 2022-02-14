
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
typedef scalar_t__ acpi_thread_id ;
typedef int acpi_status ;
typedef size_t acpi_mutex_handle ;
struct TYPE_2__ {scalar_t__ thread_id; int use_count; int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (size_t) ;
 int VAR_9 ;

acpi_status FUNC_8(acpi_mutex_handle VAR_10)
{
 acpi_status VAR_11;
 acpi_thread_id VAR_12;

 FUNC_3(VAR_9);

 if (VAR_10 > VAR_1) {
  return (VAR_6);
 }

 VAR_12 = FUNC_6();
 FUNC_0((VAR_0,
     "Thread %u attempting to acquire Mutex [%s]\n",
     (u32)VAR_12,
     FUNC_7(VAR_10)));

 VAR_11 =
     FUNC_5(VAR_8[VAR_10].mutex,
      VAR_3);
 if (FUNC_4(VAR_11)) {
  FUNC_0((VAR_0,
      "Thread %u acquired Mutex [%s]\n",
      (u32)VAR_12,
      FUNC_7(VAR_10)));

  VAR_8[VAR_10].use_count++;
  VAR_8[VAR_10].thread_id = VAR_12;
 } else {
  FUNC_2((VAR_7, VAR_11,
    "Thread %u could not acquire Mutex [%s] (0x%X)",
    (u32)VAR_12,
    FUNC_7(VAR_10), VAR_10));
 }

 return (VAR_11);
}
