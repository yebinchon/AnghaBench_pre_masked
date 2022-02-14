
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_printer {int dummy; } ;
struct a6xx_gpu_state_obj {int data; int handle; } ;
struct a6xx_gpu_state {int nr_debugbus; int nr_cx_debugbus; struct a6xx_gpu_state_obj* cx_debugbus; struct a6xx_gpu_state_obj* vbif_debugbus; struct a6xx_gpu_state_obj* debugbus; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct drm_printer*) ;
 int FUNC_1 (struct drm_printer*,char*,int) ;
 int FUNC_2 (struct drm_printer*,char*) ;
 int FUNC_3 (struct drm_printer*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct a6xx_gpu_state *VAR_1,
  struct drm_printer *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->nr_debugbus; VAR_3++) {
  struct a6xx_gpu_state_obj *VAR_4 = &VAR_1->debugbus[VAR_3];

  FUNC_0(VAR_4->handle, VAR_4->data, VAR_2);
 }

 if (VAR_1->vbif_debugbus) {
  struct a6xx_gpu_state_obj *VAR_5 = VAR_1->vbif_debugbus;

  FUNC_2(VAR_2, "  - debugbus-block: A6XX_DBGBUS_VBIF\n");
  FUNC_1(VAR_2, "    count: %d\n", VAR_0);


  FUNC_3(VAR_2, VAR_0 << 2, VAR_5->data);
 }

 for (VAR_3 = 0; VAR_3 < VAR_1->nr_cx_debugbus; VAR_3++) {
  struct a6xx_gpu_state_obj *VAR_6 = &VAR_1->cx_debugbus[VAR_3];

  FUNC_0(VAR_6->handle, VAR_6->data, VAR_2);
 }
}
