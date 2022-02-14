
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {scalar_t__ array_sectors; } ;
struct raid_set {struct mddev md; } ;
struct dm_target {struct raid_set* private; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 int FUNC_1 (struct mddev*,struct bio*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct dm_target *VAR_2, struct bio *VAR_3)
{
 struct raid_set *VAR_4 = VAR_2->private;
 struct mddev *VAR_5 = &VAR_4->md;
 if (FUNC_2(FUNC_0(VAR_3) > VAR_5->array_sectors))
  return VAR_0;

 FUNC_1(VAR_5, VAR_3);

 return VAR_1;
}
