
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cryp_device_data {TYPE_1__* base; } ;
typedef enum cryp_dma_req_type { ____Placeholder_cryp_dma_req_type } cryp_dma_req_type ;
struct TYPE_2__ {int dmacr; } ;


 int FUNC_0 (int *,int ) ;

void FUNC_1(struct cryp_device_data *VAR_0,
       enum cryp_dma_req_type VAR_1)
{
 FUNC_0(&VAR_0->base->dmacr,
        (u32) VAR_1);
}
