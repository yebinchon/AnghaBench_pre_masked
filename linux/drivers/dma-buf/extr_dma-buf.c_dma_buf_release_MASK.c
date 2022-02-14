
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {struct dma_buf* private_data; } ;
struct dma_resv {int dummy; } ;
struct TYPE_6__ {scalar_t__ active; } ;
struct TYPE_5__ {scalar_t__ active; } ;
struct dma_buf {int vmapping_counter; int owner; struct dma_resv* resv; int list_node; TYPE_3__* ops; TYPE_2__ cb_excl; TYPE_1__ cb_shared; } ;
struct TYPE_8__ {int lock; } ;
struct TYPE_7__ {int (* release ) (struct dma_buf*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_1 (struct dma_resv*) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (struct dma_buf*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct dma_buf*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_2, struct file *VAR_3)
{
 struct dma_buf *VAR_4;

 if (!FUNC_2(VAR_3))
  return -VAR_0;

 VAR_4 = VAR_3->private_data;

 FUNC_0(VAR_4->vmapping_counter);
 FUNC_0(VAR_4->cb_shared.active || VAR_4->cb_excl.active);

 VAR_4->ops->release(VAR_4);

 FUNC_6(&VAR_1.lock);
 FUNC_4(&VAR_4->list_node);
 FUNC_7(&VAR_1.lock);

 if (VAR_4->resv == (struct dma_resv *)&VAR_4[1])
  FUNC_1(VAR_4->resv);

 FUNC_5(VAR_4->owner);
 FUNC_3(VAR_4);
 return 0;
}
