
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_printer {int dummy; } ;
struct a6xx_indexed_registers {int count; int name; } ;
struct a6xx_gpu_state_obj {int data; struct a6xx_indexed_registers* handle; } ;


 int FUNC_0 (struct drm_printer*,char*,int) ;
 int FUNC_1 (struct drm_printer*,int,int ) ;
 int FUNC_2 (struct drm_printer*,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct a6xx_gpu_state_obj *VAR_0,
  struct drm_printer *VAR_1)
{
 const struct a6xx_indexed_registers *VAR_2 = VAR_0->handle;

 if (!VAR_2)
  return;

 FUNC_2(VAR_1, "  - regs-name: ", VAR_2->name);
 FUNC_0(VAR_1, "    dwords: %d\n", VAR_2->count);

 FUNC_1(VAR_1, VAR_2->count << 2, VAR_0->data);
}
