
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct acpi_ec {scalar_t__ command_addr; scalar_t__ data_addr; unsigned long long gpe; unsigned long long global_lock; int handle; } ;
typedef int acpi_status ;
typedef int acpi_handle ;
struct TYPE_2__ {unsigned long long gpe; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int *,unsigned long long*) ;
 int FUNC_2 (int ,int ,int ,struct acpi_ec*) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static acpi_status
FUNC_3(acpi_handle VAR_7, u32 VAR_8, void *VAR_9, void **VAR_10)
{
 acpi_status VAR_11;
 unsigned long long VAR_12 = 0;
 struct acpi_ec *VAR_13 = VAR_9;


 VAR_13->command_addr = VAR_13->data_addr = 0;

 VAR_11 = FUNC_2(VAR_7, VAR_3,
         VAR_6, VAR_13);
 if (FUNC_0(VAR_11))
  return VAR_11;
 if (VAR_13->data_addr == 0 || VAR_13->command_addr == 0)
  return VAR_1;

 if (VAR_4 && VAR_5 && VAR_2) {




  VAR_13->gpe = VAR_4->gpe;
 } else {


  VAR_11 = FUNC_1(VAR_7, "_GPE", ((void*)0), &VAR_12);
  if (FUNC_0(VAR_11))
   return VAR_11;
  VAR_13->gpe = VAR_12;
 }

 VAR_12 = 0;
 FUNC_1(VAR_7, "_GLK", ((void*)0), &VAR_12);
 VAR_13->global_lock = VAR_12;
 VAR_13->handle = VAR_7;
 return VAR_0;
}
