
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct simdisk {int lock; int users; } ;
struct block_device {TYPE_1__* bd_disk; } ;
typedef int fmode_t ;
struct TYPE_2__ {struct simdisk* private_data; } ;


 int FUNC_0 (struct block_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct block_device *VAR_0, fmode_t VAR_1)
{
 struct simdisk *VAR_2 = VAR_0->bd_disk->private_data;

 FUNC_1(&VAR_2->lock);
 if (!VAR_2->users)
  FUNC_0(VAR_0);
 ++VAR_2->users;
 FUNC_2(&VAR_2->lock);
 return 0;
}
