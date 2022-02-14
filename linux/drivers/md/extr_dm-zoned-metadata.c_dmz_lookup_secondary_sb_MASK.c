
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dmz_metadata {int nr_rnd_zones; TYPE_3__* sb; TYPE_1__* dev; } ;
struct dmz_mblock {TYPE_2__* data; } ;
struct TYPE_6__ {struct dmz_mblock* mblk; scalar_t__ block; TYPE_2__* sb; } ;
struct TYPE_5__ {int magic; } ;
struct TYPE_4__ {unsigned int zone_nr_blocks; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dmz_mblock* FUNC_0 (struct dmz_metadata*,int ) ;
 int FUNC_1 (struct dmz_metadata*,struct dmz_mblock*) ;
 scalar_t__ FUNC_2 (struct dmz_metadata*,int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct dmz_metadata *VAR_3)
{
 unsigned int VAR_4 = VAR_3->dev->zone_nr_blocks;
 struct dmz_mblock *VAR_5;
 int VAR_6;


 VAR_5 = FUNC_0(VAR_3, 0);
 if (!VAR_5)
  return -VAR_2;

 VAR_3->sb[1].mblk = VAR_5;
 VAR_3->sb[1].sb = VAR_5->data;


 VAR_3->sb[1].block = VAR_3->sb[0].block + VAR_4;
 for (VAR_6 = 0; VAR_6 < VAR_3->nr_rnd_zones - 1; VAR_6++) {
  if (FUNC_2(VAR_3, 1) != 0)
   break;
  if (FUNC_3(VAR_3->sb[1].sb->magic) == VAR_0)
   return 0;
  VAR_3->sb[1].block += VAR_4;
 }

 FUNC_1(VAR_3, VAR_5);
 VAR_3->sb[1].mblk = ((void*)0);

 return -VAR_1;
}
