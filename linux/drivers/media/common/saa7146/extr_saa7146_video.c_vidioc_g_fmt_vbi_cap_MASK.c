
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vbi; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct saa7146_vv {int vbi_fmt; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {struct saa7146_vv* vv_data; } ;
struct file {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct file *VAR_0, void *VAR_1, struct v4l2_format *VAR_2)
{
 struct saa7146_dev *VAR_3 = ((struct saa7146_fh *)VAR_1)->dev;
 struct saa7146_vv *VAR_4 = VAR_3->vv_data;

 VAR_2->fmt.vbi = VAR_4->vbi_fmt;
 return 0;
}
