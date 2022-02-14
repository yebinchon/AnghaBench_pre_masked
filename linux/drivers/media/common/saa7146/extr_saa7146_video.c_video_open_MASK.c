
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7146_fh {int video_q; } ;
struct saa7146_dev {int v4l2_lock; int slock; TYPE_1__* pci; } ;
struct saa7146_buf {int dummy; } ;
struct file {struct saa7146_fh* private_data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int *,int *,int ,int ,int,struct file*,int *) ;

__attribute__((used)) static int FUNC_1(struct saa7146_dev *VAR_3, struct file *VAR_4)
{
 struct saa7146_fh *VAR_5 = VAR_4->private_data;

 FUNC_0(&VAR_5->video_q, &VAR_2,
       &VAR_3->pci->dev, &VAR_3->slock,
       VAR_0,
       VAR_1,
       sizeof(struct saa7146_buf),
       VAR_4, &VAR_3->v4l2_lock);

 return 0;
}
