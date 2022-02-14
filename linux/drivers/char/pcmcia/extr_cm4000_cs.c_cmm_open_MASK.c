
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {int open; struct cm4000_dev* priv; } ;
struct inode {int dummy; } ;
struct file {int f_flags; struct cm4000_dev* private_data; } ;
struct cm4000_dev {int mdelay; } ;
struct TYPE_2__ {int pid; int comm; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct cm4000_dev*,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct cm4000_dev*) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 struct pcmcia_device** VAR_8 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct pcmcia_device*) ;
 int FUNC_7 (struct cm4000_dev*) ;
 int FUNC_8 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_9, struct file *VAR_10)
{
 struct cm4000_dev *VAR_11;
 struct pcmcia_device *VAR_12;
 int VAR_13 = FUNC_3(VAR_9);
 int VAR_14;

 if (VAR_13 >= VAR_0)
  return -VAR_3;

 FUNC_4(&VAR_6);
 VAR_12 = VAR_8[VAR_13];
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

 FUNC_0(2, VAR_11, "-> cmm_open(device=%d.%d process=%s,%d)\n",
       FUNC_2(VAR_9), VAR_13, VAR_7->comm, VAR_7->pid);





 FUNC_1(VAR_11);







 if (VAR_10->f_flags & VAR_4) {
  VAR_14 = -VAR_1;
  goto out;
 }

 VAR_11->mdelay = VAR_5;


 FUNC_7(VAR_11);

 VAR_12->open = 1;

 FUNC_0(2, VAR_11, "<- cmm_open\n");
 VAR_14 = FUNC_8(VAR_9, VAR_10);
out:
 FUNC_5(&VAR_6);
 return VAR_14;
}
