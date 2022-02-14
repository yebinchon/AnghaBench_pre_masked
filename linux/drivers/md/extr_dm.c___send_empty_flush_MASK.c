
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dm_target {int num_flush_bios; } ;
struct clone_info {int bio; int map; TYPE_2__* io; } ;
struct TYPE_4__ {TYPE_1__* md; } ;
struct TYPE_3__ {int bdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct clone_info*,struct dm_target*,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 struct dm_target* FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct clone_info *VAR_0)
{
 unsigned VAR_1 = 0;
 struct dm_target *VAR_2;
 FUNC_4(VAR_0->bio, VAR_0->io->md->bdev);

 FUNC_0(FUNC_3(VAR_0->bio));
 while ((VAR_2 = FUNC_5(VAR_0->map, VAR_1++)))
  FUNC_1(VAR_0, VAR_2, VAR_2->num_flush_bios, ((void*)0));

 FUNC_2(VAR_0->bio);

 return 0;
}
