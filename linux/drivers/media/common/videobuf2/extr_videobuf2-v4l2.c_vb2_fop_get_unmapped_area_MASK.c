
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int queue; } ;
struct file {int dummy; } ;


 unsigned long FUNC_0 (int ,unsigned long,unsigned long,unsigned long,unsigned long) ;
 struct video_device* FUNC_1 (struct file*) ;

unsigned long FUNC_2(struct file *VAR_0, unsigned long VAR_1,
  unsigned long VAR_2, unsigned long VAR_3, unsigned long VAR_4)
{
 struct video_device *VAR_5 = FUNC_1(VAR_0);

 return FUNC_0(VAR_5->queue, VAR_1, VAR_2, VAR_3, VAR_4);
}
