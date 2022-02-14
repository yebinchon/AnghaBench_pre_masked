
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gendisk {int dummy; } ;
struct block_device {scalar_t__ bd_invalidated; } ;
struct TYPE_2__ {int kobj; } ;


 int VAR_0 ;
 int FUNC_0 (struct gendisk*,struct block_device*,int) ;
 TYPE_1__* FUNC_1 (struct gendisk*) ;
 int FUNC_2 (struct gendisk*,struct block_device*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct gendisk*,int ) ;

int FUNC_5(struct gendisk *VAR_1, struct block_device *VAR_2)
{
 int VAR_3;

 if (!VAR_2->bd_invalidated)
  return 0;

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_4(VAR_1, 0);
 FUNC_0(VAR_1, VAR_2, 0);
 VAR_2->bd_invalidated = 0;

 FUNC_3(&FUNC_1(VAR_1)->kobj, VAR_0);

 return 0;
}
