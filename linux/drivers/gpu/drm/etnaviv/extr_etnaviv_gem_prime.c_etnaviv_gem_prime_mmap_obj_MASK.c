
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct TYPE_2__ {int dma_buf; } ;
struct etnaviv_gem_object {TYPE_1__ base; } ;


 int FUNC_0 (int ,struct vm_area_struct*,int ) ;

__attribute__((used)) static int FUNC_1(struct etnaviv_gem_object *VAR_0,
  struct vm_area_struct *VAR_1)
{
 return FUNC_0(VAR_0->base.dma_buf, VAR_1, 0);
}
