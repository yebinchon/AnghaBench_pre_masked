
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct blk_integrity {int dummy; } ;
struct TYPE_2__ {unsigned int bi_sector; } ;
struct bio_integrity_payload {TYPE_1__ bip_iter; int bip_vec; } ;
struct bio {int bi_disk; } ;


 struct bio_integrity_payload* FUNC_0 (struct bio*) ;
 unsigned int FUNC_1 (struct blk_integrity*,unsigned int) ;
 struct blk_integrity* FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*,unsigned int) ;

void FUNC_4(struct bio *VAR_0, unsigned int VAR_1)
{
 struct bio_integrity_payload *VAR_2 = FUNC_0(VAR_0);
 struct blk_integrity *VAR_3 = FUNC_2(VAR_0->bi_disk);
 unsigned VAR_4 = FUNC_1(VAR_3, VAR_1 >> 9);

 VAR_2->bip_iter.bi_sector += VAR_1 >> 9;
 FUNC_3(VAR_2->bip_vec, &VAR_2->bip_iter, VAR_4);
}
