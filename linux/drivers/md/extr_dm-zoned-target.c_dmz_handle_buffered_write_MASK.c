
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_target {struct dmz_metadata* metadata; } ;
struct dmz_metadata {int dummy; } ;
struct dm_zone {scalar_t__ wp_block; } ;
struct bio {int dummy; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dm_zone*) ;
 int FUNC_1 (struct dm_zone*) ;
 struct dm_zone* FUNC_2 (struct dmz_metadata*,struct dm_zone*) ;
 int FUNC_3 (struct dmz_metadata*,struct dm_zone*,scalar_t__,unsigned int) ;
 scalar_t__ FUNC_4 (struct dm_zone*) ;
 int FUNC_5 (struct dmz_target*,struct dm_zone*,struct bio*,scalar_t__,unsigned int) ;
 int FUNC_6 (struct dmz_metadata*,struct dm_zone*,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct dmz_target *VAR_1,
         struct dm_zone *VAR_2, struct bio *VAR_3,
         sector_t VAR_4,
         unsigned int VAR_5)
{
 struct dmz_metadata *VAR_6 = VAR_1->metadata;
 struct dm_zone *VAR_7;
 int VAR_8;


 VAR_7 = FUNC_2(VAR_6, VAR_2);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 if (FUNC_4(VAR_7))
  return -VAR_0;


 VAR_8 = FUNC_5(VAR_1, VAR_7, VAR_3, VAR_4, VAR_5);
 if (VAR_8)
  return VAR_8;





 VAR_8 = FUNC_6(VAR_6, VAR_7, VAR_4, VAR_5);
 if (VAR_8 == 0 && VAR_4 < VAR_2->wp_block)
  VAR_8 = FUNC_3(VAR_6, VAR_2, VAR_4, VAR_5);

 return VAR_8;
}
