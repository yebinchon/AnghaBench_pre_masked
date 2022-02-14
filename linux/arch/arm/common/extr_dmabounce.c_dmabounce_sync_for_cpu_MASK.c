
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;
struct TYPE_2__ {int (* sync_single_for_cpu ) (struct device*,int ,size_t,int) ;} ;


 int FUNC_0 (struct device*,int ,size_t,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (struct device*,int ,size_t,int) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_1,
  dma_addr_t VAR_2, size_t VAR_3, enum dma_data_direction VAR_4)
{
 if (!FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4))
  return;

 VAR_0.sync_single_for_cpu(VAR_1, VAR_2, VAR_3, VAR_4);
}
