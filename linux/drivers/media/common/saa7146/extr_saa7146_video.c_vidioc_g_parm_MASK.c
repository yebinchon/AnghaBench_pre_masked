
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int readbuffers; int timeperframe; } ;
struct TYPE_5__ {TYPE_1__ capture; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_2__ parm; } ;
struct saa7146_vv {TYPE_3__* standard; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {struct saa7146_vv* vv_data; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
  struct v4l2_streamparm *VAR_4)
{
 struct saa7146_dev *VAR_5 = ((struct saa7146_fh *)VAR_3)->dev;
 struct saa7146_vv *VAR_6 = VAR_5->vv_data;

 if (VAR_4->type != VAR_1)
  return -VAR_0;
 VAR_4->parm.capture.readbuffers = 1;
 FUNC_0(VAR_6->standard->id,
        &VAR_4->parm.capture.timeperframe);
 return 0;
}
