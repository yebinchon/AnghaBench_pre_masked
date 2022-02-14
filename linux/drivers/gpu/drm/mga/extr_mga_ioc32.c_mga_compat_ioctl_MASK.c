
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct file {struct drm_file* private_data; } ;
struct drm_file {int authenticated; TYPE_2__* minor; } ;
typedef int (* drm_ioctl_compat_t ) (struct file*,unsigned int,unsigned long) ;
struct TYPE_7__ {int (* fn ) (struct file*,unsigned int,unsigned long) ;int name; } ;
struct TYPE_6__ {TYPE_1__* kdev; } ;
struct TYPE_5__ {int devt; } ;


 unsigned int FUNC_0 (TYPE_3__*) ;
 unsigned int VAR_0 ;
 int FUNC_1 (char*,int,...) ;
 unsigned int FUNC_2 (unsigned int) ;
 int VAR_1 ;
 long FUNC_3 (struct file*,unsigned int,unsigned long) ;
 long FUNC_4 (struct file*,unsigned int,unsigned long) ;
 TYPE_3__* VAR_2 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct file*,unsigned int,unsigned long) ;
 int FUNC_7 (int ) ;

long FUNC_8(struct file *VAR_3, unsigned int VAR_4, unsigned long VAR_5)
{
 unsigned int VAR_6 = FUNC_2(VAR_4);
 struct drm_file *VAR_7 = VAR_3->private_data;
 drm_ioctl_compat_t *VAR_8 = ((void*)0);
 int VAR_9;

 if (VAR_6 < VAR_0)
  return FUNC_3(VAR_3, VAR_4, VAR_5);

 if (VAR_6 >= VAR_0 + FUNC_0(VAR_2))
  return FUNC_4(VAR_3, VAR_4, VAR_5);

 VAR_8 = &VAR_2[VAR_6 - VAR_0].fn;
 if (!VAR_8)
  return FUNC_4(VAR_3, VAR_4, VAR_5);

 FUNC_1("pid=%d, dev=0x%lx, auth=%d, %s\n",
    FUNC_7(VAR_1),
    (long)FUNC_5(VAR_7->minor->kdev->devt),
    VAR_7->authenticated,
    VAR_2[VAR_6 - VAR_0].name);
 VAR_9 = (*VAR_8) (VAR_3, VAR_4, VAR_5);
 if (VAR_9)
  FUNC_1("ret = %d\n", VAR_9);
 return VAR_9;
}
