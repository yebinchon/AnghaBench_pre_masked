
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_gtdt_header {int length; } ;
struct TYPE_2__ {void* gtdt_end; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static inline void *FUNC_0(void *VAR_1)
{
 struct acpi_gtdt_header *VAR_2 = VAR_1;

 VAR_1 += VAR_2->length;
 if (VAR_1 < VAR_0.gtdt_end)
  return VAR_1;

 return ((void*)0);
}
