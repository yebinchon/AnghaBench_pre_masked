
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reader_dev {int devq; } ;
struct pcmcia_device {scalar_t__ open; } ;
struct inode {int dummy; } ;
struct file {struct reader_dev* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct reader_dev*,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (struct reader_dev*) ;
 struct pcmcia_device** VAR_2 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_3, struct file *VAR_4)
{
 struct reader_dev *VAR_5 = VAR_4->private_data;
 struct pcmcia_device *VAR_6;
 int VAR_7 = FUNC_3(VAR_3);

 FUNC_0(2, VAR_5, "-> cm4040_close(maj/min=%d.%d)\n", FUNC_2(VAR_3),
       FUNC_3(VAR_3));

 if (VAR_7 >= VAR_0)
  return -VAR_1;

 VAR_6 = VAR_2[VAR_7];
 if (VAR_6 == ((void*)0))
  return -VAR_1;

 FUNC_1(VAR_5);

 VAR_6->open = 0;
 FUNC_4(&VAR_5->devq);

 FUNC_0(2, VAR_5, "<- cm4040_close\n");
 return 0;
}
