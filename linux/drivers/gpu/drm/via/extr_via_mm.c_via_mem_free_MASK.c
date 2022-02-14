
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct via_memblock {int mm_node; int owner_list; } ;
struct drm_file {int dummy; } ;
struct drm_device {int struct_mutex; TYPE_1__* dev_private; } ;
struct TYPE_3__ {int object_idr; } ;
typedef TYPE_1__ drm_via_private_t ;
struct TYPE_4__ {int index; } ;
typedef TYPE_2__ drm_via_mem_t ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 struct via_memblock* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct via_memblock*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct drm_device *VAR_1, void *VAR_2, struct drm_file *VAR_3)
{
 drm_via_private_t *VAR_4 = VAR_1->dev_private;
 drm_via_mem_t *VAR_5 = VAR_2;
 struct via_memblock *VAR_6;

 FUNC_6(&VAR_1->struct_mutex);
 VAR_6 = FUNC_2(&VAR_4->object_idr, VAR_5->index);
 if (VAR_6 == ((void*)0)) {
  FUNC_7(&VAR_1->struct_mutex);
  return -VAR_0;
 }

 FUNC_3(&VAR_4->object_idr, VAR_5->index);
 FUNC_5(&VAR_6->owner_list);
 FUNC_1(&VAR_6->mm_node);
 FUNC_4(VAR_6);
 FUNC_7(&VAR_1->struct_mutex);

 FUNC_0("free = 0x%lx\n", VAR_5->index);

 return 0;
}
