
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct acpi_resource_fixed_dma {int request_lines; int channels; } ;
struct TYPE_3__ {struct acpi_resource_fixed_dma fixed_dma; } ;
struct acpi_resource {scalar_t__ type; TYPE_1__ data; } ;
struct TYPE_4__ {int slave_id; int chan_id; } ;
struct acpi_dma_parser_data {scalar_t__ index; TYPE_2__ dma_spec; int n; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct acpi_resource *VAR_1, void *VAR_2)
{
 struct acpi_dma_parser_data *VAR_3 = VAR_2;

 if (VAR_1->type == VAR_0) {
  struct acpi_resource_fixed_dma *VAR_4 = &VAR_1->data.fixed_dma;

  if (VAR_3->n++ == VAR_3->index) {
   VAR_3->dma_spec.chan_id = VAR_4->channels;
   VAR_3->dma_spec.slave_id = VAR_4->request_lines;
  }
 }


 return 1;
}
