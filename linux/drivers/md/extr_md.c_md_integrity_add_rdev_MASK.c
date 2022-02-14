
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {int gendisk; } ;
struct md_rdev {TYPE_1__* bdev; } ;
struct blk_integrity {int dummy; } ;
struct TYPE_2__ {int bd_disk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 struct blk_integrity* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mddev*) ;
 int FUNC_4 (char*,int ,int ) ;

int FUNC_5(struct md_rdev *VAR_2, struct mddev *VAR_3)
{
 struct blk_integrity *VAR_4;
 char VAR_5[VAR_0];

 if (!VAR_3->gendisk)
  return 0;

 VAR_4 = FUNC_1(VAR_3->gendisk);

 if (!VAR_4)
  return 0;

 if (FUNC_2(VAR_3->gendisk, VAR_2->bdev->bd_disk) != 0) {
  FUNC_4("%s: incompatible integrity profile for %s\n",
         FUNC_3(VAR_3), FUNC_0(VAR_2->bdev, VAR_5));
  return -VAR_1;
 }

 return 0;
}
