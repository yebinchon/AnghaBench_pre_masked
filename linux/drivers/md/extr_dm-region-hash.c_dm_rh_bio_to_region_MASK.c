
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_region_hash {scalar_t__ target_begin; } ;
struct TYPE_2__ {scalar_t__ bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
typedef int region_t ;


 int FUNC_0 (struct dm_region_hash*,scalar_t__) ;

region_t FUNC_1(struct dm_region_hash *VAR_0, struct bio *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1->bi_iter.bi_sector -
          VAR_0->target_begin);
}
