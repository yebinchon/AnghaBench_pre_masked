
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(enum dma_data_direction VAR_5)
{
 if (VAR_5 == VAR_2)
  return VAR_3;
 else if (VAR_5 == VAR_1)
  return VAR_4;
 else if (VAR_5 == VAR_0)
  return VAR_4 | VAR_3;
 else
  return 0;
}
