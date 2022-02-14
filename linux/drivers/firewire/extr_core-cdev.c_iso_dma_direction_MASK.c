
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_iso_context {scalar_t__ type; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static enum dma_data_direction FUNC_0(struct fw_iso_context *VAR_3)
{
  if (VAR_3->type == VAR_2)
   return VAR_1;
  else
   return VAR_0;
}
