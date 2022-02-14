
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dm_crypt_io {TYPE_2__* base_bio; struct crypt_config* cc; } ;
struct crypt_config {TYPE_1__* dev; } ;
struct bio {int bi_opf; int bi_end_io; struct dm_crypt_io* bi_private; } ;
struct TYPE_4__ {int bi_opf; } ;
struct TYPE_3__ {int bdev; } ;


 int FUNC_0 (struct bio*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct dm_crypt_io *VAR_1, struct bio *VAR_2)
{
 struct crypt_config *VAR_3 = VAR_1->cc;

 VAR_2->bi_private = VAR_1;
 VAR_2->bi_end_io = VAR_0;
 FUNC_0(VAR_2, VAR_3->dev->bdev);
 VAR_2->bi_opf = VAR_1->base_bio->bi_opf;
}
