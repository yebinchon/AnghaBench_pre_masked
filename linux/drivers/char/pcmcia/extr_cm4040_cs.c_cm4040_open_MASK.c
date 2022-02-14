
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reader_dev {int poll_timer; } ;
struct pcmcia_device {int open; struct reader_dev* priv; } ;
struct inode {int dummy; } ;
struct file {int f_flags; struct reader_dev* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct reader_dev*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct pcmcia_device** VAR_7 ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*,struct file*) ;
 int FUNC_6 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_9, struct file *VAR_10)
{
 struct reader_dev *VAR_11;
 struct pcmcia_device *VAR_12;
 int VAR_13 = FUNC_1(VAR_9);
 int VAR_14;

 if (VAR_13 >= VAR_0)
  return -VAR_3;

 FUNC_3(&VAR_6);
 VAR_12 = VAR_7[VAR_13];
 if (VAR_12 == ((void*)0) || !FUNC_6(VAR_12)) {
  VAR_14 = -VAR_3;
  goto out;
 }

 if (VAR_12->open) {
  VAR_14 = -VAR_2;
  goto out;
 }

 VAR_11 = VAR_12->priv;
 VAR_10->private_data = VAR_11;

 if (VAR_10->f_flags & VAR_4) {
  FUNC_0(4, VAR_11, "filep->f_flags O_NONBLOCK set\n");
  VAR_14 = -VAR_1;
  goto out;
 }

 VAR_12->open = 1;

 FUNC_2(&VAR_11->poll_timer, VAR_8 + VAR_5);

 FUNC_0(2, VAR_11, "<- cm4040_open (successfully)\n");
 VAR_14 = FUNC_5(VAR_9, VAR_10);
out:
 FUNC_4(&VAR_6);
 return VAR_14;
}
