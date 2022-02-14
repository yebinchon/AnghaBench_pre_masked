
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_vgpu {int handle; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {TYPE_1__* mpt; } ;
struct TYPE_3__ {int (* dma_unmap_guest_page ) (int ,int ) ;} ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline void FUNC_1(
  struct intel_vgpu *VAR_1, dma_addr_t VAR_2)
{
 VAR_0.mpt->dma_unmap_guest_page(VAR_1->handle, VAR_2);
}
