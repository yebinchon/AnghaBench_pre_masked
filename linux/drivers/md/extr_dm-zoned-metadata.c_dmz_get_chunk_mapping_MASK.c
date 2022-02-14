
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_metadata {int dev; struct dmz_mblock** map_mblk; } ;
struct dmz_mblock {scalar_t__ data; } ;
struct dmz_map {int dzone_id; } ;
struct dm_zone {unsigned int chunk; int flags; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dm_zone* FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct dm_zone*) ;
 struct dm_zone* FUNC_3 (struct dmz_metadata*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 struct dm_zone* FUNC_5 (struct dmz_metadata*,unsigned int) ;
 int FUNC_6 (struct dmz_metadata*,struct dm_zone*) ;
 scalar_t__ FUNC_7 (struct dm_zone*) ;
 int FUNC_8 (struct dmz_metadata*) ;
 int FUNC_9 (struct dmz_metadata*,struct dm_zone*) ;
 int FUNC_10 (struct dmz_metadata*,struct dm_zone*,unsigned int) ;
 scalar_t__ FUNC_11 (struct dm_zone*) ;
 int FUNC_12 (struct dmz_metadata*) ;
 int FUNC_13 (struct dmz_metadata*) ;
 int FUNC_14 (struct dmz_metadata*,struct dm_zone*) ;
 unsigned int FUNC_15 (int ) ;

struct dm_zone *FUNC_16(struct dmz_metadata *VAR_7, unsigned int VAR_8, int VAR_9)
{
 struct dmz_mblock *VAR_10 = VAR_7->map_mblk[VAR_8 >> VAR_2];
 struct dmz_map *VAR_11 = (struct dmz_map *) VAR_10->data;
 int VAR_12 = VAR_8 & VAR_1;
 unsigned int VAR_13;
 struct dm_zone *VAR_14 = ((void*)0);
 int VAR_15 = 0;

 FUNC_8(VAR_7);
again:

 VAR_13 = FUNC_15(VAR_11[VAR_12].dzone_id);
 if (VAR_13 == VAR_3) {




  if (VAR_9 != VAR_6)
   goto out;


  VAR_14 = FUNC_3(VAR_7, VAR_0);
  if (!VAR_14) {
   if (FUNC_4(VAR_7->dev)) {
    VAR_14 = FUNC_0(-VAR_5);
    goto out;
   }
   FUNC_13(VAR_7);
   goto again;
  }

  FUNC_10(VAR_7, VAR_14, VAR_8);

 } else {

  VAR_14 = FUNC_5(VAR_7, VAR_13);
  if (VAR_14->chunk != VAR_8) {
   VAR_14 = FUNC_0(-VAR_5);
   goto out;
  }


  if (FUNC_11(VAR_14)) {
   VAR_15 = FUNC_6(VAR_7, VAR_14);
   if (VAR_15) {
    VAR_14 = FUNC_0(-VAR_5);
    goto out;
   }
   FUNC_1(VAR_4, &VAR_14->flags);
  }
 }






 if (FUNC_7(VAR_14)) {
  FUNC_14(VAR_7, VAR_14);
  goto again;
 }
 FUNC_2(VAR_14);
 FUNC_9(VAR_7, VAR_14);
out:
 FUNC_12(VAR_7);

 return VAR_14;
}
