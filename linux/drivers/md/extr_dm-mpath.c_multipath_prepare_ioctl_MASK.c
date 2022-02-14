
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* dev; } ;
struct pgpath {TYPE_2__ path; } ;
struct multipath {TYPE_3__* ti; int flags; int current_pg; int current_pgpath; } ;
struct dm_target {scalar_t__ len; struct multipath* private; } ;
struct block_device {int bd_inode; } ;
struct TYPE_6__ {int table; } ;
struct TYPE_4__ {struct block_device* bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct pgpath* FUNC_0 (int ) ;
 int VAR_5 ;
 struct pgpath* FUNC_1 (struct multipath*,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct multipath*) ;
 int FUNC_5 (struct multipath*) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct dm_target *VAR_6,
       struct block_device **VAR_7)
{
 struct multipath *VAR_8 = VAR_6->private;
 struct pgpath *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_0(VAR_8->current_pgpath);
 if (!VAR_9)
  VAR_9 = FUNC_1(VAR_8, 0);

 if (VAR_9) {
  if (!FUNC_6(VAR_4, &VAR_8->flags)) {
   *VAR_7 = VAR_9->path.dev->bdev;
   VAR_10 = 0;
  } else {

   VAR_10 = -VAR_1;
  }
 } else {

  if (FUNC_6(VAR_3, &VAR_8->flags))
   VAR_10 = -VAR_1;
  else
   VAR_10 = -VAR_0;
 }

 if (VAR_10 == -VAR_1) {
  if (!FUNC_0(VAR_8->current_pg)) {

   (void) FUNC_1(VAR_8, 0);
  }
  if (FUNC_6(VAR_2, &VAR_8->flags))
   FUNC_4(VAR_8);
  FUNC_2(VAR_8->ti->table);
  FUNC_5(VAR_8);
 }




 if (!VAR_10 && VAR_6->len != FUNC_3((*VAR_7)->bd_inode) >> VAR_5)
  return 1;
 return VAR_10;
}
