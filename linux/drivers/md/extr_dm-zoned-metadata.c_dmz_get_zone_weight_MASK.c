
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dmz_metadata {TYPE_1__* dev; } ;
struct dmz_mblock {void* data; } ;
struct dm_zone {int weight; } ;
typedef unsigned int sector_t ;
struct TYPE_2__ {unsigned int zone_nr_blocks; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct dmz_mblock*) ;
 scalar_t__ FUNC_1 (void*,unsigned int,unsigned int) ;
 struct dmz_mblock* FUNC_2 (struct dmz_metadata*,struct dm_zone*,unsigned int) ;
 int FUNC_3 (struct dmz_metadata*,struct dmz_mblock*) ;
 unsigned int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct dmz_metadata *VAR_2, struct dm_zone *VAR_3)
{
 struct dmz_mblock *VAR_4;
 sector_t VAR_5 = 0;
 unsigned int VAR_6, VAR_7;
 unsigned int VAR_8 = VAR_2->dev->zone_nr_blocks;
 void *VAR_9;
 int VAR_10 = 0;

 while (VAR_8) {

  VAR_4 = FUNC_2(VAR_2, VAR_3, VAR_5);
  if (FUNC_0(VAR_4)) {
   VAR_10 = 0;
   break;
  }


  VAR_9 = VAR_4->data;
  VAR_6 = VAR_5 & VAR_0;
  VAR_7 = FUNC_4(VAR_8, VAR_1 - VAR_6);
  VAR_10 += FUNC_1(VAR_9, VAR_6, VAR_7);

  FUNC_3(VAR_2, VAR_4);

  VAR_8 -= VAR_7;
  VAR_5 += VAR_7;
 }

 VAR_3->weight = VAR_10;
}
