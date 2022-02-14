
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct switch_ctx {TYPE_2__* path_list; } ;
struct dm_target {scalar_t__ len; struct switch_ctx* private; } ;
struct block_device {int bd_inode; } ;
struct TYPE_4__ {scalar_t__ start; TYPE_1__* dmdev; } ;
struct TYPE_3__ {struct block_device* bdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct switch_ctx*,int ) ;

__attribute__((used)) static int FUNC_2(struct dm_target *VAR_1, struct block_device **VAR_2)
{
 struct switch_ctx *VAR_3 = VAR_1->private;
 unsigned VAR_4;

 VAR_4 = FUNC_1(VAR_3, 0);

 *VAR_2 = VAR_3->path_list[VAR_4].dmdev->bdev;




 if (VAR_1->len + VAR_3->path_list[VAR_4].start !=
     FUNC_0((*VAR_2)->bd_inode) >> VAR_0)
  return 1;
 return 0;
}
