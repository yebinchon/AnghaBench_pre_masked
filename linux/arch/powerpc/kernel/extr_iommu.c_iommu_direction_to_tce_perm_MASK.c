
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;





 unsigned long VAR_0 ;
 unsigned long VAR_1 ;

unsigned long FUNC_0(enum dma_data_direction VAR_2)
{
 switch (VAR_2) {
 case 130:
  return VAR_0 | VAR_1;
 case 129:
  return VAR_1;
 case 128:
  return VAR_0;
 default:
  return 0;
 }
}
