
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct block_device {TYPE_1__* bd_disk; } ;
struct bcache_device {int (* ioctl ) (struct bcache_device*,int ,unsigned int,unsigned long) ;} ;
typedef int fmode_t ;
struct TYPE_2__ {struct bcache_device* private_data; } ;


 int FUNC_0 (struct bcache_device*,int ,unsigned int,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct block_device *VAR_0, fmode_t VAR_1,
       unsigned int VAR_2, unsigned long VAR_3)
{
 struct bcache_device *VAR_4 = VAR_0->bd_disk->private_data;

 return VAR_4->ioctl(VAR_4, VAR_1, VAR_2, VAR_3);
}
