
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dmz_metadata {TYPE_1__* dev; } ;
struct dmz_mblock {scalar_t__ data; } ;
struct dm_zone {int dummy; } ;
typedef unsigned int sector_t ;
struct TYPE_2__ {unsigned int zone_nr_blocks; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (struct dmz_mblock*) ;
 int FUNC_1 (struct dmz_mblock*) ;
 int FUNC_2 (int) ;
 struct dmz_mblock* FUNC_3 (struct dmz_metadata*,struct dm_zone*,unsigned int) ;
 int FUNC_4 (struct dmz_metadata*,struct dmz_mblock*) ;
 unsigned int FUNC_5 (unsigned long*,unsigned int,unsigned int) ;
 unsigned int FUNC_6 (unsigned long*,unsigned int,unsigned int) ;
 unsigned int FUNC_7 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct dmz_metadata *VAR_2, struct dm_zone *VAR_3,
     sector_t VAR_4, unsigned int VAR_5,
     int VAR_6)
{
 struct dmz_mblock *VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10;
 unsigned long *VAR_11;
 int VAR_12 = 0;

 FUNC_2(VAR_4 + VAR_5 > VAR_2->dev->zone_nr_blocks);

 while (VAR_5) {

  VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_4);
  if (FUNC_0(VAR_7))
   return FUNC_1(VAR_7);


  VAR_11 = (unsigned long *) VAR_7->data;
  VAR_8 = VAR_4 & VAR_0;
  VAR_10 = FUNC_7(VAR_5, VAR_1 - VAR_8);
  if (VAR_6)
   VAR_9 = FUNC_5(VAR_11, VAR_1, VAR_8);
  else
   VAR_9 = FUNC_6(VAR_11, VAR_1, VAR_8);
  FUNC_4(VAR_2, VAR_7);

  VAR_12 += VAR_9 - VAR_8;
  if (VAR_9 < VAR_1)
   break;

  VAR_5 -= VAR_10;
  VAR_4 += VAR_10;
 }

 return VAR_12;
}
