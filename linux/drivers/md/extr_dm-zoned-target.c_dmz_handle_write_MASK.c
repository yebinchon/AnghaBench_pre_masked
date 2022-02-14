
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_target {int metadata; int dev; } ;
struct dm_zone {scalar_t__ wp_block; } ;
struct bio {int dummy; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 int FUNC_0 (struct bio*) ;
 unsigned int FUNC_1 (struct bio*) ;
 scalar_t__ FUNC_2 (int ,struct bio*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,unsigned long long,char*,int ,unsigned long long,unsigned int) ;
 int FUNC_5 (struct dmz_target*,struct dm_zone*,struct bio*,scalar_t__,unsigned int) ;
 int FUNC_6 (struct dmz_target*,struct dm_zone*,struct bio*,scalar_t__,unsigned int) ;
 int FUNC_7 (int ,struct dm_zone*) ;
 scalar_t__ FUNC_8 (struct dm_zone*) ;

__attribute__((used)) static int FUNC_9(struct dmz_target *VAR_1, struct dm_zone *VAR_2,
       struct bio *VAR_3)
{
 sector_t VAR_4 = FUNC_3(VAR_1->dev, FUNC_0(VAR_3));
 unsigned int VAR_5 = FUNC_1(VAR_3);

 if (!VAR_2)
  return -VAR_0;

 FUNC_4(VAR_1->dev, "WRITE chunk %llu -> %s zone %u, block %llu, %u blocks",
        (unsigned long long)FUNC_2(VAR_1->dev, VAR_3),
        (FUNC_8(VAR_2) ? "RND" : "SEQ"),
        FUNC_7(VAR_1->metadata, VAR_2),
        (unsigned long long)VAR_4, VAR_5);

 if (FUNC_8(VAR_2) || VAR_4 == VAR_2->wp_block) {





  return FUNC_6(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 }





 return FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
