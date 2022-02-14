
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t acpi_mutex_handle ;
struct TYPE_2__ {int thread_id; int * mutex; } ;


 int FUNC_0 (int ,size_t) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(acpi_mutex_handle VAR_4)
{

 FUNC_0(VAR_3, VAR_4);

 FUNC_1(VAR_1[VAR_4].mutex);

 VAR_1[VAR_4].mutex = ((void*)0);
 VAR_1[VAR_4].thread_id = VAR_0;

 VAR_2;
}
