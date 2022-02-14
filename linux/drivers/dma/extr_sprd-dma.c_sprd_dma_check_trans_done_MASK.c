
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_dma_desc {int dummy; } ;
typedef enum sprd_dma_req_mode { ____Placeholder_sprd_dma_req_mode } sprd_dma_req_mode ;
typedef enum sprd_dma_int_type { ____Placeholder_sprd_dma_int_type } sprd_dma_int_type ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct sprd_dma_desc *VAR_1,
          enum sprd_dma_int_type VAR_2,
          enum sprd_dma_req_mode VAR_3)
{
 if (VAR_2 == VAR_0)
  return 0;

 if (VAR_2 >= VAR_3 + 1)
  return 1;
 else
  return 0;
}
