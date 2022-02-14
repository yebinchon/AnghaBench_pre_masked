
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct file {int f_mode; } ;
struct dma_resv {int dummy; } ;
struct dma_buf_export_info {int owner; int flags; int exp_name; int size; TYPE_1__* ops; scalar_t__ priv; struct dma_resv* resv; } ;
struct TYPE_7__ {scalar_t__ active; int * poll; } ;
struct TYPE_6__ {scalar_t__ active; int * poll; } ;
struct dma_buf {int list_node; int attachments; int lock; struct file* file; struct dma_resv* resv; TYPE_3__ cb_shared; TYPE_2__ cb_excl; int poll; int owner; int exp_name; int size; TYPE_1__* ops; scalar_t__ priv; } ;
struct TYPE_8__ {int lock; int head; } ;
struct TYPE_5__ {int release; int unmap_dma_buf; int map_dma_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dma_buf* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct file*) ;
 int FUNC_3 (struct file*) ;
 scalar_t__ FUNC_4 (int) ;
 TYPE_4__ VAR_5 ;
 struct file* FUNC_5 (struct dma_buf*,int ) ;
 int FUNC_6 (struct dma_resv*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct dma_buf*) ;
 struct dma_buf* FUNC_9 (size_t,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;

struct dma_buf *FUNC_16(const struct dma_buf_export_info *VAR_6)
{
 struct dma_buf *VAR_7;
 struct dma_resv *VAR_8 = VAR_6->resv;
 struct file *VAR_9;
 size_t VAR_10 = sizeof(struct dma_buf);
 int VAR_11;

 if (!VAR_6->resv)
  VAR_10 += sizeof(struct dma_resv);
 else

  VAR_10 += 1;

 if (FUNC_4(!VAR_6->priv
     || !VAR_6->ops
     || !VAR_6->ops->map_dma_buf
     || !VAR_6->ops->unmap_dma_buf
     || !VAR_6->ops->release)) {
  return FUNC_0(-VAR_0);
 }

 if (!FUNC_15(VAR_6->owner))
  return FUNC_0(-VAR_1);

 VAR_7 = FUNC_9(VAR_10, VAR_4);
 if (!VAR_7) {
  VAR_11 = -VAR_2;
  goto err_module;
 }

 VAR_7->priv = VAR_6->priv;
 VAR_7->ops = VAR_6->ops;
 VAR_7->size = VAR_6->size;
 VAR_7->exp_name = VAR_6->exp_name;
 VAR_7->owner = VAR_6->owner;
 FUNC_7(&VAR_7->poll);
 VAR_7->cb_excl.poll = VAR_7->cb_shared.poll = &VAR_7->poll;
 VAR_7->cb_excl.active = VAR_7->cb_shared.active = 0;

 if (!VAR_8) {
  VAR_8 = (struct dma_resv *)&VAR_7[1];
  FUNC_6(VAR_8);
 }
 VAR_7->resv = VAR_8;

 VAR_9 = FUNC_5(VAR_7, VAR_6->flags);
 if (FUNC_2(VAR_9)) {
  VAR_11 = FUNC_3(VAR_9);
  goto err_dmabuf;
 }

 VAR_9->f_mode |= VAR_3;
 VAR_7->file = VAR_9;

 FUNC_12(&VAR_7->lock);
 FUNC_1(&VAR_7->attachments);

 FUNC_13(&VAR_5.lock);
 FUNC_10(&VAR_7->list_node, &VAR_5.head);
 FUNC_14(&VAR_5.lock);

 return VAR_7;

err_dmabuf:
 FUNC_8(VAR_7);
err_module:
 FUNC_11(VAR_6->owner);
 return FUNC_0(VAR_11);
}
