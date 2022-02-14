
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;
struct bsg_device {int dummy; } ;
struct bsg_class_device {int queue; } ;


 int VAR_0 ;
 struct bsg_device* FUNC_0 (int ) ;
 struct bsg_device* FUNC_1 (int ,int ) ;
 struct bsg_device* FUNC_2 (struct inode*,int ,struct file*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct bsg_class_device* FUNC_3 (int *,int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct bsg_device *FUNC_7(struct inode *VAR_3, struct file *VAR_4)
{
 struct bsg_device *VAR_5;
 struct bsg_class_device *VAR_6;




 FUNC_5(&VAR_2);
 VAR_6 = FUNC_3(&VAR_1, FUNC_4(VAR_3));

 if (!VAR_6) {
  VAR_5 = FUNC_0(-VAR_0);
  goto out_unlock;
 }

 VAR_5 = FUNC_1(FUNC_4(VAR_3), VAR_6->queue);
 if (!VAR_5)
  VAR_5 = FUNC_2(VAR_3, VAR_6->queue, VAR_4);

out_unlock:
 FUNC_6(&VAR_2);
 return VAR_5;
}
