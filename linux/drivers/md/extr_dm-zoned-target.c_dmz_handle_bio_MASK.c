
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dmz_target {TYPE_1__* dev; int reclaim; struct dmz_metadata* metadata; } ;
struct dmz_metadata {int dummy; } ;
struct dmz_bioctx {struct dm_zone* zone; } ;
struct dm_zone {int dummy; } ;
struct dm_chunk_work {int dummy; } ;
struct bio {int dummy; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dm_zone*) ;
 int FUNC_1 (struct dm_zone*) ;




 int FUNC_2 (struct bio*) ;
 struct dmz_bioctx* FUNC_3 (struct bio*,int) ;
 int FUNC_4 (struct dm_zone*) ;
 int FUNC_5 (TYPE_1__*,struct bio*) ;
 int FUNC_6 (struct bio*,int ) ;
 int FUNC_7 (TYPE_1__*,char*,int) ;
 struct dm_zone* FUNC_8 (struct dmz_metadata*,int ,int) ;
 int FUNC_9 (struct dmz_target*,struct dm_zone*,struct bio*) ;
 int FUNC_10 (struct dmz_target*,struct dm_zone*,struct bio*) ;
 int FUNC_11 (struct dmz_target*,struct dm_zone*,struct bio*) ;
 int FUNC_12 (struct dmz_metadata*) ;
 int FUNC_13 (struct dmz_metadata*,struct dm_zone*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct dmz_metadata*) ;
 int FUNC_16 (int) ;

__attribute__((used)) static void FUNC_17(struct dmz_target *VAR_2, struct dm_chunk_work *VAR_3,
      struct bio *VAR_4)
{
 struct dmz_bioctx *VAR_5 = FUNC_3(VAR_4, sizeof(struct dmz_bioctx));
 struct dmz_metadata *VAR_6 = VAR_2->metadata;
 struct dm_zone *VAR_7;
 int VAR_8;





 if (FUNC_2(VAR_4) == 129)
  FUNC_14(VAR_2->reclaim);

 FUNC_12(VAR_6);

 if (VAR_2->dev->flags & VAR_0) {
  VAR_8 = -VAR_1;
  goto out;
 }






 VAR_7 = FUNC_8(VAR_6, FUNC_5(VAR_2->dev, VAR_4),
         FUNC_2(VAR_4));
 if (FUNC_0(VAR_7)) {
  VAR_8 = FUNC_1(VAR_7);
  goto out;
 }


 if (VAR_7) {
  FUNC_4(VAR_7);
  VAR_5->zone = VAR_7;
 }

 switch (FUNC_2(VAR_4)) {
 case 130:
  VAR_8 = FUNC_10(VAR_2, VAR_7, VAR_4);
  break;
 case 129:
  VAR_8 = FUNC_11(VAR_2, VAR_7, VAR_4);
  break;
 case 131:
 case 128:
  VAR_8 = FUNC_9(VAR_2, VAR_7, VAR_4);
  break;
 default:
  FUNC_7(VAR_2->dev, "Unsupported BIO operation 0x%x",
       FUNC_2(VAR_4));
  VAR_8 = -VAR_1;
 }





 if (VAR_7)
  FUNC_13(VAR_6, VAR_7);
out:
 FUNC_6(VAR_4, FUNC_16(VAR_8));

 FUNC_15(VAR_6);
}
