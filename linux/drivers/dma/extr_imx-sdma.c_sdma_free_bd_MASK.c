
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sdma_desc {int num_bd; int bd_phys; int bd; TYPE_2__* sdmac; } ;
struct sdma_buffer_descriptor {int dummy; } ;
struct TYPE_4__ {TYPE_1__* sdma; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct sdma_desc *VAR_0)
{
 u32 VAR_1 = VAR_0->num_bd * sizeof(struct sdma_buffer_descriptor);

 FUNC_0(VAR_0->sdmac->sdma->dev, VAR_1, VAR_0->bd,
     VAR_0->bd_phys);
}
