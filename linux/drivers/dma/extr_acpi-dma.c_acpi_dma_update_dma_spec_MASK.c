
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_dma_spec {scalar_t__ slave_id; int dev; } ;
struct acpi_dma {scalar_t__ base_request_line; scalar_t__ end_request_line; int dev; } ;



__attribute__((used)) static int FUNC_0(struct acpi_dma *VAR_0,
  struct acpi_dma_spec *VAR_1)
{

 VAR_1->dev = VAR_0->dev;


 if (VAR_0->base_request_line == 0 && VAR_0->end_request_line == 0)
  return 0;


 if (VAR_1->slave_id < VAR_0->base_request_line ||
     VAR_1->slave_id > VAR_0->end_request_line)
  return -1;





 VAR_1->slave_id -= VAR_0->base_request_line;

 return 1;
}
