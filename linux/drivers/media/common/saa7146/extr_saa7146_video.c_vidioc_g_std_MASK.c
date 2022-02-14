
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct saa7146_vv {TYPE_1__* standard; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {struct saa7146_vv* vv_data; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int id; } ;



__attribute__((used)) static int FUNC_0(struct file *VAR_0, void *VAR_1, v4l2_std_id *VAR_2)
{
 struct saa7146_dev *VAR_3 = ((struct saa7146_fh *)VAR_1)->dev;
 struct saa7146_vv *VAR_4 = VAR_3->vv_data;

 *VAR_2 = VAR_4->standard->id;
 return 0;
}
