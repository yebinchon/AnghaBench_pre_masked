
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct video_device {int queue; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ,struct vm_area_struct*) ;
 struct video_device* FUNC_1 (struct file*) ;

int FUNC_2(struct file *VAR_0, struct vm_area_struct *VAR_1)
{
 struct video_device *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2->queue, VAR_1);
}
