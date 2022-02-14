
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct blk_integrity {int dummy; } ;
struct TYPE_2__ {int bi_size; } ;
struct bio_integrity_payload {TYPE_1__ bip_iter; } ;
struct bio {int bi_disk; } ;


 struct bio_integrity_payload* FUNC_0 (struct bio*) ;
 int FUNC_1 (struct blk_integrity*,int ) ;
 int FUNC_2 (struct bio*) ;
 struct blk_integrity* FUNC_3 (int ) ;

void FUNC_4(struct bio *VAR_0)
{
 struct bio_integrity_payload *VAR_1 = FUNC_0(VAR_0);
 struct blk_integrity *VAR_2 = FUNC_3(VAR_0->bi_disk);

 VAR_1->bip_iter.bi_size = FUNC_1(VAR_2, FUNC_2(VAR_0));
}
