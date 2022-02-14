
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
 int FUNC_1 (char*,int,...) ;
 unsigned int FUNC_2 (unsigned int) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 long FUNC_3 (struct file*,unsigned int,unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct file*,unsigned int,unsigned long) ;
 int FUNC_6 (int ) ;

long FUNC_7(struct file *VAR_2, unsigned int VAR_3, unsigned long VAR_4)
{
 unsigned int VAR_5 = FUNC_2(VAR_3);
 struct drm_file *VAR_6 = VAR_2->private_data;
 drm_ioctl_compat_t *VAR_7;
 int VAR_8;





 if (VAR_5 >= FUNC_0(VAR_1))
  return FUNC_3(VAR_2, VAR_3, VAR_4);

 VAR_7 = &VAR_1[VAR_5].fn;
 if (!VAR_7)
  return FUNC_3(VAR_2, VAR_3, VAR_4);

 FUNC_1("pid=%d, dev=0x%lx, auth=%d, %s\n",
    FUNC_6(VAR_0),
    (long)FUNC_4(VAR_6->minor->kdev->devt),
    VAR_6->authenticated,
    VAR_1[VAR_5].name);
 VAR_8 = (*VAR_7)(VAR_2, VAR_3, VAR_4);
 if (VAR_8)
  FUNC_1("ret = %d\n", VAR_8);
 return VAR_8;
}
