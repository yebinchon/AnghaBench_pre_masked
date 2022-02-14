
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {struct vb2_queue* queue; struct mutex* lock; } ;
struct vb2_queue {int owner; void* fileio; struct mutex* lock; } ;
struct mutex {int dummy; } ;
struct file {int private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mutex*) ;
 int FUNC_2 (struct mutex*) ;
 int FUNC_3 (struct vb2_queue*,struct file*,int *) ;
 struct video_device* FUNC_4 (struct file*) ;

__poll_t FUNC_5(struct file *VAR_1, poll_table *VAR_2)
{
 struct video_device *VAR_3 = FUNC_4(VAR_1);
 struct vb2_queue *VAR_4 = VAR_3->queue;
 struct mutex *VAR_5 = VAR_4->lock ? VAR_4->lock : VAR_3->lock;
 __poll_t VAR_6;
 void *VAR_7;





 FUNC_0(!VAR_5);

 if (VAR_5 && FUNC_1(VAR_5))
  return VAR_0;

 VAR_7 = VAR_4->fileio;

 VAR_6 = FUNC_3(VAR_3->queue, VAR_1, VAR_2);


 if (!VAR_7 && VAR_4->fileio)
  VAR_4->owner = VAR_1->private_data;
 if (VAR_5)
  FUNC_2(VAR_5);
 return VAR_6;
}
