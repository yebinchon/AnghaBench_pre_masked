
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_vma_offset_manager {int dummy; } ;
struct drm_device {struct drm_vma_offset_manager* vma_offset_manager; int object_name_idr; int object_name_lock; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct drm_vma_offset_manager*,int ,int ) ;
 int FUNC_2 (int *,int) ;
 struct drm_vma_offset_manager* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct drm_device *VAR_4)
{
 struct drm_vma_offset_manager *VAR_5;

 FUNC_4(&VAR_4->object_name_lock);
 FUNC_2(&VAR_4->object_name_idr, 1);

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_3);
 if (!VAR_5) {
  FUNC_0("out of memory\n");
  return -VAR_2;
 }

 VAR_4->vma_offset_manager = VAR_5;
 FUNC_1(VAR_5,
        VAR_1,
        VAR_0);

 return 0;
}
