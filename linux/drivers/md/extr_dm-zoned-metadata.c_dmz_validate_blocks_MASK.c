
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dmz_metadata {TYPE_1__* dev; } ;
struct dmz_mblock {scalar_t__ data; } ;
struct dm_zone {unsigned int weight; } ;
typedef unsigned int sector_t ;
struct TYPE_3__ {unsigned int zone_nr_blocks; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct dmz_mblock*) ;
 int FUNC_1 (struct dmz_mblock*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,char*,int ,unsigned long long,unsigned int) ;
 int FUNC_4 (TYPE_1__*,char*,int ,unsigned int,unsigned int) ;
 int FUNC_5 (struct dmz_metadata*,struct dmz_mblock*) ;
 struct dmz_mblock* FUNC_6 (struct dmz_metadata*,struct dm_zone*,unsigned int) ;
 int FUNC_7 (struct dmz_metadata*,struct dm_zone*) ;
 int FUNC_8 (struct dmz_metadata*,struct dmz_mblock*) ;
 unsigned int FUNC_9 (unsigned long*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_10 (int) ;
 unsigned int FUNC_11 (unsigned int,scalar_t__) ;

int FUNC_12(struct dmz_metadata *VAR_2, struct dm_zone *VAR_3,
   sector_t VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8;
 unsigned int VAR_9 = VAR_2->dev->zone_nr_blocks;
 struct dmz_mblock *VAR_10;
 unsigned int VAR_11 = 0;

 FUNC_3(VAR_2->dev, "=> VALIDATE zone %u, block %llu, %u blocks",
        FUNC_7(VAR_2, VAR_3), (unsigned long long)VAR_4,
        VAR_5);

 FUNC_2(VAR_4 + VAR_5 > VAR_9);

 while (VAR_5) {

  VAR_10 = FUNC_6(VAR_2, VAR_3, VAR_4);
  if (FUNC_0(VAR_10))
   return FUNC_1(VAR_10);


  VAR_7 = VAR_4 & VAR_0;
  VAR_8 = FUNC_11(VAR_5, VAR_1 - VAR_7);

  VAR_6 = FUNC_9((unsigned long *)VAR_10->data, VAR_7, VAR_8);
  if (VAR_6) {
   FUNC_5(VAR_2, VAR_10);
   VAR_11 += VAR_6;
  }
  FUNC_8(VAR_2, VAR_10);

  VAR_5 -= VAR_8;
  VAR_4 += VAR_8;
 }

 if (FUNC_10(VAR_3->weight + VAR_11 <= VAR_9))
  VAR_3->weight += VAR_11;
 else {
  FUNC_4(VAR_2->dev, "Zone %u: weight %u should be <= %u",
        FUNC_7(VAR_2, VAR_3), VAR_3->weight,
        VAR_9 - VAR_11);
  VAR_3->weight = VAR_9;
 }

 return 0;
}
