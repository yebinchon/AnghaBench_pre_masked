
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {struct drm_file* private_data; } ;
struct drm_file {TYPE_1__* minor; } ;
struct drm_device {int dev; } ;
struct TYPE_2__ {struct drm_device* dev; } ;


 long FUNC_0 (struct file*,unsigned int,unsigned long) ;
 long FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

long FUNC_4(struct file *VAR_0,
        unsigned int VAR_1, unsigned long VAR_2)
{
 struct drm_file *VAR_3 = VAR_0->private_data;
 struct drm_device *VAR_4;
 long VAR_5;
 VAR_4 = VAR_3->minor->dev;
 VAR_5 = FUNC_1(VAR_4->dev);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2);

 FUNC_2(VAR_4->dev);
 FUNC_3(VAR_4->dev);
 return VAR_5;
}
