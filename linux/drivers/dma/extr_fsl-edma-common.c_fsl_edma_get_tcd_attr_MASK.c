
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;

__attribute__((used)) static unsigned int FUNC_0(enum dma_slave_buswidth VAR_8)
{
 switch (VAR_8) {
 case 1:
  return VAR_7 | VAR_3;
 case 2:
  return VAR_4 | VAR_0;
 case 4:
  return VAR_5 | VAR_1;
 case 8:
  return VAR_6 | VAR_2;
 default:
  return VAR_5 | VAR_1;
 }
}
