
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_tx_desc {scalar_t__ dma_addr; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ib_device*,scalar_t__,int ,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(struct iser_tx_desc *VAR_2, struct ib_device *VAR_3)
{
 if (VAR_2->dma_addr != 0) {
  FUNC_1("unmap single for tx_desc->dma_addr\n");
  FUNC_0(VAR_3, VAR_2->dma_addr,
        VAR_1, VAR_0);
  VAR_2->dma_addr = 0;
 }
}
