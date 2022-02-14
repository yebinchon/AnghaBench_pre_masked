
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct videobuf_queue {struct file* priv_data; } ;
struct TYPE_3__ {unsigned int sizeimage; } ;
struct saa7146_vv {TYPE_1__ video_fmt; } ;
struct saa7146_fh {TYPE_2__* dev; } ;
struct file {struct saa7146_fh* private_data; } ;
struct TYPE_4__ {struct saa7146_vv* vv_data; } ;


 int FUNC_0 (char*,unsigned int,unsigned int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct videobuf_queue *VAR_2, unsigned int *VAR_3, unsigned int *VAR_4)
{
 struct file *VAR_5 = VAR_2->priv_data;
 struct saa7146_fh *VAR_6 = VAR_5->private_data;
 struct saa7146_vv *VAR_7 = VAR_6->dev->vv_data;

 if (0 == *VAR_3 || *VAR_3 > VAR_0)
  *VAR_3 = VAR_0;

 *VAR_4 = VAR_7->video_fmt.sizeimage;


 if( (*VAR_3 * *VAR_4) > (VAR_1*1048576) ) {
  *VAR_3 = (VAR_1*1048576) / *VAR_4;
 }

 FUNC_0("%d buffers, %d bytes each\n", *VAR_3, *VAR_4);

 return 0;
}
