
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_vmw_dmabuf_rep {scalar_t__ cur_gmr_offset; void* cur_gmr_id; int map_handle; void* handle; } ;
struct drm_vmw_alloc_dmabuf_req {int size; } ;
union drm_vmw_alloc_dmabuf_arg {struct drm_vmw_dmabuf_rep rep; struct drm_vmw_alloc_dmabuf_req req; } ;
typedef void* uint32_t ;
struct vmw_private {int reservation_sem; } ;
struct TYPE_4__ {int vma_node; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
struct vmw_buffer_object {TYPE_2__ base; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_6__ {int tfile; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct vmw_buffer_object**) ;
 TYPE_3__* FUNC_5 (struct drm_file*) ;
 struct vmw_private* FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct vmw_private*,int ,int ,int,void**,struct vmw_buffer_object**,int *) ;

int FUNC_8(struct drm_device *VAR_0, void *VAR_1,
         struct drm_file *VAR_2)
{
 struct vmw_private *VAR_3 = FUNC_6(VAR_0);
 union drm_vmw_alloc_dmabuf_arg *VAR_4 =
     (union drm_vmw_alloc_dmabuf_arg *)VAR_1;
 struct drm_vmw_alloc_dmabuf_req *VAR_5 = &VAR_4->req;
 struct drm_vmw_dmabuf_rep *VAR_6 = &VAR_4->rep;
 struct vmw_buffer_object *VAR_7;
 uint32_t VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(&VAR_3->reservation_sem, 1);
 if (FUNC_3(VAR_9 != 0))
  return VAR_9;

 VAR_9 = FUNC_7(VAR_3, FUNC_5(VAR_2)->tfile,
    VAR_5->size, 0, &VAR_8, &VAR_7,
    ((void*)0));
 if (FUNC_3(VAR_9 != 0))
  goto out_no_bo;

 VAR_6->handle = VAR_8;
 VAR_6->map_handle = FUNC_0(&VAR_7->base.base.vma_node);
 VAR_6->cur_gmr_id = VAR_8;
 VAR_6->cur_gmr_offset = 0;

 FUNC_4(&VAR_7);

out_no_bo:
 FUNC_2(&VAR_3->reservation_sem);

 return VAR_9;
}
