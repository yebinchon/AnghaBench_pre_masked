
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {struct cache* private; } ;
struct cache {int committer; int origin_blocks; } ;
struct bio {int dummy; } ;
typedef int dm_oblock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cache*,struct bio*) ;
 int FUNC_1 (struct cache*,struct bio*) ;
 scalar_t__ FUNC_2 (struct bio*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct cache*,struct bio*) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (struct cache*,struct bio*,int ,int*) ;
 int FUNC_7 (struct cache*,struct bio*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct dm_target *VAR_2, struct bio *VAR_3)
{
 struct cache *VAR_4 = VAR_2->private;

 int VAR_5;
 bool VAR_6;
 dm_oblock_t VAR_7 = FUNC_4(VAR_4, VAR_3);

 FUNC_5(VAR_3);
 if (FUNC_9(FUNC_3(VAR_7) >= FUNC_3(VAR_4->origin_blocks))) {





  FUNC_7(VAR_4, VAR_3);
  FUNC_0(VAR_4, VAR_3);
  return VAR_0;
 }

 if (FUNC_2(VAR_3)) {
  FUNC_1(VAR_4, VAR_3);
  return VAR_1;
 }

 VAR_5 = FUNC_6(VAR_4, VAR_3, VAR_7, &VAR_6);
 if (VAR_6)
  FUNC_8(&VAR_4->committer);

 return VAR_5;
}
