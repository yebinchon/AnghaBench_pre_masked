
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {struct dm_snapshot* private; } ;
struct dm_snapshot {int dummy; } ;
struct bio {int dummy; } ;
typedef int blk_status_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 int FUNC_1 (struct dm_snapshot*,struct bio*) ;

__attribute__((used)) static int FUNC_2(struct dm_target *VAR_1, struct bio *VAR_2,
  blk_status_t *VAR_3)
{
 struct dm_snapshot *VAR_4 = VAR_1->private;

 if (FUNC_0(VAR_2))
  FUNC_1(VAR_4, VAR_2);

 return VAR_0;
}
