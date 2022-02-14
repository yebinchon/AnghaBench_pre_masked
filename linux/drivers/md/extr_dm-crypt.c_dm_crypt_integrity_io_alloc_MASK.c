
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dm_crypt_io {int integrity_metadata; scalar_t__ sector; TYPE_2__* cc; } ;
struct TYPE_3__ {unsigned int bi_size; scalar_t__ bi_sector; } ;
struct bio_integrity_payload {TYPE_1__ bip_iter; } ;
struct bio {int dummy; } ;
struct TYPE_4__ {unsigned int on_disk_tag_size; unsigned int sector_shift; scalar_t__ start; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bio_integrity_payload*) ;
 int FUNC_1 (struct bio_integrity_payload*) ;
 int FUNC_2 (struct bio*,int ,unsigned int,int ) ;
 struct bio_integrity_payload* FUNC_3 (struct bio*,int ,int) ;
 unsigned int FUNC_4 (struct bio*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct dm_crypt_io *VAR_2, struct bio *VAR_3)
{
 struct bio_integrity_payload *VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 if (!FUNC_4(VAR_3) || !VAR_2->cc->on_disk_tag_size)
  return 0;

 VAR_4 = FUNC_3(VAR_3, VAR_1, 1);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_5 = VAR_2->cc->on_disk_tag_size * (FUNC_4(VAR_3) >> VAR_2->cc->sector_shift);

 VAR_4->bip_iter.bi_size = VAR_5;
 VAR_4->bip_iter.bi_sector = VAR_2->cc->start + VAR_2->sector;

 VAR_6 = FUNC_2(VAR_3, FUNC_7(VAR_2->integrity_metadata),
         VAR_5, FUNC_5(VAR_2->integrity_metadata));
 if (FUNC_6(VAR_6 != VAR_5))
  return -VAR_0;

 return 0;
}
