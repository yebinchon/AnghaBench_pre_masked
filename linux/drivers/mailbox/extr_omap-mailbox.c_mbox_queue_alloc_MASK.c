
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_mbox_queue {int work; int fifo; int lock; } ;
struct omap_mbox {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,void (*) (struct work_struct*)) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct omap_mbox_queue*) ;
 struct omap_mbox_queue* FUNC_3 (int,int ) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct omap_mbox_queue *FUNC_5(struct omap_mbox *VAR_2,
     void (*VAR_3)(struct work_struct *))
{
 struct omap_mbox_queue *VAR_4;

 if (!VAR_3)
  return ((void*)0);

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_4(&VAR_4->lock);

 if (FUNC_1(&VAR_4->fifo, VAR_1, VAR_0))
  goto error;

 FUNC_0(&VAR_4->work, VAR_3);
 return VAR_4;

error:
 FUNC_2(VAR_4);
 return ((void*)0);
}
