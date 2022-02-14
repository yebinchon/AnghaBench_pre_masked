
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port {int guest_connected; int kref; int outvq_lock; int inbuf_lock; } ;
struct inode {struct cdev* i_cdev; } ;
struct file {struct port* private_data; } ;
struct cdev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct port* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct port*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct inode*,struct file*) ;
 int FUNC_4 (struct port*) ;
 int VAR_3 ;
 int FUNC_5 (struct port*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_4, struct file *VAR_5)
{
 struct cdev *VAR_6 = VAR_4->i_cdev;
 struct port *VAR_7;
 int VAR_8;


 VAR_7 = FUNC_0(VAR_6->dev);
 if (!VAR_7) {

  return -VAR_1;
 }
 VAR_5->private_data = VAR_7;





 if (FUNC_1(VAR_7)) {
  VAR_8 = -VAR_1;
  goto out;
 }


 FUNC_6(&VAR_7->inbuf_lock);
 if (VAR_7->guest_connected) {
  FUNC_7(&VAR_7->inbuf_lock);
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_7->guest_connected = 1;
 FUNC_7(&VAR_7->inbuf_lock);

 FUNC_6(&VAR_7->outvq_lock);





 FUNC_4(VAR_7);
 FUNC_7(&VAR_7->outvq_lock);

 FUNC_3(VAR_4, VAR_5);


 FUNC_5(VAR_5->private_data, VAR_2, 1);

 return 0;
out:
 FUNC_2(&VAR_7->kref, VAR_3);
 return VAR_8;
}
