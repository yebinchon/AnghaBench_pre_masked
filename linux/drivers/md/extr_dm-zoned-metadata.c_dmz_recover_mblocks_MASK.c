
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page {int dummy; } ;
struct dmz_metadata {int nr_meta_zones; int nr_meta_blocks; TYPE_1__* sb; TYPE_2__* dev; int sb_zone; } ;
struct TYPE_6__ {int data; } ;
struct TYPE_5__ {int zone_nr_blocks_shift; } ;
struct TYPE_4__ {TYPE_3__* mblk; int sb; scalar_t__ block; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page*,int ) ;
 struct page* FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (struct dmz_metadata*,int ) ;
 int FUNC_3 (TYPE_2__*,char*,unsigned int) ;
 int FUNC_4 (struct dmz_metadata*,int ,scalar_t__,struct page*) ;
 scalar_t__ FUNC_5 (struct dmz_metadata*,int ) ;
 int FUNC_6 (struct dmz_metadata*,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct dmz_metadata *VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6 = VAR_5 ^ 0x1;
 struct page *VAR_7;
 int VAR_8, VAR_9;

 FUNC_3(VAR_4->dev, "Metadata set %u invalid: recovering", VAR_5);

 if (VAR_5 == 0)
  VAR_4->sb[0].block = FUNC_5(VAR_4, VAR_4->sb_zone);
 else {
  VAR_4->sb[1].block = VAR_4->sb[0].block +
   (VAR_4->nr_meta_zones << VAR_4->dev->zone_nr_blocks_shift);
 }

 VAR_7 = FUNC_1(VAR_1);
 if (!VAR_7)
  return -VAR_0;


 for (VAR_8 = 1; VAR_8 < VAR_4->nr_meta_blocks; VAR_8++) {
  VAR_9 = FUNC_4(VAR_4, VAR_2,
         VAR_4->sb[VAR_6].block + VAR_8, VAR_7);
  if (VAR_9)
   goto out;
  VAR_9 = FUNC_4(VAR_4, VAR_3,
         VAR_4->sb[VAR_5].block + VAR_8, VAR_7);
  if (VAR_9)
   goto out;
 }


 if (!VAR_4->sb[VAR_5].mblk) {
  VAR_4->sb[VAR_5].mblk = FUNC_2(VAR_4, 0);
  if (!VAR_4->sb[VAR_5].mblk) {
   VAR_9 = -VAR_0;
   goto out;
  }
  VAR_4->sb[VAR_5].sb = VAR_4->sb[VAR_5].mblk->data;
 }

 VAR_9 = FUNC_6(VAR_4, VAR_5);
out:
 FUNC_0(VAR_7, 0);

 return VAR_9;
}
