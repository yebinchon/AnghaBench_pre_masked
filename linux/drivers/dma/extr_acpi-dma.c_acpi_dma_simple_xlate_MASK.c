
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_chan {int dummy; } ;
struct acpi_dma_spec {int dummy; } ;
struct acpi_dma_filter_info {int filter_fn; int dma_cap; } ;
struct acpi_dma {struct acpi_dma_filter_info* data; } ;


 struct dma_chan* FUNC_0 (int ,int ,struct acpi_dma_spec*) ;

struct dma_chan *FUNC_1(struct acpi_dma_spec *VAR_0,
  struct acpi_dma *VAR_1)
{
 struct acpi_dma_filter_info *VAR_2 = VAR_1->data;

 if (!VAR_2 || !VAR_2->filter_fn)
  return ((void*)0);

 return FUNC_0(VAR_2->dma_cap, VAR_2->filter_fn, VAR_0);
}
