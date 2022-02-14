
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct eventfd_ctx* msi_trigger; } ;
struct intel_vgpu {TYPE_1__ vdev; } ;
struct eventfd_ctx {int dummy; } ;


 int FUNC_0 (struct eventfd_ctx*) ;

__attribute__((used)) static void FUNC_1(struct intel_vgpu *VAR_0)
{
 struct eventfd_ctx *VAR_1;

 VAR_1 = VAR_0->vdev.msi_trigger;
 if (VAR_1) {
  FUNC_0(VAR_1);
  VAR_0->vdev.msi_trigger = ((void*)0);
 }
}
