
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sdma_desc {int num_bd; int bd; int bd_phys; TYPE_2__* sdmac; } ;
struct sdma_buffer_descriptor {int dummy; } ;
struct TYPE_4__ {TYPE_1__* sdma; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct sdma_desc *VAR_2)
{
 u32 VAR_3 = VAR_2->num_bd * sizeof(struct sdma_buffer_descriptor);
 int VAR_4 = 0;

 VAR_2->bd = FUNC_0(VAR_2->sdmac->sdma->dev, VAR_3,
           &VAR_2->bd_phys, VAR_1);
 if (!VAR_2->bd) {
  VAR_4 = -VAR_0;
  goto out;
 }
out:
 return VAR_4;
}
