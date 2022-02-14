
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct efa_com_dev {int dma_addr_bits; int efa_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct efa_com_dev*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,int) ;

int FUNC_3(struct efa_com_dev *VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_4, VAR_2);
 int VAR_6;

 VAR_6 = (VAR_5 & VAR_0) >>
  VAR_1;

 FUNC_1(VAR_4->efa_dev, "DMA width: %d\n", VAR_6);

 if (VAR_6 < 32 || VAR_6 > 64) {
  FUNC_2(VAR_4->efa_dev, "DMA width illegal value: %d\n", VAR_6);
  return -VAR_3;
 }

 VAR_4->dma_addr_bits = VAR_6;

 return VAR_6;
}
