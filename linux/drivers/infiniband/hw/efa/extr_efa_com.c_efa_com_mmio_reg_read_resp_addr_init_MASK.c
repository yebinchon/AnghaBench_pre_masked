
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct efa_com_mmio_read {int read_resp_dma_addr; } ;
struct efa_com_dev {scalar_t__ reg_bar; struct efa_com_mmio_read mmio_read; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct efa_com_dev *VAR_2)
{
 struct efa_com_mmio_read *VAR_3 = &VAR_2->mmio_read;
 u32 VAR_4;
 u32 VAR_5;


 VAR_4 = (VAR_3->read_resp_dma_addr >> 32) & FUNC_0(31, 0);
 VAR_5 = VAR_3->read_resp_dma_addr & FUNC_0(31, 0);

 FUNC_1(VAR_4, VAR_2->reg_bar + VAR_0);
 FUNC_1(VAR_5, VAR_2->reg_bar + VAR_1);
}
