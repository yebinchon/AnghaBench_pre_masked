
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_slave_config {int direction; void* src_addr_width; void* src_addr; void* dst_addr_width; void* dst_addr; } ;
struct dma_chan {int dummy; } ;
struct device {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef void* dma_addr_t ;
typedef int cfg ;


 int VAR_0 ;
 void* VAR_1 ;
 struct dma_chan* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (struct dma_chan*) ;
 int FUNC_3 (struct device*,char*,char*,...) ;
 int FUNC_4 (struct dma_chan*) ;
 struct dma_chan* FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct dma_chan*,struct dma_slave_config*) ;
 int FUNC_7 (struct dma_slave_config*,int ,int) ;

__attribute__((used)) static struct dma_chan *FUNC_8(struct device *VAR_2,
    enum dma_transfer_direction VAR_3, dma_addr_t VAR_4)
{
 struct dma_chan *VAR_5;
 struct dma_slave_config VAR_6;
 char *VAR_7 = VAR_3 == VAR_0 ? "tx" : "rx";
 int VAR_8;

 VAR_5 = FUNC_5(VAR_2, VAR_7);
 if (FUNC_1(VAR_5)) {
  FUNC_3(VAR_2, "request_channel failed for %s (%ld)\n", VAR_7,
   FUNC_2(VAR_5));
  return VAR_5;
 }

 FUNC_7(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.direction = VAR_3;
 if (VAR_3 == VAR_0) {
  VAR_6.dst_addr = VAR_4;
  VAR_6.dst_addr_width = VAR_1;
 } else {
  VAR_6.src_addr = VAR_4;
  VAR_6.src_addr_width = VAR_1;
 }

 VAR_8 = FUNC_6(VAR_5, &VAR_6);
 if (VAR_8) {
  FUNC_3(VAR_2, "slave_config failed for %s (%d)\n", VAR_7, VAR_8);
  FUNC_4(VAR_5);
  return FUNC_0(VAR_8);
 }

 FUNC_3(VAR_2, "got DMA channel for %s\n", VAR_7);
 return VAR_5;
}
