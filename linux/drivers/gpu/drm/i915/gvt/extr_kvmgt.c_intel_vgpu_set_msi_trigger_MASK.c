
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct eventfd_ctx* msi_trigger; } ;
struct intel_vgpu {TYPE_1__ vdev; } ;
struct eventfd_ctx {int dummy; } ;


 scalar_t__ FUNC_0 (struct eventfd_ctx*) ;
 int FUNC_1 (struct eventfd_ctx*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct eventfd_ctx* FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct intel_vgpu*) ;

__attribute__((used)) static int FUNC_5(struct intel_vgpu *VAR_2,
  unsigned int VAR_3, unsigned int VAR_4, unsigned int VAR_5,
  u32 VAR_6, void *VAR_7)
{
 struct eventfd_ctx *VAR_8;

 if (VAR_6 & VAR_0) {
  int VAR_9 = *(int *)VAR_7;

  VAR_8 = FUNC_2(VAR_9);
  if (FUNC_0(VAR_8)) {
   FUNC_3("eventfd_ctx_fdget failed\n");
   return FUNC_1(VAR_8);
  }
  VAR_2->vdev.msi_trigger = VAR_8;
 } else if ((VAR_6 & VAR_1) && !VAR_5)
  FUNC_4(VAR_2);

 return 0;
}
