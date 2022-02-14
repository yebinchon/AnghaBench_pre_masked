
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_snapshot {int list; TYPE_1__* origin; } ;
struct block_device {int dummy; } ;
struct TYPE_2__ {struct block_device* bdev; } ;


 int FUNC_0 (int ,struct dm_snapshot*) ;
 int FUNC_1 (struct block_device*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct dm_snapshot *VAR_1)
{
 struct block_device *VAR_2 = VAR_1->origin->bdev;

 FUNC_2(&VAR_0);

 FUNC_3(&VAR_1->list);
 FUNC_0(FUNC_1(VAR_2), VAR_1);

 FUNC_4(&VAR_0);
}
