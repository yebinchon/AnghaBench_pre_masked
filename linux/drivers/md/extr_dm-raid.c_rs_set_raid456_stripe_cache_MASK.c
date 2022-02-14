
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct mddev {struct r5conf* private; int new_chunk_sectors; int chunk_sectors; } ;
struct raid_set {scalar_t__ stripe_cache_entries; TYPE_1__* ti; int raid_type; struct mddev md; } ;
struct r5conf {scalar_t__ min_nr_stripes; } ;
struct TYPE_2__ {char* error; } ;


 int FUNC_0 (char*,scalar_t__,...) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct mddev*,scalar_t__) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct raid_set *VAR_1)
{
 int VAR_2;
 struct r5conf *VAR_3;
 struct mddev *VAR_4 = &VAR_1->md;
 uint32_t VAR_5 = FUNC_1(VAR_4->chunk_sectors, VAR_4->new_chunk_sectors) / 2;
 uint32_t VAR_6 = VAR_1->stripe_cache_entries;

 if (!FUNC_3(VAR_1->raid_type)) {
  VAR_1->ti->error = "Inappropriate raid level; cannot change stripe_cache size";
  return -VAR_0;
 }

 if (VAR_6 < VAR_5) {
  FUNC_0("Adjusting requested %u stripe cache entries to %u to suit stripe size",
         VAR_6, VAR_5);
  VAR_6 = VAR_5;
 }

 VAR_3 = VAR_4->private;
 if (!VAR_3) {
  VAR_1->ti->error = "Cannot change stripe_cache size on inactive RAID set";
  return -VAR_0;
 }


 if (VAR_3->min_nr_stripes != VAR_6) {
  VAR_2 = FUNC_2(VAR_4, VAR_6);
  if (VAR_2) {
   VAR_1->ti->error = "Failed to set raid4/5/6 stripe cache size";
   return VAR_2;
  }

  FUNC_0("%u stripe cache entries", VAR_6);
 }

 return 0;
}
