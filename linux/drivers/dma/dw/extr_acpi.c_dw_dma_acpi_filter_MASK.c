
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_dma_slave {int p_master; int m_master; int dst_id; int src_id; int dma_dev; } ;
struct dma_chan {int dummy; } ;
struct acpi_dma_spec {int slave_id; int dev; } ;


 int FUNC_0 (struct dma_chan*,struct dw_dma_slave*) ;

__attribute__((used)) static bool FUNC_1(struct dma_chan *VAR_0, void *VAR_1)
{
 struct acpi_dma_spec *VAR_2 = VAR_1;
 struct dw_dma_slave VAR_3 = {
  .dma_dev = VAR_2->dev,
  .src_id = VAR_2->slave_id,
  .dst_id = VAR_2->slave_id,
  .m_master = 0,
  .p_master = 1,
 };

 return FUNC_0(VAR_0, &VAR_3);
}
