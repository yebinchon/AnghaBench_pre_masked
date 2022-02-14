
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_sta2x11; } ;
struct device {TYPE_1__ archdata; } ;
typedef int phys_addr_t ;
typedef int dma_addr_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct device*) ;

phys_addr_t FUNC_2(struct device *VAR_0, dma_addr_t VAR_1)
{
 if (!VAR_0->archdata.is_sta2x11)
  return VAR_1;
 return FUNC_0(VAR_1, FUNC_1(VAR_0));
}
