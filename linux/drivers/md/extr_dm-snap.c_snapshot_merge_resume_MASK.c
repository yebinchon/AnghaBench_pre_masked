
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_target {int max_io_len; struct dm_snapshot* private; } ;
struct dm_snapshot {TYPE_1__* origin; } ;
struct TYPE_2__ {int bdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dm_target*) ;
 int FUNC_2 (struct dm_snapshot*) ;

__attribute__((used)) static void FUNC_3(struct dm_target *VAR_0)
{
 struct dm_snapshot *VAR_1 = VAR_0->private;




 FUNC_1(VAR_0);




 VAR_0->max_io_len = FUNC_0(VAR_1->origin->bdev);

 FUNC_2(VAR_1);
}
