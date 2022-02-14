
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_metadata {int dev; } ;
struct dm_zone {unsigned int wp_block; } ;


 int FUNC_0 (int ,char*,int ,unsigned int,unsigned int) ;
 int FUNC_1 (struct dmz_metadata*,struct dm_zone*) ;
 int FUNC_2 (struct dmz_metadata*,struct dm_zone*,unsigned int,unsigned int) ;
 int FUNC_3 (struct dmz_metadata*,struct dm_zone*) ;

__attribute__((used)) static int FUNC_4(struct dmz_metadata *VAR_0,
        struct dm_zone *VAR_1)
{
 unsigned int VAR_2 = 0;
 int VAR_3;

 VAR_2 = VAR_1->wp_block;
 VAR_3 = FUNC_3(VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;

 FUNC_0(VAR_0->dev, "Processing zone %u write error (zone wp %u/%u)",
       FUNC_1(VAR_0, VAR_1), VAR_1->wp_block, VAR_2);

 if (VAR_1->wp_block < VAR_2) {
  FUNC_2(VAR_0, VAR_1, VAR_1->wp_block,
          VAR_2 - VAR_1->wp_block);
 }

 return 0;
}
