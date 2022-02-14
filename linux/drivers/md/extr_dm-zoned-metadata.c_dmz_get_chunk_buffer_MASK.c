
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_metadata {int map_rnd_list; int dev; } ;
struct dm_zone {int link; struct dm_zone* bzone; int chunk; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dm_zone* FUNC_0 (int ) ;
 struct dm_zone* FUNC_1 (struct dmz_metadata*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct dmz_metadata*,struct dm_zone*) ;
 int FUNC_4 (struct dmz_metadata*) ;
 int FUNC_5 (struct dmz_metadata*,int ,int ,int ) ;
 int FUNC_6 (struct dmz_metadata*) ;
 int FUNC_7 (struct dmz_metadata*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int ,int *) ;

struct dm_zone *FUNC_10(struct dmz_metadata *VAR_3,
         struct dm_zone *VAR_4)
{
 struct dm_zone *VAR_5;

 FUNC_4(VAR_3);
again:
 VAR_5 = VAR_4->bzone;
 if (VAR_5)
  goto out;


 VAR_5 = FUNC_1(VAR_3, VAR_0);
 if (!VAR_5) {
  if (FUNC_2(VAR_3->dev)) {
   VAR_5 = FUNC_0(-VAR_2);
   goto out;
  }
  FUNC_7(VAR_3);
  goto again;
 }


 FUNC_5(VAR_3, VAR_4->chunk, FUNC_3(VAR_3, VAR_4),
         FUNC_3(VAR_3, VAR_5));

 FUNC_9(VAR_1, &VAR_5->flags);
 VAR_5->chunk = VAR_4->chunk;
 VAR_5->bzone = VAR_4;
 VAR_4->bzone = VAR_5;
 FUNC_8(&VAR_5->link, &VAR_3->map_rnd_list);
out:
 FUNC_6(VAR_3);

 return VAR_5;
}
