
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int acpi_status ;
typedef size_t acpi_mutex_handle ;
struct TYPE_2__ {scalar_t__ use_count; int thread_id; int mutex; } ;


 int FUNC_0 (int ,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;

__attribute__((used)) static acpi_status FUNC_3(acpi_mutex_handle VAR_4)
{
 acpi_status VAR_5 = VAR_1;

 FUNC_0(VAR_3, VAR_4);

 if (!VAR_2[VAR_4].mutex) {
  VAR_5 =
      FUNC_1(&VAR_2[VAR_4].mutex);
  VAR_2[VAR_4].thread_id =
      VAR_0;
  VAR_2[VAR_4].use_count = 0;
 }

 FUNC_2(VAR_5);
}
