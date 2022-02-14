
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct dmz_metadata {int nr_meta_zones; int mblk_primary; scalar_t__ sb_gen; TYPE_2__* dev; TYPE_1__* sb; int sb_zone; } ;
struct TYPE_7__ {int gen; } ;
struct TYPE_6__ {int zone_nr_blocks_shift; } ;
struct TYPE_5__ {TYPE_4__* sb; scalar_t__ block; } ;


 int VAR_0 ;
 int FUNC_0 (struct dmz_metadata*,TYPE_4__*) ;
 int FUNC_1 (TYPE_2__*,char*,int,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (struct dmz_metadata*,int) ;
 int FUNC_4 (struct dmz_metadata*) ;
 int FUNC_5 (struct dmz_metadata*,int) ;
 scalar_t__ FUNC_6 (struct dmz_metadata*,int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct dmz_metadata *VAR_1)
{
 bool VAR_2[2] = {0, 0};
 u64 VAR_3[2] = {0, 0};
 int VAR_4;


 VAR_1->sb[0].block = FUNC_6(VAR_1, VAR_1->sb_zone);
 VAR_4 = FUNC_3(VAR_1, 0);
 if (VAR_4) {
  FUNC_2(VAR_1->dev, "Read primary super block failed");
  return VAR_4;
 }

 VAR_4 = FUNC_0(VAR_1, VAR_1->sb[0].sb);


 if (VAR_4 == 0) {
  VAR_2[0] = 1;
  VAR_1->sb[1].block = VAR_1->sb[0].block +
   (VAR_1->nr_meta_zones << VAR_1->dev->zone_nr_blocks_shift);
  VAR_4 = FUNC_3(VAR_1, 1);
 } else
  VAR_4 = FUNC_4(VAR_1);

 if (VAR_4) {
  FUNC_2(VAR_1->dev, "Read secondary super block failed");
  return VAR_4;
 }

 VAR_4 = FUNC_0(VAR_1, VAR_1->sb[1].sb);
 if (VAR_4 == 0)
  VAR_2[1] = 1;


 if (!VAR_2[0] && !VAR_2[1]) {
  FUNC_2(VAR_1->dev, "No valid super block found");
  return -VAR_0;
 }

 if (VAR_2[0])
  VAR_3[0] = FUNC_7(VAR_1->sb[0].sb->gen);
 else
  VAR_4 = FUNC_5(VAR_1, 0);

 if (VAR_2[1])
  VAR_3[1] = FUNC_7(VAR_1->sb[1].sb->gen);
 else
  VAR_4 = FUNC_5(VAR_1, 1);

 if (VAR_4) {
  FUNC_2(VAR_1->dev, "Recovery failed");
  return -VAR_0;
 }

 if (VAR_3[0] >= VAR_3[1]) {
  VAR_1->sb_gen = VAR_3[0];
  VAR_1->mblk_primary = 0;
 } else {
  VAR_1->sb_gen = VAR_3[1];
  VAR_1->mblk_primary = 1;
 }

 FUNC_1(VAR_1->dev, "Using super block %u (gen %llu)",
        VAR_1->mblk_primary, VAR_1->sb_gen);

 return 0;
}
