
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_framebuffer {int flags; int capability; } ;
struct saa7146_vv {struct v4l2_framebuffer ov_fb; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {struct saa7146_vv* vv_data; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_2, void *VAR_3, struct v4l2_framebuffer *VAR_4)
{
 struct saa7146_dev *VAR_5 = ((struct saa7146_fh *)VAR_3)->dev;
 struct saa7146_vv *VAR_6 = VAR_5->vv_data;

 *VAR_4 = VAR_6->ov_fb;
 VAR_4->capability = VAR_0;
 VAR_4->flags = VAR_1;
 return 0;
}
