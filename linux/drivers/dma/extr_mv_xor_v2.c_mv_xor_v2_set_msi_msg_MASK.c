
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_xor_v2_device {scalar_t__ dma_base; } ;
struct msi_msg {int address_lo; int address_hi; int data; } ;
struct msi_desc {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct mv_xor_v2_device* FUNC_0 (int ) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct msi_desc *VAR_3, struct msi_msg *VAR_4)
{
 struct mv_xor_v2_device *VAR_5 = FUNC_0(VAR_3->dev);

 FUNC_1(VAR_4->address_lo,
        VAR_5->dma_base + VAR_1);
 FUNC_1(VAR_4->address_hi & 0xFFFF,
        VAR_5->dma_base + VAR_0);
 FUNC_1(VAR_4->data,
        VAR_5->dma_base + VAR_2);
}
