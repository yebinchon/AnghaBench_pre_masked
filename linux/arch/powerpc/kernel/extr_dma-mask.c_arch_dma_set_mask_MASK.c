
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* dma_set_mask ) (struct device*,int ) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct device*,int ) ;

void FUNC_1(struct device *VAR_1, u64 VAR_2)
{
 if (VAR_0.dma_set_mask)
  VAR_0.dma_set_mask(VAR_1, VAR_2);
}
