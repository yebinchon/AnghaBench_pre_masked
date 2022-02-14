
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dmz_metadata {TYPE_1__* dev; } ;
struct dmz_mblock {scalar_t__ data; } ;
struct dm_zone {int dummy; } ;
typedef int sector_t ;
struct TYPE_2__ {int zone_nr_blocks; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dmz_mblock*) ;
 int FUNC_1 (struct dmz_mblock*) ;
 int FUNC_2 (int) ;
 struct dmz_mblock* FUNC_3 (struct dmz_metadata*,struct dm_zone*,int) ;
 int FUNC_4 (struct dmz_metadata*,struct dmz_mblock*) ;
 scalar_t__ FUNC_5 (int,unsigned long*) ;

__attribute__((used)) static int FUNC_6(struct dmz_metadata *VAR_1, struct dm_zone *VAR_2,
     sector_t VAR_3)
{
 struct dmz_mblock *VAR_4;
 int VAR_5;

 FUNC_2(VAR_3 >= VAR_1->dev->zone_nr_blocks);


 VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);


 VAR_5 = FUNC_5(VAR_3 & VAR_0,
         (unsigned long *) VAR_4->data) != 0;

 FUNC_4(VAR_1, VAR_4);

 return VAR_5;
}
