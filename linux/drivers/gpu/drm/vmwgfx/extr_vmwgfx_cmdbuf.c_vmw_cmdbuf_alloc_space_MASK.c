
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vmw_cmdbuf_man {int space_mutex; TYPE_1__* dev_priv; int alloc_queue; } ;
struct vmw_cmdbuf_alloc_info {int page_size; int done; struct drm_mm_node* node; } ;
struct drm_mm_node {int dummy; } ;
struct TYPE_3__ {int cmdbuf_waiters; } ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct vmw_cmdbuf_man*,struct vmw_cmdbuf_alloc_info*) ;
 int FUNC_5 (TYPE_1__*,int ,int *) ;
 int FUNC_6 (TYPE_1__*,int ,int *) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct vmw_cmdbuf_man *VAR_3,
      struct drm_mm_node *VAR_4,
      size_t VAR_5,
      bool VAR_6)
{
 struct vmw_cmdbuf_alloc_info VAR_7;

 VAR_7.page_size = FUNC_0(VAR_5) >> VAR_1;
 VAR_7.node = VAR_4;
 VAR_7.done = 0;





 if (VAR_6) {
  if (FUNC_2(&VAR_3->space_mutex))
   return -VAR_0;
 } else {
  FUNC_1(&VAR_3->space_mutex);
 }


 if (FUNC_4(VAR_3, &VAR_7))
  goto out_unlock;

 FUNC_5(VAR_3->dev_priv,
          VAR_2,
          &VAR_3->dev_priv->cmdbuf_waiters);

 if (VAR_6) {
  int VAR_8;

  VAR_8 = FUNC_8
   (VAR_3->alloc_queue, FUNC_4(VAR_3, &VAR_7));
  if (VAR_8) {
   FUNC_6
    (VAR_3->dev_priv, VAR_2,
     &VAR_3->dev_priv->cmdbuf_waiters);
   FUNC_3(&VAR_3->space_mutex);
   return VAR_8;
  }
 } else {
  FUNC_7(VAR_3->alloc_queue, FUNC_4(VAR_3, &VAR_7));
 }
 FUNC_6(VAR_3->dev_priv,
      VAR_2,
      &VAR_3->dev_priv->cmdbuf_waiters);

out_unlock:
 FUNC_3(&VAR_3->space_mutex);

 return 0;
}
