
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_target {struct dmz_metadata* metadata; } ;
struct dmz_metadata {int dummy; } ;
struct dm_zone {struct dm_zone* bzone; } ;
struct bio {int dummy; } ;
typedef int sector_t ;


 int VAR_0 ;
 int FUNC_0 (struct dmz_metadata*,struct dm_zone*,int ,unsigned int) ;
 scalar_t__ FUNC_1 (struct dm_zone*) ;
 int FUNC_2 (struct dmz_target*,struct dm_zone*,struct bio*,int ,unsigned int) ;
 int FUNC_3 (struct dmz_metadata*,struct dm_zone*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct dmz_target *VAR_1,
       struct dm_zone *VAR_2, struct bio *VAR_3,
       sector_t VAR_4,
       unsigned int VAR_5)
{
 struct dmz_metadata *VAR_6 = VAR_1->metadata;
 struct dm_zone *VAR_7 = VAR_2->bzone;
 int VAR_8;

 if (FUNC_1(VAR_2))
  return -VAR_0;


 VAR_8 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_8)
  return VAR_8;





 VAR_8 = FUNC_3(VAR_6, VAR_2, VAR_4, VAR_5);
 if (VAR_8 == 0 && VAR_7)
  VAR_8 = FUNC_0(VAR_6, VAR_7, VAR_4, VAR_5);

 return VAR_8;
}
