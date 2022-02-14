
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nullb_device {int zone_size; int zone_size_sects; int nr_zones; int zone_nr_conv; struct blk_zone* zones; scalar_t__ size; } ;
struct blk_zone {int start; int len; int wp; int cond; int type; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct blk_zone* FUNC_2 (int,int,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct nullb_device *VAR_10)
{
 sector_t VAR_11 = (sector_t)VAR_10->size * 1024 * 1024;
 sector_t VAR_12 = 0;
 unsigned int VAR_13;

 if (!FUNC_1(VAR_10->zone_size)) {
  FUNC_3("zone_size must be power-of-two\n");
  return -VAR_4;
 }

 VAR_10->zone_size_sects = VAR_10->zone_size << VAR_8;
 VAR_10->nr_zones = VAR_11 >>
    (VAR_7 + FUNC_0(VAR_10->zone_size_sects));
 VAR_10->zones = FUNC_2(VAR_10->nr_zones, sizeof(struct blk_zone),
   VAR_6 | VAR_9);
 if (!VAR_10->zones)
  return -VAR_5;

 if (VAR_10->zone_nr_conv >= VAR_10->nr_zones) {
  VAR_10->zone_nr_conv = VAR_10->nr_zones - 1;
  FUNC_4("changed the number of conventional zones to %u",
   VAR_10->zone_nr_conv);
 }

 for (VAR_13 = 0; VAR_13 < VAR_10->zone_nr_conv; VAR_13++) {
  struct blk_zone *VAR_14 = &VAR_10->zones[VAR_13];

  VAR_14->start = VAR_12;
  VAR_14->len = VAR_10->zone_size_sects;
  VAR_14->wp = VAR_14->start + VAR_14->len;
  VAR_14->type = VAR_2;
  VAR_14->cond = VAR_1;

  VAR_12 += VAR_10->zone_size_sects;
 }

 for (VAR_13 = VAR_10->zone_nr_conv; VAR_13 < VAR_10->nr_zones; VAR_13++) {
  struct blk_zone *VAR_15 = &VAR_10->zones[VAR_13];

  VAR_15->start = VAR_15->wp = VAR_12;
  VAR_15->len = VAR_10->zone_size_sects;
  VAR_15->type = VAR_3;
  VAR_15->cond = VAR_0;

  VAR_12 += VAR_10->zone_size_sects;
 }

 return 0;
}
