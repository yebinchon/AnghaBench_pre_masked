
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct block_device {TYPE_1__* bd_disk; } ;
struct bcache_device {int cl; int flags; } ;
typedef int fmode_t ;
struct TYPE_2__ {struct bcache_device* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct block_device *VAR_2, fmode_t VAR_3)
{
 struct bcache_device *VAR_4 = VAR_2->bd_disk->private_data;

 if (FUNC_1(VAR_0, &VAR_4->flags))
  return -VAR_1;

 FUNC_0(&VAR_4->cl);
 return 0;
}
