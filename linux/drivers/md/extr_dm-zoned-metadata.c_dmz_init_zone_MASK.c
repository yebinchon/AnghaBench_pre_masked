
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_metadata {struct dm_zone* sb_zone; int nr_rnd_zones; int nr_useable_zones; struct dmz_dev* dev; } ;
struct dmz_dev {scalar_t__ zone_nr_sectors; scalar_t__ capacity; } ;
struct dm_zone {scalar_t__ wp_block; int flags; int chunk; int refcount; int link; } ;
struct blk_zone {scalar_t__ len; scalar_t__ start; scalar_t__ type; scalar_t__ cond; scalar_t__ wp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct dm_zone*) ;
 int FUNC_3 (struct dm_zone*) ;
 scalar_t__ FUNC_4 (struct dm_zone*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct dmz_metadata *VAR_11, struct dm_zone *VAR_12,
    struct blk_zone *VAR_13)
{
 struct dmz_dev *VAR_14 = VAR_11->dev;


 if (VAR_13->len != VAR_14->zone_nr_sectors) {
  if (VAR_13->start + VAR_13->len == VAR_14->capacity)
   return 0;
  return -VAR_10;
 }

 FUNC_0(&VAR_12->link);
 FUNC_1(&VAR_12->refcount, 0);
 VAR_12->chunk = VAR_5;

 if (VAR_13->type == VAR_2) {
  FUNC_6(VAR_8, &VAR_12->flags);
  VAR_11->nr_rnd_zones++;
 } else if (VAR_13->type == VAR_4 ||
     VAR_13->type == VAR_3) {
  FUNC_6(VAR_9, &VAR_12->flags);
 } else
  return -VAR_10;

 if (VAR_13->cond == VAR_0)
  FUNC_6(VAR_6, &VAR_12->flags);
 else if (VAR_13->cond == VAR_1)
  FUNC_6(VAR_7, &VAR_12->flags);

 if (FUNC_4(VAR_12))
  VAR_12->wp_block = 0;
 else
  VAR_12->wp_block = FUNC_5(VAR_13->wp - VAR_13->start);

 if (!FUNC_2(VAR_12) && !FUNC_3(VAR_12)) {
  VAR_11->nr_useable_zones++;
  if (FUNC_4(VAR_12)) {
   VAR_11->nr_rnd_zones++;
   if (!VAR_11->sb_zone) {

    VAR_11->sb_zone = VAR_12;
   }
  }
 }

 return 0;
}
