
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {struct drm_file* private_data; } ;
struct drm_ioctl_desc {unsigned int cmd; unsigned int flags; } ;
struct drm_file {TYPE_1__* minor; } ;
struct drm_device {TYPE_2__* driver; } ;
struct TYPE_4__ {unsigned int num_ioctls; } ;
struct TYPE_3__ {struct drm_device* dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*,unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,unsigned int*) ;
 int FUNC_4 (struct drm_file*) ;
 scalar_t__ FUNC_5 (int) ;
 struct drm_ioctl_desc* VAR_7 ;

__attribute__((used)) static long FUNC_6(struct file *VAR_8, unsigned int VAR_9,
         unsigned long VAR_10,
         long (*VAR_11)(struct file *, unsigned int,
       unsigned long))
{
 struct drm_file *VAR_12 = VAR_8->private_data;
 struct drm_device *VAR_13 = VAR_12->minor->dev;
 unsigned int VAR_14 = FUNC_1(VAR_9);
 unsigned int VAR_15;





 if ((VAR_14 >= VAR_1) && (VAR_14 < VAR_2)
     && (VAR_14 < VAR_1 + VAR_13->driver->num_ioctls)) {
  const struct drm_ioctl_desc *VAR_16 =
   &VAR_7[VAR_14 - VAR_1];

  if (VAR_14 == VAR_1 + VAR_3) {
   return VAR_11(VAR_8, VAR_9, VAR_10);
  } else if (VAR_14 == VAR_1 + VAR_4) {
   if (!FUNC_4(VAR_12) &&
       !FUNC_2(VAR_0))
    return -VAR_5;
  }

  if (FUNC_5(VAR_16->cmd != VAR_9))
   goto out_io_encoding;

  VAR_15 = VAR_16->flags;
 } else if (!FUNC_3(VAR_14, &VAR_15))
  return -VAR_6;

 return VAR_11(VAR_8, VAR_9, VAR_10);

out_io_encoding:
 FUNC_0("Invalid command format, ioctl %d\n",
    VAR_14 - VAR_1);

 return -VAR_6;
}
