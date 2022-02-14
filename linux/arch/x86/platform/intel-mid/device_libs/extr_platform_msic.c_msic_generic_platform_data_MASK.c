
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sfi_device_table_entry {int irq; } ;
typedef enum intel_msic_block { ____Placeholder_intel_msic_block } intel_msic_block ;
struct TYPE_2__ {int * irq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

void *FUNC_1(void *VAR_2, enum intel_msic_block VAR_3)
{
 struct sfi_device_table_entry *VAR_4 = VAR_2;

 FUNC_0(VAR_3 < 0 || VAR_3 >= VAR_0);
 VAR_1.irq[VAR_3] = VAR_4->irq;

 return ((void*)0);
}
