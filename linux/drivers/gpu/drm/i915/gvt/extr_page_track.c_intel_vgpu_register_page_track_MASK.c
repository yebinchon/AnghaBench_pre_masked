
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_vgpu_page_track {void* priv_data; int handler; } ;
struct intel_vgpu {int page_track_tree; } ;
typedef int gvt_page_track_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct intel_vgpu_page_track* FUNC_0 (struct intel_vgpu*,unsigned long) ;
 int FUNC_1 (struct intel_vgpu_page_track*) ;
 struct intel_vgpu_page_track* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,unsigned long,struct intel_vgpu_page_track*) ;

int FUNC_4(struct intel_vgpu *VAR_3, unsigned long VAR_4,
  gvt_page_track_handler_t VAR_5, void *VAR_6)
{
 struct intel_vgpu_page_track *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_0(VAR_3, VAR_4);
 if (VAR_7)
  return -VAR_0;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->handler = VAR_5;
 VAR_7->priv_data = VAR_6;

 VAR_8 = FUNC_3(&VAR_3->page_track_tree, VAR_4, VAR_7);
 if (VAR_8) {
  FUNC_1(VAR_7);
  return VAR_8;
 }

 return 0;
}
