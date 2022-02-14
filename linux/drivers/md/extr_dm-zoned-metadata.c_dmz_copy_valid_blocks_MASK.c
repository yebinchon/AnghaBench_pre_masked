
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dmz_metadata {TYPE_1__* dev; } ;
struct dmz_mblock {int data; } ;
struct dm_zone {int weight; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {scalar_t__ zone_nr_blocks; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct dmz_mblock*) ;
 int FUNC_1 (struct dmz_mblock*) ;
 int FUNC_2 (struct dmz_metadata*,struct dmz_mblock*) ;
 struct dmz_mblock* FUNC_3 (struct dmz_metadata*,struct dm_zone*,scalar_t__) ;
 int FUNC_4 (struct dmz_metadata*,struct dmz_mblock*) ;
 int FUNC_5 (int ,int ,int ) ;

int FUNC_6(struct dmz_metadata *VAR_2, struct dm_zone *VAR_3,
     struct dm_zone *VAR_4)
{
 struct dmz_mblock *VAR_5, *VAR_6;
 sector_t VAR_7 = 0;


 while (VAR_7 < VAR_2->dev->zone_nr_blocks) {
  VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_7);
  if (FUNC_0(VAR_5))
   return FUNC_1(VAR_5);
  VAR_6 = FUNC_3(VAR_2, VAR_4, VAR_7);
  if (FUNC_0(VAR_6)) {
   FUNC_4(VAR_2, VAR_5);
   return FUNC_1(VAR_6);
  }

  FUNC_5(VAR_6->data, VAR_5->data, VAR_0);
  FUNC_2(VAR_2, VAR_6);

  FUNC_4(VAR_2, VAR_6);
  FUNC_4(VAR_2, VAR_5);

  VAR_7 += VAR_1;
 }

 VAR_4->weight = VAR_3->weight;

 return 0;
}
