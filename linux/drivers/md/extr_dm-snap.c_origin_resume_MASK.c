
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_target {struct dm_origin* private; } ;
struct dm_origin {TYPE_1__* dev; int split_boundary; } ;
struct TYPE_2__ {int bdev; } ;


 int FUNC_0 (struct dm_origin*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct dm_target *VAR_1)
{
 struct dm_origin *VAR_2 = VAR_1->private;

 VAR_2->split_boundary = FUNC_2(VAR_2->dev->bdev);

 FUNC_1(&VAR_0);
 FUNC_0(VAR_2);
 FUNC_3(&VAR_0);
}
