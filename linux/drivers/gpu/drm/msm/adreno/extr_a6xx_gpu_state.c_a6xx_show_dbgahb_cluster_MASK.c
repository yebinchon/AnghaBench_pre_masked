
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_printer {int dummy; } ;
struct a6xx_gpu_state_obj {int data; struct a6xx_dbgahb_cluster* handle; } ;
struct a6xx_dbgahb_cluster {int count; int registers; int name; } ;


 int FUNC_0 (int ,int ,int ,struct drm_printer*) ;
 int FUNC_1 (struct drm_printer*,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct a6xx_gpu_state_obj *VAR_0,
  struct drm_printer *VAR_1)
{
 const struct a6xx_dbgahb_cluster *VAR_2 = VAR_0->handle;

 if (VAR_2) {
  FUNC_1(VAR_1, "  - cluster-name: ", VAR_2->name);
  FUNC_0(VAR_2->registers, VAR_2->count,
   VAR_0->data, VAR_1);
 }
}
