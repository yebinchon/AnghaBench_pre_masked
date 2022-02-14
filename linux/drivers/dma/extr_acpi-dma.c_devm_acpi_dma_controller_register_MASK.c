
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,struct dma_chan* (*) (struct acpi_dma_spec*,struct acpi_dma*),void*) ;
 int VAR_2 ;
 int FUNC_1 (struct device*,void*) ;
 void* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (void*) ;

int FUNC_4(struct device *VAR_3,
  struct dma_chan *(*VAR_4)
  (struct acpi_dma_spec *, struct acpi_dma *),
  void *VAR_5)
{
 void *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_2, 0, VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5);
 if (VAR_7) {
  FUNC_3(VAR_6);
  return VAR_7;
 }
 FUNC_1(VAR_3, VAR_6);
 return 0;
}
