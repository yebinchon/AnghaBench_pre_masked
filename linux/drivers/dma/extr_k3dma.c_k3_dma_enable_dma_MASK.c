
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct k3_dma_dev {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct k3_dma_dev *VAR_5, bool VAR_6)
{
 if (VAR_6) {

  FUNC_0(0x0, VAR_5->base + VAR_0);


  FUNC_0(0xffff, VAR_5->base + VAR_3);
  FUNC_0(0xffff, VAR_5->base + VAR_4);
  FUNC_0(0xffff, VAR_5->base + VAR_1);
  FUNC_0(0xffff, VAR_5->base + VAR_2);
 } else {

  FUNC_0(0x0, VAR_5->base + VAR_3);
  FUNC_0(0x0, VAR_5->base + VAR_4);
  FUNC_0(0x0, VAR_5->base + VAR_1);
  FUNC_0(0x0, VAR_5->base + VAR_2);
 }
}
