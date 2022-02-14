
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;


 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static enum dma_data_direction
FUNC_0(enum dma_transfer_direction VAR_4)
{
 switch (VAR_4) {
 case 128:
  return VAR_1;
 case 129:
  return VAR_3;
 case 130:
  return VAR_0;
 default:
  return VAR_2;
 }
}
