
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int class_dev; } ;
struct request_queue {TYPE_1__ bsg_dev; } ;
struct inode {int i_rdev; } ;
struct file {int dummy; } ;
struct bsg_device {int max_queue; int name; int dev_list; int ref_count; struct request_queue* queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bsg_device* FUNC_0 (int ) ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct request_queue*) ;
 struct bsg_device* FUNC_3 () ;
 int FUNC_4 (struct bsg_device*,char*,int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (unsigned char*,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int ,int ,int) ;

__attribute__((used)) static struct bsg_device *FUNC_13(struct inode *VAR_3,
      struct request_queue *VAR_4,
      struct file *VAR_5)
{
 struct bsg_device *VAR_6;
 unsigned char VAR_7[32];

 FUNC_10(&VAR_2);

 if (!FUNC_1(VAR_4))
  return FUNC_0(-VAR_1);

 VAR_6 = FUNC_3();
 if (!VAR_6) {
  FUNC_2(VAR_4);
  return FUNC_0(-VAR_0);
 }

 VAR_6->queue = VAR_4;

 FUNC_11(&VAR_6->ref_count, 1);
 FUNC_8(&VAR_6->dev_list, FUNC_5(FUNC_9(VAR_3)));

 FUNC_12(VAR_6->name, FUNC_6(VAR_4->bsg_dev.class_dev), sizeof(VAR_6->name) - 1);
 FUNC_4(VAR_6, "bound to <%s>, max queue %d\n",
  FUNC_7(VAR_7, VAR_3->i_rdev), VAR_6->max_queue);

 return VAR_6;
}
