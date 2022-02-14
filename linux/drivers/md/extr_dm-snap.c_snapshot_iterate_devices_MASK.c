
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dm_target {int len; struct dm_snapshot* private; } ;
struct dm_snapshot {TYPE_1__* cow; TYPE_1__* origin; } ;
typedef int (* iterate_devices_callout_fn ) (struct dm_target*,TYPE_1__*,int ,int ,void*) ;
struct TYPE_3__ {int bdev; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct dm_target *VAR_0,
        iterate_devices_callout_fn VAR_1, void *VAR_2)
{
 struct dm_snapshot *VAR_3 = VAR_0->private;
 int VAR_4;

 VAR_4 = VAR_1(VAR_0, VAR_3->origin, 0, VAR_0->len, VAR_2);

 if (!VAR_4)
  VAR_4 = VAR_1(VAR_0, VAR_3->cow, 0, FUNC_0(VAR_3->cow->bdev), VAR_2);

 return VAR_4;
}
